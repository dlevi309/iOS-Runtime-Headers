/*
* Generated on Monday, March 1, 2021 at 2:33:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class _ATXInternalNotification;

@interface ATXInternalActionPredictionUpdateNotification : NSObject {

	_ATXInternalNotification* _note;

}
+(void)postNotificationWithCacheRefreshTTL:(double)arg1 reason:(unsigned long long)arg2 ;
-(id)init;
-(void)registerForNotificationsWithUpdateBlock:(/*^block*/id)arg1 ;
@end

