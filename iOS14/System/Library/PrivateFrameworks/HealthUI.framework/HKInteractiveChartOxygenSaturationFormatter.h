/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKInteractiveChartGenericStatFormatter.h>

@interface HKInteractiveChartOxygenSaturationFormatter : HKInteractiveChartGenericStatFormatter {

	long long _airPressureStatisticsType;

}

@property (assign,nonatomic) long long airPressureStatisticsType;              //@synthesize airPressureStatisticsType=_airPressureStatisticsType - In the implementation block
-(id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 context:(long long)arg2 ;
-(id)initWithStatisticsType:(long long)arg1 ;
-(long long)airPressureStatisticsType;
-(void)setAirPressureStatisticsType:(long long)arg1 ;
@end

