/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

