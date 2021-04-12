/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/


@interface AVVCSessionManager : NSObject {

	BOOL mShouldDuckOthers;
	BOOL mIsMiniDuckingEnabled;
	BOOL mShouldEnableMiniDucking;
	BOOL mShouldDisableMiniDucking;
	BOOL mSessionNeedsVolumeControl;
	BOOL mSessionNeedsRoutingControl;
	BOOL mSessionOutputIsWirelessSplitter;
	BOOL mIsOtherAudioPlaying;
	BOOL mRouteHasDoAPSupport;
	BOOL mOutputSupportsSWVolume;
	BOOL mDeviceIsIOSAccessory;
	BOOL mDeviceIsOlderWatch;
	unsigned mSessionActivationOptions;
	long long mPreviousActivationMode;

}
-(int)setupOneTimeSessionSettings;
-(int)setSessionActivationContext:(id)arg1 ;
-(void)shouldEnableMiniDucking:(BOOL)arg1 ;
-(BOOL)isMiniDuckingEnabled;
-(void)getHypotheticalRouteAndUpdateStates;
-(int)setSessionCategoryModeOptionsForActivationMode:(long long)arg1 ;
-(int)setSessionAudioHWControlFlagsForActivationMode:(long long)arg1 ;
-(int)setSessionSampleRateForActivationMode:(long long)arg1 ;
-(int)setSessionBufferSize:(int)arg1 ;
-(void)changeDuckOthersOption:(BOOL)arg1 ;
-(BOOL)isSessionOutputInWirelessSplitterMode;
-(unsigned)getSessionActivationOptions;
-(void)setSessionActivationOptions:(unsigned)arg1 ;
-(id)init;
-(BOOL)isAirplayOneOfTheOutputRoutes:(id)arg1 ;
-(int)enableSmartRoutingConsideration:(BOOL)arg1 ;
@end

