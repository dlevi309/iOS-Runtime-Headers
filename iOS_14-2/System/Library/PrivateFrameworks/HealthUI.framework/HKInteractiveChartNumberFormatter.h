/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKInteractiveChartDataFormatter.h>

@class NSString;

@interface HKInteractiveChartNumberFormatter : HKInteractiveChartDataFormatter {

	NSString* _unitFormatString;

}

@property (nonatomic,copy) NSString * unitFormatString;              //@synthesize unitFormatString=_unitFormatString - In the implementation block
-(id)init;
-(void)setUnitFormatString:(NSString *)arg1 ;
-(id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 context:(long long)arg2 ;
-(id)formattedValueStringForChartData:(id)arg1 options:(long long)arg2 ;
-(id)_formattedStringWithValue:(id)arg1 formatter:(id)arg2 ;
-(NSString *)unitFormatString;
@end

