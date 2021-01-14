/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKInteractiveChartDataFormatter.h>

@class NSArray;

@interface _HKSleepDurationAverageFormatter : HKInteractiveChartDataFormatter {

	NSArray* _rangeDataForAverage;

}

@property (nonatomic,retain) NSArray * rangeDataForAverage;              //@synthesize rangeDataForAverage=_rangeDataForAverage - In the implementation block
-(id)init;
-(id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 context:(long long)arg2 ;
-(void)setCurrentVisibleAverageNumber:(id)arg1 averageForInBed:(BOOL)arg2 ;
-(void)setRangeDataForAverage:(NSArray *)arg1 ;
-(NSArray *)rangeDataForAverage;
@end

