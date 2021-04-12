/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSEventMonitor.h>

@class AVVoiceTriggerClient;

@interface CSAudioServerCrashMonitor : CSEventMonitor {

	unsigned long long _serverState;
	AVVoiceTriggerClient* _alwaysOnProcessorController;

}

@property (assign,nonatomic) unsigned long long serverState;                                  //@synthesize serverState=_serverState - In the implementation block
@property (nonatomic,retain) AVVoiceTriggerClient * alwaysOnProcessorController;              //@synthesize alwaysOnProcessorController=_alwaysOnProcessorController - In the implementation block
+(id)sharedInstance;
-(id)init;
-(unsigned long long)serverState;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(AVVoiceTriggerClient *)alwaysOnProcessorController;
-(void)setAlwaysOnProcessorController:(AVVoiceTriggerClient *)arg1 ;
-(void)_didReceiveMediaserverNotification:(unsigned long long)arg1 ;
-(void)_mediaserverdDidRestart;
-(void)_notifyObserver:(id)arg1 withMediaserverState:(unsigned long long)arg2 ;
-(void)notifyAudioServerCrash;
-(void)setServerState:(unsigned long long)arg1 ;
@end

