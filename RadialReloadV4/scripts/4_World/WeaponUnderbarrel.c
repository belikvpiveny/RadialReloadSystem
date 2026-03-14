modded class Rifle_Base
{
    protected bool m_UBMode = false;

    void ToggleUnderbarrel()
    {
        int muzzleCount = GetMuzzleCount();

        if (muzzleCount <= 1)
            return;

        m_UBMode = !m_UBMode;

        if (m_UBMode)
        {
            SetCurrentMuzzle(1);
            Print("[UB] Underbarrel mode ON");
        }
        else
        {
            SetCurrentMuzzle(0);
            Print("[UB] Underbarrel mode OFF");
        }
    }

    bool HasUnderbarrel()
    {
        return GetMuzzleCount() > 1;
    }
}