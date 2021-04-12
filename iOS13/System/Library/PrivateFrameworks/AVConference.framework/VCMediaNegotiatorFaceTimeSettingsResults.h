/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@interface VCMediaNegotiatorFaceTimeSettingsResults : NSObject {

	BOOL _SIPDisabled;
	BOOL _secureMessagingRequired;
	unsigned _faceTimeSwitches;
	BOOL _remoteFaceTimeSwitchesAvailable;

}

@property (assign,setter=IPDisabled,nonatomic) BOOL SIPDisabled;                //@synthesize SIPDisabled=_SIPDisabled - In the implementation block
@property (assign,nonatomic) BOOL secureMessagingRequired;                      //@synthesize secureMessagingRequired=_secureMessagingRequired - In the implementation block
@property (assign,nonatomic) BOOL remoteFaceTimeSwitchesAvailable;              //@synthesize remoteFaceTimeSwitchesAvailable=_remoteFaceTimeSwitchesAvailable - In the implementation block
@property (assign,nonatomic) unsigned faceTimeSwitches;                         //@synthesize faceTimeSwitches=_faceTimeSwitches - In the implementation block
-(void)setSIPDisabled:(BOOL)arg1 ;
-(void)setSecureMessagingRequired:(BOOL)arg1 ;
-(void)setFaceTimeSwitches:(unsigned)arg1 ;
-(BOOL)SIPDisabled;
-(BOOL)secureMessagingRequired;
-(unsigned)faceTimeSwitches;
-(BOOL)remoteFaceTimeSwitchesAvailable;
-(void)setRemoteFaceTimeSwitchesAvailable:(BOOL)arg1 ;
@end

