/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface PLChangeHandlingNotificationObserver : NSObject {

	NSObject*<OS_dispatch_queue> _targetQueue;
	NSObject*<OS_dispatch_queue> _lowNotifyQueue;
	NSObject*<OS_dispatch_queue> _highNotifyQueue;
	int _notifyTokenLow;
	int _notifyTokenHigh;
	/*^block*/id _notificationBlock;
	double _throttleInterval;

}
-(id)initWithLowPriorityThrottleInterval:(double)arg1 ;
-(void)startObservingRemoteNotificationsWithBlock:(/*^block*/id)arg1 ;
-(void)_inq_startObservingRemoteNotificationsWithBlock:(/*^block*/id)arg1 ;
-(void)_inq_suspendIfThrottling;
-(void)_inq_handleLowPriorityNotification;
-(void)_inq_handleThrottleTimer;
-(void)_inq_handleHighPriorityNotification;
-(void)_inq_stopObservingRemoteNotifications;
-(void)stopObservingRemoteNotifications;
-(void)dealloc;
@end

