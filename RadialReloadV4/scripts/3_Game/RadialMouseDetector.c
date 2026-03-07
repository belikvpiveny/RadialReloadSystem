class RadialMouseDetector
{
	static int GetSegment()
	{
		int mouseX;
		int mouseY;

		GetGame().GetWorkspace().GetMousePos(mouseX, mouseY);

		float screenW;
		float screenH;

		GetGame().GetWorkspace().GetScreenSize(screenW, screenH);

		float cx = screenW * 0.5;
		float cy = screenH * 0.5;

		float dx = mouseX - cx;
		float dy = mouseY - cy;

		float angle = Math.Atan2(dy, dx);

		float deg = angle * Math.RAD2DEG;

		if (deg < 0)
			deg += 360;

		return Math.Floor(deg / 45);
	}
}