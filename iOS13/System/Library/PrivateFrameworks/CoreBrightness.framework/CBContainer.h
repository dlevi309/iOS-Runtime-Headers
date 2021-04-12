/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/


@protocol OS_os_log, OS_dispatch_queue;
@class NSObject;

@interface CBContainer : NSObject {

	NSObject*<OS_os_log> _logHandle;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	/*^block*/id _notificationBlock;

}
-(void)dealloc;
-(void)registerNotificationBlock:(/*^block*/id)arg1 ;
-(void)unregisterNotificationBlock;
-(void)scheduleWithDispatchQueue:(id)arg1 ;
-(void)unscheduleWithDispatchQueue:(id)arg1 ;
@end

