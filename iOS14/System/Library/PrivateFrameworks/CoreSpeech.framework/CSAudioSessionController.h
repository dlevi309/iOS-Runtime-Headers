/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSAudioSessionInfoProvidingDelegate.h>
#import <libobjc.A.dylib/CSXPCClientDelegate.h>
#import <libobjc.A.dylib/CSCoreSpeechDaemonStateMonitorDelegate.h>

@protocol OS_dispatch_queue, CSAudioSessionInfoProviding;
@class NSObject, NSHashTable, CSXPCClient, NSString;

@interface CSAudioSessionController : NSObject <CSAudioSessionInfoProvidingDelegate, CSXPCClientDelegate, CSCoreSpeechDaemonStateMonitorDelegate> {

	BOOL _shouldKeepConnection;
	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _observers;
	id<CSAudioSessionInfoProviding> _sessionInfoProvider;
	CSXPCClient* _xpcClient;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                          //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) id<CSAudioSessionInfoProviding> sessionInfoProvider;              //@synthesize sessionInfoProvider=_sessionInfoProvider - In the implementation block
@property (nonatomic,retain) CSXPCClient * xpcClient;                                          //@synthesize xpcClient=_xpcClient - In the implementation block
@property (assign) BOOL shouldKeepConnection;                                                  //@synthesize shouldKeepConnection=_shouldKeepConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)unregisterObserver:(id)arg1 ;
-(void)_stopMonitoring;
-(unsigned)getAudioSessionID;
-(void)_audioRouteChanged:(id)arg1 ;
-(void)registerObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(id)init;
-(unsigned)_getAudioSessionID;
-(void)audioSessionInfoProvider:(id)arg1 didReceiveAudioSessionRouteChangeNotificationWithUserInfo:(id)arg2 ;
-(id<CSAudioSessionInfoProviding>)sessionInfoProvider;
-(void)audioSessionInfoProvider:(id)arg1 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(id)arg2 ;
-(void)_registerAudioRouteChangeNotification;
-(void)_mediaServicesWereReset:(id)arg1 ;
-(BOOL)_createXPCClientConnectionIfNeeded;
-(CSXPCClient *)xpcClient;
-(void)_teardownXPCClientIfNeeded;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)_registerInterruptionNotification;
-(void)coreSpeechDaemonStateMonitor:(id)arg1 didReceiveStateChanged:(unsigned long long)arg2 ;
-(void)_startMonitoring;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_handleInterruption:(id)arg1 ;
-(void)getAudioSessionIDWithCompletion:(/*^block*/id)arg1 ;
-(void)audioSessionInfoProvider:(id)arg1 didReceiveAudioSessionInterruptionNotificationWithUserInfo:(id)arg2 ;
-(void)_mediaServicesWereLost:(id)arg1 ;
-(void)CSXPCClient:(id)arg1 didDisconnect:(BOOL)arg2 ;
-(unsigned)_getLocalAudioSessionID;
-(void)audioSessionInfoProvider:(id)arg1 didReceiveAudioSessionMediaServicesWereLostNotificationWithUserInfo:(id)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setShouldKeepConnection:(BOOL)arg1 ;
-(BOOL)shouldKeepConnection;
-(void)dealloc;
-(void)setXpcClient:(CSXPCClient *)arg1 ;
-(void)setSessionInfoProvider:(id<CSAudioSessionInfoProviding>)arg1 ;
@end

