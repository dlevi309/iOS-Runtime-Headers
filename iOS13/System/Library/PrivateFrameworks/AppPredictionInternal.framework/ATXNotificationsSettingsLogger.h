/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@interface ATXNotificationsSettingsLogger : NSObject
+(id)getAppGenreFromBundleId:(id)arg1 ;
-(id)convertToPBFormat:(id)arg1 setting:(id)arg2 ;
-(id)createPBSettingForBundleID:(id)arg1 settings:(id)arg2 ;
-(id)retrieveSettingsForBundleIDs:(id)arg1 ;
-(id)getAppUsageDataForBundleID:(id)arg1 ;
-(id)getAggregatedData:(id)arg1 totalApps:(int)arg2 ;
-(id)retrieveLog;
-(id)wrapLog:(id)arg1 ;
-(void)logNotificationSettings;
-(double)getSamplingRate;
@end

