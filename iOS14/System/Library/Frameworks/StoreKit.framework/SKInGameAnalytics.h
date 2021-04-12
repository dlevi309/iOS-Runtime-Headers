/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSString;

@interface SKInGameAnalytics : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSObject*<OS_dispatch_source> _heartbeatTimer;
	BOOL _internalGameInProgress;
	NSString* _sessionID;

}

@property (assign,getter=isGameSessionInProgress,nonatomic) BOOL gameSessionInProgress; 
+(id)sharedInstance;
-(id)init;
-(void)_stopSessionTimerAndNotifications;
-(void)_gamePlayDidBegin;
-(void)_gamePlayDidEndWithReason:(long long)arg1 ;
-(void)_startSessionWithID:(id)arg1 ;
-(void)_startObservingLifecycleNotifications;
-(void)_stopObservingLifecycleNotifications;
-(void)_receivedAppWillResignActiveNotification;
-(void)_recievedAppWillTerminateNotification;
-(BOOL)isGameSessionInProgress;
-(void)setGameSessionInProgress:(BOOL)arg1 ;
@end

