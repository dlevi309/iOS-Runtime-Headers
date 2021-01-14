/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSAudioSessionInfoProviding.h>

@protocol OS_dispatch_queue;
@class NSObject, NSHashTable, NSString;

@interface CSAudioSessionInfoProvider : NSObject <CSAudioSessionInfoProviding> {

	NSObject*<OS_dispatch_queue> _sessionInfoQueue;
	NSHashTable* _observers;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> sessionInfoQueue;              //@synthesize sessionInfoQueue=_sessionInfoQueue - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                    //@synthesize observers=_observers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)unregisterObserver:(id)arg1 ;
-(void)_stopMonitoring;
-(void)_audioRouteChanged:(id)arg1 ;
-(unsigned)audioSessionID;
-(void)registerObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(id)init;
-(void)setSessionInfoQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)CSAudioServerCrashMonitorDidReceiveServerCrash:(id)arg1 ;
-(void)_registerAudioSessionNotifications;
-(void)_registerAudioRouteChangeNotification;
-(NSObject*<OS_dispatch_queue>)sessionInfoQueue;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)_registerInterruptionNotification;
-(void)_startMonitoring;
-(void)_deregisterAudioSessionNotifications;
-(void)_handleInterruption:(id)arg1 ;
-(void)dealloc;
-(void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1 ;
@end

