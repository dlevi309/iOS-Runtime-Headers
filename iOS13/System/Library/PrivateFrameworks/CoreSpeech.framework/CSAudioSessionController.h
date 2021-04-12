/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(void)_stopMonitoring;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(void)_mediaServicesWereReset:(id)arg1 ;
-(unsigned)getAudioSessionID;
-(void)_startMonitoring;
-(CSXPCClient *)xpcClient;
-(void)setXpcClient:(CSXPCClient *)arg1 ;
-(unsigned)_getAudioSessionID;
-(BOOL)_createXPCClientConnectionIfNeeded;
-(id<CSAudioSessionInfoProviding>)sessionInfoProvider;
-(unsigned)_getLocalAudioSessionID;
-(void)setSessionInfoProvider:(id<CSAudioSessionInfoProviding>)arg1 ;
-(void)setShouldKeepConnection:(BOOL)arg1 ;
-(void)_mediaServicesWereLost:(id)arg1 ;
-(void)_registerInterruptionNotification;
-(void)_registerAudioRouteChangeNotification;
-(void)_handleInterruption:(id)arg1 ;
-(void)_audioRouteChanged:(id)arg1 ;
-(void)_teardownXPCClientIfNeeded;
-(void)audioSessionInfoProvider:(id)arg1 didReceiveAudioSessionInterruptionNotificationWithUserInfo:(id)arg2 ;
-(void)audioSessionInfoProvider:(id)arg1 didReceiveAudioSessionRouteChangeNotificationWithUserInfo:(id)arg2 ;
-(void)audioSessionInfoProvider:(id)arg1 didReceiveAudioSessionMediaServicesWereLostNotificationWithUserInfo:(id)arg2 ;
-(void)audioSessionInfoProvider:(id)arg1 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(id)arg2 ;
-(void)CSXPCClient:(id)arg1 didDisconnect:(BOOL)arg2 ;
-(void)coreSpeechDaemonStateMonitor:(id)arg1 didReceiveStateChanged:(unsigned long long)arg2 ;
-(void)getAudioSessionIDWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)shouldKeepConnection;
@end

