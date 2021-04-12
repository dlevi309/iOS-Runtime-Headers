/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class _ATXInternalNotification;

@interface _ATXInternalAppSessionNotification : NSObject {

	_ATXInternalNotification* _noteAppSessionStart;
	_ATXInternalNotification* _noteAppSessionEnd;

}
+(void)postNotificationForAppSessionStart:(id)arg1 ;
+(void)postNotificationForAppSessionEnd:(id)arg1 ;
-(id)init;
-(void)registerForNotificationsWithAppSessionStartBlock:(/*^block*/id)arg1 ;
-(void)registerForNotificationsWithAppSessionEndBlock:(/*^block*/id)arg1 ;
@end

