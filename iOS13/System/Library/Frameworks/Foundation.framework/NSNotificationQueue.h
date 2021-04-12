/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)initWithNotificationCenter:(id)arg1 ;
-(void)_flushNotificationQueue;
-(void)enqueueNotification:(id)arg1 postingStyle:(unsigned long long)arg2 coalesceMask:(unsigned long long)arg3 forModes:(id)arg4 ;
-(void)enqueueNotification:(id)arg1 postingStyle:(unsigned long long)arg2 ;
-(void)dequeueNotificationsMatching:(id)arg1 coalesceMask:(unsigned long long)arg2 ;
@end

