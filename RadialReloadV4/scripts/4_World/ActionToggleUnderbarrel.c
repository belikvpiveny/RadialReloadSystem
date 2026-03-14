class ActionToggleUnderbarrel : ActionBase
{
    override bool IsInstant()
    {
        return true;
    }

    override bool HasTarget()
    {
        return false;
    }

    override typename GetInputType()
    {
        return ContinuousDefaultActionInput;
    }

    override void CreateConditionComponents()
    {
        m_ConditionItem = new CCINone;
        m_ConditionTarget = new CCTNone;
    }

    override bool Can(PlayerBase player, ActionTarget target, ItemBase item, int condition_mask)
    {
        if (!player)
            return false;

        EntityAI inHands = EntityAI.Cast(player.GetHumanInventory().GetEntityInHands());
        if (!inHands)
            return false;

        Rifle_Base rifle;
        if (!Class.CastTo(rifle, inHands))
            return false;

        return rifle.HasUnderbarrel();
    }

    override void OnStartServer(ActionData action_data)
    {
        PlayerBase player = action_data.m_Player;

        if (!player)
            return;

        EntityAI inHands = EntityAI.Cast(player.GetHumanInventory().GetEntityInHands());

        Rifle_Base rifle;
        if (Class.CastTo(rifle, inHands))
        {
            rifle.ToggleUnderbarrel();
        }
    }
}