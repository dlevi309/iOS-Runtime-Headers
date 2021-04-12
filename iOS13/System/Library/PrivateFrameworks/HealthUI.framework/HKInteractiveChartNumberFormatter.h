/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKInteractiveChartDataFormatter.h>

@class NSString;

@interface HKInteractiveChartNumberFormatter : HKInteractiveChartDataFormatter {

	NSString* _unitFormatString;

}

@property (nonatomic,copy) NSString * unitFormatString;              //@synthesize unitFormatString=_unitFormatString - In the implementation block
-(id)init;
-(id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 ;
-(id)formattedValueStringForChartData:(id)arg1 options:(long long)arg2 ;
-(id)_formattedStringWithValue:(id)arg1 formatter:(id)arg2 ;
-(NSString *)unitFormatString;
-(void)setUnitFormatString:(NSString *)arg1 ;
@end

