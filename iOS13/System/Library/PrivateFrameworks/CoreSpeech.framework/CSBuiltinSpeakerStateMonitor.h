/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSEventMonitor.h>
#import <libobjc.A.dylib/CSAudioServerCrashMonitorDelegate.h>

@class AVVoiceTriggerClient, NSString;

@interface CSBuiltinSpeakerStateMonitor : CSEventMonitor <CSAudioServerCrashMonitorDelegate> {

	AVVoiceTriggerClient* _alwaysOnProcessorController;

}

@property (nonatomic,retain) AVVoiceTriggerClient * alwaysOnProcessorController;              //@synthesize alwaysOnProcessorController=_alwaysOnProcessorController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1 ;
-(unsigned long long)currentBuiltinSpeakerState;
-(AVVoiceTriggerClient *)alwaysOnProcessorController;
-(void)setAlwaysOnProcessorController:(AVVoiceTriggerClient *)arg1 ;
-(void)_didReceiveBuiltinSpeakerStateChangeNotification:(unsigned long long)arg1 ;
-(void)_notifyObserver:(id)arg1 withBuiltinSpeakerState:(unsigned long long)arg2 ;
-(BOOL)isBuiltinSpeakerMuted;
@end

