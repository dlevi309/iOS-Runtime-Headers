/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSEventMonitor.h>
#import <libobjc.A.dylib/CSAudioServerCrashMonitorDelegate.h>
#import <libobjc.A.dylib/CSAudioSessionEventProvidingDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface CSAudioSessionMonitor : CSEventMonitor <CSAudioServerCrashMonitorDelegate, CSAudioSessionEventProvidingDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _audioSessionState;

}

@property (assign,getter=getAudioSessionState,nonatomic) unsigned long long audioSessionState;              //@synthesize audioSessionState=_audioSessionState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_stopMonitoring;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)CSAudioServerCrashMonitorDidReceiveServerCrash:(id)arg1 ;
-(void)_notifyObserver:(id)arg1 withAudioSessionState:(unsigned long long)arg2 ;
-(void)notifyAudioSessionStateChange:(unsigned long long)arg1 ;
-(void)audioSessionEventProvidingWillSetAudioSessionActive:(BOOL)arg1 ;
-(void)audioSessionEventProvidingDidSetAudioSessionActive:(BOOL)arg1 ;
-(unsigned long long)getAudioSessionState;
-(void)setAudioSessionState:(unsigned long long)arg1 ;
@end

