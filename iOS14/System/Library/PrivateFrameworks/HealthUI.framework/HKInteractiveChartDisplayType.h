/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKDisplayType.h>

@class HKGraphSeries, UIColor, NSString, HKInteractiveChartDataFormatter;

@interface HKInteractiveChartDisplayType : HKDisplayType {

	HKGraphSeries* _graphSeries;
	UIColor* _color;
	NSString* _specifiedDisplayName;
	NSString* _specifiedUnitName;
	HKInteractiveChartDataFormatter* _specifiedValueFormatter;

}

@property (nonatomic,readonly) NSString * specifiedDisplayName;                                        //@synthesize specifiedDisplayName=_specifiedDisplayName - In the implementation block
@property (nonatomic,readonly) NSString * specifiedUnitName;                                           //@synthesize specifiedUnitName=_specifiedUnitName - In the implementation block
@property (nonatomic,readonly) HKInteractiveChartDataFormatter * specifiedValueFormatter;              //@synthesize specifiedValueFormatter=_specifiedValueFormatter - In the implementation block
@property (nonatomic,readonly) HKGraphSeries * graphSeries;                                            //@synthesize graphSeries=_graphSeries - In the implementation block
@property (nonatomic,retain) UIColor * color;                                                          //@synthesize color=_color - In the implementation block
-(UIColor *)color;
-(id)description;
-(void)setColor:(UIColor *)arg1 ;
-(id)displayName;
-(id)initWithGraphSeries:(id)arg1 displayName:(id)arg2 unitName:(id)arg3 valueFormatter:(id)arg4 dataTypeCode:(long long)arg5 ;
-(id)hk_interactiveChartsFormatterForTimeScope:(long long)arg1 ;
-(id)colorWithDisplayCategoryController:(id)arg1 ;
-(HKGraphSeries *)graphSeries;
-(id)initWithGraphSeries:(id)arg1 baseDisplayType:(id)arg2 valueFormatter:(id)arg3 dataTypeCode:(long long)arg4 ;
-(id)unitNameForValue:(id)arg1 unitPreferenceController:(id)arg2 ;
-(id)_initWithGraphSeries:(id)arg1 displayName:(id)arg2 unitDisplayNameOverrides:(id)arg3 localizationTableOverride:(id)arg4 chartingRules:(id)arg5 unitName:(id)arg6 valueFormatter:(id)arg7 dataTypeCode:(long long)arg8 ;
-(long long)_internalDisplayTypeIdentifier;
-(NSString *)specifiedDisplayName;
-(NSString *)specifiedUnitName;
-(HKInteractiveChartDataFormatter *)specifiedValueFormatter;
@end

