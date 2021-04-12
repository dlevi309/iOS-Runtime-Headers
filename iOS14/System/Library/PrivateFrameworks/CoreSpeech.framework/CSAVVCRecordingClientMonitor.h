/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSEventMonitor.h>
#import <libobjc.A.dylib/CSAudioServerCrashMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class AVVoiceTriggerClient, NSObject, NSString;

@interface CSAVVCRecordingClientMonitor : CSEventMonitor <CSAudioServerCrashMonitorDelegate> {

	unsigned long long _numOfAVVCRecordingClients;
	AVVoiceTriggerClient* _alwaysOnProcessorController;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) AVVoiceTriggerClient * alwaysOnProcessorController;              //@synthesize alwaysOnProcessorController=_alwaysOnProcessorController - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) unsigned long long numOfAVVCRecordingClients;                  //@synthesize numOfAVVCRecordingClients=_numOfAVVCRecordingClients - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_stopMonitoring;
-(unsigned long long)numOfAVVCRecordingClients;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)CSAudioServerCrashMonitorDidReceiveServerCrash:(id)arg1 ;
-(void)setAlwaysOnProcessorController:(AVVoiceTriggerClient *)arg1 ;
-(AVVoiceTriggerClient *)alwaysOnProcessorController;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_didReceiveAVVCRecordingClientNumberChange:(unsigned long long)arg1 ;
@end

