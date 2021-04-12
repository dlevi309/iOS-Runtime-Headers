/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
*/

#import <libobjc.A.dylib/TLAlertPlaybackBackEndController.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, TLAlertQueuePlayerController, TLAlertSystemSoundController, NSMapTable;

@interface TLAlertController : NSObject <TLAlertPlaybackBackEndController> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSString* _accessQueueLabel;
	TLAlertQueuePlayerController* _queuePlayerController;
	TLAlertSystemSoundController* _systemSoundController;
	NSMapTable* _alertContexts;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedAlertController;
+(long long)_playbackBackEndForAlert:(id)arg1 ;
+(BOOL)_shouldStopAlertForUserInterruption:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)_performBlockOnAccessQueue:(/*^block*/id)arg1 ;
-(void)_assertRunningOnAccessQueue;
-(void)_stopPlayingAlerts:(id)arg1 withOptions:(id)arg2 playbackCompletionType:(long long)arg3 willStopAlertsHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)playAlert:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)stopPlayingAlerts:(id)arg1 withOptions:(id)arg2 playbackCompletionType:(long long)arg3 willStopAlertsHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)handleActivationAssertionStatusChangeForAlert:(id)arg1 updatedStatus:(BOOL)arg2 ;
-(void)updateAudioVolumeDynamicallyForAlert:(id)arg1 toValue:(float)arg2 ;
-(BOOL)stopAllAlerts;
-(BOOL)_stopAllAlertsInCurrentProcess;
-(id)_prepareForPlayingAlert:(id)arg1 ;
-(void)_didCompletePlaybackOfAlert:(id)arg1 ;
-(id)_controllerForPlaybackBackEnd:(long long)arg1 ;
-(void)_didReachTimeoutForAlert:(id)arg1 ;
-(id)_queuePlayerController;
-(id)_systemSoundController;
@end

