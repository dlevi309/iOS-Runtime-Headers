/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKGraphSeriesBlockCoordinateInfo.h>
#import <libobjc.A.dylib/HKGraphSeriesChartData.h>

@class HKSleepDay, HKSHSleepDaySummary, NSString;

@interface HKSleepChartPointUserInfo : NSObject <HKGraphSeriesBlockCoordinateInfo, HKGraphSeriesChartData> {

	long long _seriesType;
	HKSleepDay* _sleepDay;
	HKSHSleepDaySummary* _sleepDaySummary;

}

@property (nonatomic,readonly) long long seriesType;                               //@synthesize seriesType=_seriesType - In the implementation block
@property (nonatomic,readonly) HKSleepDay * sleepDay;                              //@synthesize sleepDay=_sleepDay - In the implementation block
@property (nonatomic,readonly) HKSHSleepDaySummary * sleepDaySummary;              //@synthesize sleepDaySummary=_sleepDaySummary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HKSleepDay *)sleepDay;
-(id)initWithSeriesType:(long long)arg1 sleepDay:(id)arg2 ;
-(long long)seriesType;
-(id)initWithSeriesType:(long long)arg1 sleepDaySummary:(id)arg2 ;
-(HKSHSleepDaySummary *)sleepDaySummary;
@end

