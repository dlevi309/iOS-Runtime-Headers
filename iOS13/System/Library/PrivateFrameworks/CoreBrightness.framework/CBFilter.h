/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/


@protocol OS_os_log, OS_dispatch_queue;
#import <CoreBrightness/CoreBrightness-Structs.h>
@class NSObject;

@interface CBFilter : NSObject {

	NSObject*<OS_os_log> _logHandle;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	/*^block*/id _notificationBlock;

}
-(id)init;
-(void)dealloc;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)registerNotificationBlock:(/*^block*/id)arg1 ;
-(void)unregisterNotificationBlock;
-(void)sendNotificationForKey:(id)arg1 andValue:(id)arg2 ;
-(void)scheduleWithDispatchQueue:(id)arg1 ;
-(void)unscheduleWithDispatchQueue:(id)arg1 ;
-(id)filterEvent:(id)arg1 ;
-(void)forgetDataForService:(IOHIDServiceClientRef)arg1 ;
-(id)filterEvents:(id)arg1 ;
@end

