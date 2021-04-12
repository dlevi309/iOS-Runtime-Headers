/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface CLKNotificationCenter : NSObject {

	NSMutableDictionary* _registrationsByNotificationName;
	NSObject*<OS_dispatch_queue> _registrationQueue;

}
+(id)defaultCenter;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)_handleNotification:(id)arg1 ;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 notificationName:(id)arg3 ;
-(void)removeObserver:(id)arg1 notificationName:(id)arg2 ;
-(void)_queue_registerObserver:(id)arg1 selector:(SEL)arg2 forNotificationName:(id)arg3 ;
-(void)_queue_unregisterObserver:(id)arg1 forNotificationName:(id)arg2 cleanupIfLastObserver:(BOOL)arg3 ;
-(void)_postNotificationName:(id)arg1 ;
@end

