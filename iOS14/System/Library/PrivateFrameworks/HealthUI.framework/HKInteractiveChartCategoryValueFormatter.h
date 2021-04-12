/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKInteractiveChartDataFormatter.h>

@class NSString;

@interface HKInteractiveChartCategoryValueFormatter : HKInteractiveChartDataFormatter {

	NSString* _localizedCategoryName;

}

@property (nonatomic,retain) NSString * localizedCategoryName;              //@synthesize localizedCategoryName=_localizedCategoryName - In the implementation block
-(NSString *)localizedCategoryName;
-(void)setLocalizedCategoryName:(NSString *)arg1 ;
-(id)initWithLocalizedCategoryName:(id)arg1 ;
-(id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 context:(long long)arg2 ;
-(id)formattedValueStringForChartData:(id)arg1 options:(long long)arg2 ;
-(id)_uniqueChartPoints:(id)arg1 ;
-(id)_formattedStringWithValue:(long long)arg1 useColorAttributes:(BOOL)arg2 ;
-(id)_formattedStringWithText:(id)arg1 ;
-(id)_formattedStringWithCount:(long long)arg1 ;
@end

