/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

