/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_didTimeOut;
-(id)initWithNotificationName:(id)arg1 ;
-(void)stopWaiting;
-(void)setTimeoutHandler:(id)arg1 ;
-(void)waitWithTimeout:(double)arg1 ;
-(void)_stopObserving;
-(id)initWithNotificationName:(id)arg1 type:(long long)arg2 ;
-(void)_scheduleTimeoutTimerWithTimeout:(double)arg1 ;
-(void)_didReceiveNotification:(id)arg1 ;
-(void)_invalidateTimeoutTimer;
-(void)setNotificationHandler:(id)arg1 ;
-(id)notificationHandler;
-(void)_startObserving;
-(id)timeoutHandler;
@end

