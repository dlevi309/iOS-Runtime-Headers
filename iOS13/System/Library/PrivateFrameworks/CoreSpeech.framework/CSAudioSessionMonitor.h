/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSEventMonitor.h>
#import <libobjc.A.dylib/CSAudioServerCrashMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface CSAudioSessionMonitor : CSEventMonitor <CSAudioServerCrashMonitorDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _audioSessionState;

}

@property (assign,getter=getAudioSessionState,nonatomic) unsigned long long audioSessionState;              //@synthesize audioSessionState=_audioSessionState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)CSAudioServerCrashMonitorDidReceiveServerCrash:(id)arg1 ;
-(void)_notifyObserver:(id)arg1 withAudioSessionState:(unsigned long long)arg2 ;
-(void)notifyAduioSessionStateChange:(unsigned long long)arg1 ;
-(unsigned long long)getAudioSessionState;
-(void)setAudioSessionState:(unsigned long long)arg1 ;
@end

