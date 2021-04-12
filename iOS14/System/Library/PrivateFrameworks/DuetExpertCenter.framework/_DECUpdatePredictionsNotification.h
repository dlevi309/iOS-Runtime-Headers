/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

