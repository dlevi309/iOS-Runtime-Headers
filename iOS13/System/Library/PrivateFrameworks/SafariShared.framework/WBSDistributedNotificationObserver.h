/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSString, NSObject;

@interface WBSDistributedNotificationObserver : NSObject {

	NSString* _notificationName;
	long long _notificationType;
	BOOL _observing;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	/*^block*/id _notificationHandler;
	/*^block*/id _timeoutHandler;

}

@property (copy) id notificationHandler; 
@property (copy) id timeoutHandler; 
-(id)init;
-(void)_stopObserving;
-(void)waitWithTimeout:(double)arg1 ;
-(void)_startObserving;
-(id)timeoutHandler;
-(void)setTimeoutHandler:(id)arg1 ;
-(id)initWithNotificationName:(id)arg1 ;
-(id)initWithNotificationName:(id)arg1 type:(long long)arg2 ;
-(void)_scheduleTimeoutTimerWithTimeout:(double)arg1 ;
-(void)_didReceiveNotification:(id)arg1 ;
-(void)_invalidateTimeoutTimer;
-(void)_didTimeOut;
-(void)setNotificationHandler:(id)arg1 ;
-(id)notificationHandler;
-(void)stopWaiting;
@end

