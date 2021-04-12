/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSEventMonitor.h>
#import <libobjc.A.dylib/CSAudioServerCrashEventProvidingDelegate.h>

@class AVVoiceTriggerClient, NSString;

@interface CSAudioServerCrashMonitor : CSEventMonitor <CSAudioServerCrashEventProvidingDelegate> {

	unsigned long long _serverState;
	AVVoiceTriggerClient* _alwaysOnProcessorController;

}

@property (assign,nonatomic) unsigned long long serverState;                                  //@synthesize serverState=_serverState - In the implementation block
@property (nonatomic,retain) AVVoiceTriggerClient * alwaysOnProcessorController;              //@synthesize alwaysOnProcessorController=_alwaysOnProcessorController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)setServerState:(unsigned long long)arg1 ;
-(void)_didReceiveMediaserverNotification:(unsigned long long)arg1 ;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_notifyObserver:(id)arg1 withMediaserverState:(unsigned long long)arg2 ;
-(unsigned long long)serverState;
-(void)setAlwaysOnProcessorController:(AVVoiceTriggerClient *)arg1 ;
-(AVVoiceTriggerClient *)alwaysOnProcessorController;
-(void)audioServerCrashEventProvidingLostMediaserverd;
-(void)_mediaserverdDidRestart;
@end

