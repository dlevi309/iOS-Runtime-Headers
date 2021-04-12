/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@interface VCSwitchManager : NSObject {

	unsigned _localSwitches;
	unsigned _remoteSwitches;
	unsigned _negotiatedSwitches;

}

@property (assign) unsigned localSwitches;                   //@synthesize localSwitches=_localSwitches - In the implementation block
@property (assign) unsigned remoteSwitches;                  //@synthesize remoteSwitches=_remoteSwitches - In the implementation block
@property (assign) unsigned negotiatedSwitches;              //@synthesize negotiatedSwitches=_negotiatedSwitches - In the implementation block
-(id)description;
-(void)initializeLocalSwitches;
-(BOOL)isLocalSwitchEnabled:(unsigned)arg1 ;
-(unsigned)negotiatedSwitches;
-(unsigned)remoteSwitches;
-(void)setRemoteSwitches:(unsigned)arg1 ;
-(void)negotiateSwitches;
-(BOOL)isSwitchEnabled:(unsigned)arg1 ;
-(unsigned)localSwitches;
-(void)setupLocalSwitchesIndividually;
-(void)updateDuplicationEnhancementSwitches;
-(void)setupLocalOnOffSwitchesFromMasterSwitch;
-(void)setupLocalAudioTestGroupSwitches;
-(void)setupLocalVideoTestGroupSwitches;
-(void)setupLocalNetworkTestGroupSwitches;
-(void)setupLocalRateControlTestGroupSwitches;
-(void)setupLocalDuplicationTestGroupSwitches;
-(void)setupLocalOnOffSwitches;
-(void)setupLocalABTestSwitches;
-(void)setLocalSwitches:(unsigned)arg1 ;
-(void)setNegotiatedSwitches:(unsigned)arg1 ;
@end

