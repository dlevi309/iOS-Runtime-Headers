/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoundBoardServices.framework/SoundBoardServices
*/


@protocol SBSImplementerInternal;
@class RPCompanionLinkClient;

@interface SBSRemoteDeviceReceiver : NSObject {

	id<SBSImplementerInternal> _delegate;
	RPCompanionLinkClient* _client;

}

@property (assign,nonatomic,__weak) id<SBSImplementerInternal> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) RPCompanionLinkClient * client;                                    //@synthesize client=_client - In the implementation block
-(RPCompanionLinkClient *)client;
-(void)setClient:(RPCompanionLinkClient *)arg1 ;
-(id<SBSImplementerInternal>)delegate;
-(void)setDelegate:(id<SBSImplementerInternal>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)dealloc;
-(void)_registerEverything;
-(void)_deregisterEverything;
-(void)_registerSetAppleCareIsEnabled;
-(void)_registerSiriUtteranceFileToBePlayed;
-(void)_registerGetAllDebugInfo;
-(void)_registerGetTuningInfo;
-(void)_registerSetTuningInfoOnBox;
-(void)_registerPlayTone;
-(void)_registerStopTone;
-(void)_registerGetUserDefaults;
-(void)_registerSetUserDefaults;
-(void)_registerResetAllUserDefaults;
-(void)_registerResetUserDefault;
-(void)_registerSendLEDCommand;
-(void)_registerTriggerWiFiCoreCapture;
-(void)_registerSendButtonCommand;
-(void)_registerInjectSWUpdateToHome;
-(void)_registerSetBootSpinner;
-(void)_registerGetFeatureFlags;
-(void)_registerSetFeatureFlags;
-(void)_registerSetLEDContents;
-(void)_registerHomeKitSettingForKeyPathChanged;
-(void)_registerDeviceAttributeChanged;
-(void)_registerSetDeviceAsStereoLeader;
-(void)_registerSysdiagnoseHasStarted;
-(void)_registerReboot;
-(void)_registerRequestDeferredReboot;
-(void)_registerObliterate;
-(void)_registerRequestForFetchingAlarmsAndTimers;
-(void)_deregisterSetAppleCareIsEnabled;
-(void)_deregisterSiriUtteranceFileToBePlayed;
-(void)_deregisterGetAllDebugInfo;
-(void)_deregisterGetTuningInfo;
-(void)_deregisterSetTuningInfoOnBox;
-(void)_deregisterPlayTone;
-(void)_deregisterStopTone;
-(void)_deregisterGetUserDefaults;
-(void)_deregisterSetUserDefaults;
-(void)_deregisterResetAllUserDefaults;
-(void)_deregisterResetUserDefault;
-(void)_deregisterSendLEDCommand;
-(void)_deregisterTriggerWiFiCoreCapture;
-(void)_deregisterSendButtonCommand;
-(void)_deregisterInjectSWUpdateToHome;
-(void)_deregisterSetBootSpinner;
-(void)_deregisterGetFeatureFlags;
-(void)_deregisterSetFeatureFlags;
-(void)_deregisterSetLEDContents;
-(void)_deregisterHomeKitSettingForKeyPathChanged;
-(void)_deregisterDeviceAttributeChanged;
-(void)_deregisterSetDeviceAsStereoLeader;
-(void)_deregisterSysdiagnoseHasStarted;
-(void)_deregisterReboot;
-(void)_deregisterRequestDeferredReboot;
-(void)_deregisterObliterate;
-(void)_deregisterRequestForFetchingAlarmsAndTimers;
-(void)_registerIdentifyWithOptions;
-(void)_deregisterIdentifyWithOptions;
@end

