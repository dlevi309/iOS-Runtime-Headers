/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@interface VCMediaNegotiatorFaceTimeSettingsResults : NSObject {

	BOOL _SIPDisabled;
	BOOL _secureMessagingRequired;
	unsigned _faceTimeSwitches;
	BOOL _oneToOneModeSupported;
	unsigned char mediaControlInfoFECFeedbackVersion;
	unsigned char _remoteLinkProbingCapabilityVersion;
	unsigned char _mediaControlInfoFECFeedbackVersion;
	BOOL _remoteFaceTimeSwitchesAvailable;

}

@property (assign,setter=IPDisabled,nonatomic) BOOL SIPDisabled;                            //@synthesize SIPDisabled=_SIPDisabled - In the implementation block
@property (assign,nonatomic) BOOL secureMessagingRequired;                                  //@synthesize secureMessagingRequired=_secureMessagingRequired - In the implementation block
@property (assign,nonatomic) BOOL remoteFaceTimeSwitchesAvailable;                          //@synthesize remoteFaceTimeSwitchesAvailable=_remoteFaceTimeSwitchesAvailable - In the implementation block
@property (assign,nonatomic) unsigned faceTimeSwitches;                                     //@synthesize faceTimeSwitches=_faceTimeSwitches - In the implementation block
@property (assign,nonatomic) BOOL oneToOneModeSupported;                                    //@synthesize oneToOneModeSupported=_oneToOneModeSupported - In the implementation block
@property (assign,nonatomic) unsigned char mediaControlInfoFECFeedbackVersion;              //@synthesize mediaControlInfoFECFeedbackVersion=_mediaControlInfoFECFeedbackVersion - In the implementation block
@property (assign,nonatomic) unsigned char remoteLinkProbingCapabilityVersion;              //@synthesize remoteLinkProbingCapabilityVersion=_remoteLinkProbingCapabilityVersion - In the implementation block
-(unsigned char)mediaControlInfoFECFeedbackVersion;
-(void)setMediaControlInfoFECFeedbackVersion:(unsigned char)arg1 ;
-(void)setSIPDisabled:(BOOL)arg1 ;
-(void)setSecureMessagingRequired:(BOOL)arg1 ;
-(void)setFaceTimeSwitches:(unsigned)arg1 ;
-(void)setOneToOneModeSupported:(BOOL)arg1 ;
-(BOOL)SIPDisabled;
-(BOOL)secureMessagingRequired;
-(unsigned)faceTimeSwitches;
-(BOOL)oneToOneModeSupported;
-(void)setRemoteLinkProbingCapabilityVersion:(unsigned char)arg1 ;
-(unsigned char)remoteLinkProbingCapabilityVersion;
-(BOOL)remoteFaceTimeSwitchesAvailable;
-(void)setRemoteFaceTimeSwitchesAvailable:(BOOL)arg1 ;
@end

