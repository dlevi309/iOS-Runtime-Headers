/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/


@protocol CARSessionObserving, OS_dispatch_source;
@class CARSession, CARSessionChangedNotificationConverter, CARObserverHashTable, NSObject;

@interface CARSessionStatus : NSObject {

	BOOL _clientIsCarPlayShell;
	id<CARSessionObserving> _sessionObserver;
	CARSession* _session;
	CARSessionChangedNotificationConverter* _notificationConverter;
	CARObserverHashTable* _sessionObservers;
	NSObject*<OS_dispatch_source> _connectingTimer;
	unsigned long long _timeoutInterval;

}

@property (nonatomic,retain) CARSession * session;                                                        //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) CARSessionChangedNotificationConverter * notificationConverter;              //@synthesize notificationConverter=_notificationConverter - In the implementation block
@property (nonatomic,retain) CARObserverHashTable * sessionObservers;                                     //@synthesize sessionObservers=_sessionObservers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> connectingTimer;                               //@synthesize connectingTimer=_connectingTimer - In the implementation block
@property (assign,nonatomic) unsigned long long timeoutInterval;                                          //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (nonatomic,readonly) BOOL clientIsCarPlayShell;                                                 //@synthesize clientIsCarPlayShell=_clientIsCarPlayShell - In the implementation block
@property (nonatomic,readonly) CARSession * currentSession; 
@property (assign,nonatomic,__weak) id<CARSessionObserving> sessionObserver;                              //@synthesize sessionObserver=_sessionObserver - In the implementation block
+(id)sessionUpdatesQueue;
-(NSObject*<OS_dispatch_source>)connectingTimer;
-(id)init;
-(void)_notifyDidUpdateSession:(id)arg1 ;
-(void)_updateSession;
-(BOOL)clientIsCarPlayShell;
-(void)setConnectingTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(CARSession *)session;
-(void)_notifyDidDisconnectSession:(id)arg1 ;
-(void)waitForSessionInitialization;
-(void)_handleAuthenticationSucceeded:(id)arg1 ;
-(void)_notifyStartedConnectionAttemptOnTransport:(unsigned long long)arg1 ;
-(void)setNotificationConverter:(CARSessionChangedNotificationConverter *)arg1 ;
-(void)_startConnectingTimer;
-(id)initAndWaitUntilSessionUpdated;
-(void)addSessionObserver:(id)arg1 ;
-(unsigned long long)timeoutInterval;
-(void)removeSessionObserver:(id)arg1 ;
-(id<CARSessionObserving>)sessionObserver;
-(void)setSession:(CARSession *)arg1 ;
-(void)setTimeoutInterval:(unsigned long long)arg1 ;
-(void)_handleConnectingTimeout;
-(id)initForCarPlayShell;
-(void)setSessionObserver:(id<CARSessionObserving>)arg1 ;
-(void)_stopConnectingTimer;
-(void)_notifyDidConnectSession:(id)arg1 ;
-(void)setSessionObservers:(CARObserverHashTable *)arg1 ;
-(CARSession *)currentSession;
-(void)_handleConfigurationUpdated;
-(void)_notifyCancelledConnectionAttemptOnTransport:(unsigned long long)arg1 ;
-(void)_handleCarCapabilitiesUpdated;
-(void)_handleSessionChanged;
-(void)_handleInCarNotification;
-(CARSessionChangedNotificationConverter *)notificationConverter;
-(CARObserverHashTable *)sessionObservers;
-(void)dealloc;
@end

