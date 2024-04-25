[ComponentEditorProps(category: "Game Mode Component", description: "")]
class CRF_LinearAASGameModeComponentClass: SCR_BaseGameModeComponentClass
{
	
}

class CRF_LinearAASGameModeComponent: SCR_BaseGameModeComponent
{
	[Attribute("US")]
	FactionKey attackingSide;
	
	[Attribute("USSR")]
	FactionKey defendingSide;
	
	[RplProp()]
	protected bool zone1Capped = false; 
	
	[RplProp()]
	protected bool zone2Capped = false;
	
	[RplProp()]
	protected bool zone3Capped = false;
	
	protected int zonesCapped = 0;
	EntityID aSiteID, bSiteID;
	protected IEntity zone1, zone2, zone3;
	
	[RplProp(onRplName: "PlaySound")]
	string m_SoundString;
	

	
	//------------------------------------------------------------------------------------------------
	override protected void OnWorldPostProcess(World world)
	{
		if (!GetGame().InPlayMode()) 
			return;
	
		InitZones();
	}
	
	//------------------------------------------------------------------------------------------------
	void InitZones()
	{
		
	}
	
	
}