/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class _ATXMotionManagerWrapper, ATXLocationManager, ATXNotificationsContentAnalyzer, _ATXAppLaunchCategoricalHistogram, _ATXAppLaunchHistogram;

@interface ATXNotificationContextManager : NSObject {

	_ATXMotionManagerWrapper* _motionmanager;
	ATXLocationManager* _locationmanager;
	ATXNotificationsContentAnalyzer* _contentanalyzer;
	_ATXAppLaunchCategoricalHistogram* _notificationsHistory;
	_ATXAppLaunchHistogram* _appHistory;

}
+(id)sharedInstance;
+(void)appendNotificationHistoryToMetadata:(id)arg1 history:(id)arg2 ;
+(void)appendContentFeaturesToMetadata:(id)arg1 features:(id)arg2 ;
+(void)appendLocationToMetadata:(id)arg1 locationType:(id)arg2 visits:(unsigned long long)arg3 ;
+(void)appendMotionToMetadata:(id)arg1 motion:(id)arg2 ;
-(id)init;
-(void)appendContextToMetadata:(id)arg1 ;
-(id)getNotificationHistoryForApp:(id)arg1 ;
@end

