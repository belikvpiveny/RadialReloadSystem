modded class ActionConstructor
{
	override void RegisterActions(TTypenameArray actions)
	{
		super.RegisterActions(actions);

		actions.Insert(ActionToggleUnderbarrel);

		Print("[UB] Registered ActionToggleUnderbarrel");
	}
};