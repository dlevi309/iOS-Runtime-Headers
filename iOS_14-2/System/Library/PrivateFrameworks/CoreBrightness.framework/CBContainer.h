/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)registerNotificationBlock:(/*^block*/id)arg1 ;
-(void)unregisterNotificationBlock;
-(void)dealloc;
-(void)scheduleWithDispatchQueue:(id)arg1 ;
-(void)unscheduleWithDispatchQueue:(id)arg1 ;
@end

