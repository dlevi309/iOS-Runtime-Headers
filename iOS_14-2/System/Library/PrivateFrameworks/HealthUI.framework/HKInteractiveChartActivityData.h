/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKGraphSeriesChartData.h>

@class HKActivitySummary, NSString;

@interface HKInteractiveChartActivityData : NSObject <HKGraphSeriesChartData> {

	HKActivitySummary* _activitySummaryData;
	long long _activityValue;

}

@property (nonatomic,retain) HKActivitySummary * activitySummaryData;              //@synthesize activitySummaryData=_activitySummaryData - In the implementation block
@property (assign,nonatomic) long long activityValue;                              //@synthesize activityValue=_activityValue - In the implementation block
@property (nonatomic,readonly) BOOL hasActivityGoal; 
@property (nonatomic,readonly) BOOL activityValueGoalMet; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(long long)activityValue;
-(HKActivitySummary *)activitySummaryData;
-(BOOL)hasActivityGoal;
-(BOOL)activityValueGoalMet;
-(void)setActivitySummaryData:(HKActivitySummary *)arg1 ;
-(void)setActivityValue:(long long)arg1 ;
@end

