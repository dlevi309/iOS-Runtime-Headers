/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/


@protocol CARSessionObserving, OS_dispatch_source;
@class CARSession, CARSessionChangedNotificationConverter, NSObject;

@interface CARSessionStatus : NSObject {

	BOOL _requiresCarCapabilitiesValues;
	id<CARSessionObserving> _sessionObserver;
	CARSession* _session;
	CARSessionChangedNotificationConverter* _notificationConverter;
	NSObject*<OS_dispatch_source> _connectingTimer;
	unsigned long long _timeoutInterval;

}

@property (nonatomic,retain) CARSession * session;                                                        //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) CARSessionChangedNotificationConverter * notificationConverter;              //@synthesize notificationConverter=_notificationConverter - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> connectingTimer;                               //@synthesize connectingTimer=_connectingTimer - In the implementation block
@property (assign,nonatomic) unsigned long long timeoutInterval;                                          //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (assign,nonatomic) BOOL requiresCarCapabilitiesValues;                                          //@synthesize requiresCarCapabilitiesValues=_requiresCarCapabilitiesValues - In the implementation block
@property (nonatomic,readonly) CARSession * currentSession; 
@property (assign,nonatomic,__weak) id<CARSessionObserving> sessionObserver;                              //@synthesize sessionObserver=_sessionObserver - In the implementation block
+(id)sessionUpdatesQueue;
-(id)init;
-(void)dealloc;
-(CARSession *)session;
-(void)setSession:(CARSession *)arg1 ;
-(void)setTimeoutInterval:(unsigned long long)arg1 ;
-(unsigned long long)timeoutInterval;
-(CARSession *)currentSession;
-(void)waitForSessionInitialization;
-(id)initAndWaitUntilSessionUpdated;
-(void)setSessionObserver:(id<CARSessionObserving>)arg1 ;
-(BOOL)requiresCarCapabilitiesValues;
-(void)setRequiresCarCapabilitiesValues:(BOOL)arg1 ;
-(void)_handleConnectingTimeout;
-(void)setConnectingTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setNotificationConverter:(CARSessionChangedNotificationConverter *)arg1 ;
-(void)_handleAuthenticationSucceeded:(id)arg1 ;
-(void)_handleSessionChanged;
-(void)_handleConfigurationUpdated:(id)arg1 ;
-(void)_handleCarCapabilitiesUpdated:(id)arg1 ;
-(void)_updateSession;
-(void)_notifyStartedConnectionAttemptOnTransport:(unsigned long long)arg1 ;
-(void)_startConnectingTimer;
-(void)_notifyDidUpdateSession:(id)arg1 ;
-(void)_stopConnectingTimer;
-(void)_notifyDidDisconnectSession:(id)arg1 ;
-(void)_notifyDidConnectSession:(id)arg1 ;
-(NSObject*<OS_dispatch_source>)connectingTimer;
-(void)_notifyCancelledConnectionAttemptOnTransport:(unsigned long long)arg1 ;
-(id<CARSessionObserving>)sessionObserver;
-(id)initAndWaitUntilCarCapabilitiesUpdate;
-(void)_handleInCarNotification;
-(CARSessionChangedNotificationConverter *)notificationConverter;
@end

