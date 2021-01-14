/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceCheckInternal.framework/DeviceCheckInternal
*/


@interface DCXPCActivityController : NSObject
+(id)sharedInstance;
-(void)start;
-(void)_registerActivityWithInterval:(double)arg1 ;
-(void)_performMetadataRefreshForActivity:(id)arg1 ;
-(id)_activityCriteriaWithFrequency:(double)arg1 ;
-(void)updateActivityScheduleWithAsset:(id)arg1 ;
@end

