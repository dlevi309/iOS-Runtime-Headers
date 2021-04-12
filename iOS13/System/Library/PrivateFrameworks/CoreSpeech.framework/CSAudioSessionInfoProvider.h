/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(void)_stopMonitoring;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(unsigned)audioSessionID;
-(void)_startMonitoring;
-(void)_registerInterruptionNotification;
-(void)_registerAudioRouteChangeNotification;
-(void)_handleInterruption:(id)arg1 ;
-(void)_audioRouteChanged:(id)arg1 ;
-(void)CSAudioServerCrashMonitorDidReceiveServerCrash:(id)arg1 ;
-(void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1 ;
-(void)_deregisterAudioSessionNotifications;
-(void)_registerAudioSessionNotifications;
-(NSObject*<OS_dispatch_queue>)sessionInfoQueue;
-(void)setSessionInfoQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

