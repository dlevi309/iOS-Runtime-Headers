/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/


#import <AVFAudio/AVFAudio-Structs.h>
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
-(id)init;
-(int)setupOneTimeSessionSettings;
-(int)setSessionActivationContext:(id)arg1 ;
-(void)shouldEnableMiniDucking:(BOOL)arg1 ;
-(BOOL)isMiniDuckingEnabled;
-(void)getHypotheticalRouteAndUpdateStates;
-(int)setSessionCategoryModeOptionsForActivationMode:(long long)arg1 ;
-(int)setSessionAudioHWControlFlagsForActivationMode:(long long)arg1 ;
-(int)setSessionSampleRateForActivationMode:(long long)arg1 ;
-(int)setSessionBufferSizeForRecordingEngine:(AVVCRecordingEngine*)arg1 ;
-(void)changeDuckOthersOption:(BOOL)arg1 ;
-(BOOL)isSessionOutputInWirelessSplitterMode;
-(unsigned)getSessionActivationOptions;
-(void)setSessionActivationOptions:(unsigned)arg1 ;
-(BOOL)isAirplayOneOfTheOutputRoutes:(id)arg1 ;
@end

