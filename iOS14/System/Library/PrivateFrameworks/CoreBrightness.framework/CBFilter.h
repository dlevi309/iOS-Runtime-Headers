/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)registerNotificationBlock:(/*^block*/id)arg1 ;
-(void)unregisterNotificationBlock;
-(id)init;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)filterEvent:(id)arg1 ;
-(void)sendNotificationForKey:(id)arg1 andValue:(id)arg2 ;
-(void)forgetDataForService:(IOHIDServiceClientRef)arg1 ;
-(void)dealloc;
-(void)scheduleWithDispatchQueue:(id)arg1 ;
-(void)unscheduleWithDispatchQueue:(id)arg1 ;
-(id)filterEvents:(id)arg1 ;
@end

