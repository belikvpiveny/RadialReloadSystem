class RadialMagazineScanner
{
    static int SortMagazines(Managed a, Managed b)
    {
        Magazine magA = Magazine.Cast(a);
        Magazine magB = Magazine.Cast(b);

        return magB.GetAmmoCount() - magA.GetAmmoCount();
    }

    static void GetMagazines(PlayerBase player, out array<Magazine> mags)
    {
        mags = new array<Magazine>;

        array<EntityAI> items = new array<EntityAI>;
        player.GetInventory().EnumerateInventory(InventoryTraversalType.PREORDER, items);

        foreach (EntityAI item : items)
        {
            Magazine mag;

            if (Class.CastTo(mag, item))
            {
                mags.Insert(mag);
            }
        }

        mags.Sort(SortMagazines);
    }
}