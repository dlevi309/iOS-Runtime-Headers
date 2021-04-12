/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
*/


@interface _DECUpdatePredictionsNotification : NSObject {

	id _notificationToken;

}
+(void)runNotificationBlockForListenerCategory:(unsigned long long)arg1 notificationCategory:(unsigned long long)arg2 listenConsumerType:(unsigned long long)arg3 notificationConsumerType:(unsigned long long)arg4 updateTimeInterval:(double)arg5 currentDate:(id)arg6 withCachedDateGetter:(/*^block*/id)arg7 andUpdateBlock:(/*^block*/id)arg8 finallyBlock:(/*^block*/id)arg9 ;
+(void)postNotificationForPredictionCategory:(unsigned long long)arg1 consumerType:(unsigned long long)arg2 andRefreshTimeInterval:(double)arg3 ;
-(void)dealloc;
-(id)initWithNotificationsForPredictionCategory:(unsigned long long)arg1 andConsumerType:(unsigned long long)arg2 withCachedDateGetter:(/*^block*/id)arg3 andUpdateBlock:(/*^block*/id)arg4 finallyBlock:(/*^block*/id)arg5 ;
@end

