/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@interface NSNotificationQueue : NSObject {

	id _notificationCenter;
	id _asapQueue;
	id _asapObs;
	id _idleQueue;
	id _idleObs;

}
+(id)defaultQueue;
-(id)init;
-(void)_flushNotificationQueue;
-(void)enqueueNotification:(id)arg1 postingStyle:(unsigned long long)arg2 coalesceMask:(unsigned long long)arg3 forModes:(id)arg4 ;
-(void)enqueueNotification:(id)arg1 postingStyle:(unsigned long long)arg2 ;
-(id)initWithNotificationCenter:(id)arg1 ;
-(void)dequeueNotificationsMatching:(id)arg1 coalesceMask:(unsigned long long)arg2 ;
-(void)dealloc;
@end

