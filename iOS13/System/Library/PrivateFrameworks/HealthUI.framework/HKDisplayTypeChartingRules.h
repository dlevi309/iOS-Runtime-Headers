/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@protocol HKDecimalPrecisionRule, HKInteractiveChartsAxisScalingRule;
@class NSMutableDictionary, NSDictionary;

@interface HKDisplayTypeChartingRules : NSObject {

	long long _defaultStyle;
	NSMutableDictionary* _rulesByTimeScope;
	id<HKDecimalPrecisionRule> _allowedDecimalPrecisionRule;
	NSDictionary* _perUnitDecimalPrecision;
	BOOL _shouldHideAverageLine;
	BOOL _shouldConnectSamplesWithLines;
	long long _defaultChartStyle;
	id<HKInteractiveChartsAxisScalingRule> _axisScalingRule;
	long long _preferredTimeScope;

}

@property (nonatomic,readonly) long long defaultChartStyle;                                       //@synthesize defaultChartStyle=_defaultChartStyle - In the implementation block
@property (assign,nonatomic) BOOL shouldHideAverageLine;                                          //@synthesize shouldHideAverageLine=_shouldHideAverageLine - In the implementation block
@property (nonatomic,retain) id<HKInteractiveChartsAxisScalingRule> axisScalingRule;              //@synthesize axisScalingRule=_axisScalingRule - In the implementation block
@property (assign,nonatomic) BOOL shouldConnectSamplesWithLines;                                  //@synthesize shouldConnectSamplesWithLines=_shouldConnectSamplesWithLines - In the implementation block
@property (assign,nonatomic) long long preferredTimeScope;                                        //@synthesize preferredTimeScope=_preferredTimeScope - In the implementation block
-(void)setAxisScalingRule:(id<HKInteractiveChartsAxisScalingRule>)arg1 ;
-(BOOL)shouldHideAverageLine;
-(long long)chartStyleForTimeScope:(long long)arg1 ;
-(long long)preferredTimeScope;
-(id)allowedDecimalPrecisionRuleForUnit:(id)arg1 ;
-(id<HKInteractiveChartsAxisScalingRule>)axisScalingRule;
-(id)initWithDefaultChartStyle:(long long)arg1 ;
-(void)setIntervalComponents:(id)arg1 forTimeScope:(long long)arg2 ;
-(void)setChartPointRadius:(double)arg1 forTimeScope:(long long)arg2 ;
-(void)setChartPointLineWidth:(double)arg1 forTimeScope:(long long)arg2 ;
-(void)setShouldHideAverageLine:(BOOL)arg1 ;
-(void)setPreferredTimeScope:(long long)arg1 ;
-(void)setChartStyle:(long long)arg1 forTimeScope:(long long)arg2 ;
-(void)setLineChartFlatLastValue:(BOOL)arg1 forTimeScope:(long long)arg2 ;
-(void)setLineChartUsesPointMarkerImage:(BOOL)arg1 forTimeScope:(long long)arg2 ;
-(void)setLineChartUsesValueAxisAnnotation:(BOOL)arg1 forTimeScope:(long long)arg2 ;
-(BOOL)lineChartFlatLastValueForTimeScope:(long long)arg1 ;
-(BOOL)lineChartExtendLastValueForTimeScope:(long long)arg1 ;
-(BOOL)lineChartExtendFirstValueForTimeScope:(long long)arg1 ;
-(BOOL)lineChartUsesPointMarkerImageForTimeScope:(long long)arg1 ;
-(BOOL)lineChartUsesValueAxisAnnotationForTimeScope:(long long)arg1 ;
-(void)_setRule:(id)arg1 forKey:(id)arg2 timeScope:(long long)arg3 ;
-(id)_ruleForKey:(id)arg1 timeScope:(long long)arg2 ;
-(id)intervalComponentsForTimeScope:(long long)arg1 ;
-(double)chartPointLineWidthForTimeScope:(long long)arg1 ;
-(double)chartPointRadiusForTimeScope:(long long)arg1 ;
-(void)setLineChartExtendLastValue:(BOOL)arg1 forTimeScope:(long long)arg2 ;
-(void)setLineChartExtendFirstValue:(BOOL)arg1 forTimeScope:(long long)arg2 ;
-(void)adjustedBoundsForPortraitChartWithMin:(double)arg1 max:(double)arg2 minOut:(double*)arg3 maxOut:(double*)arg4 decimalPrecision:(long long*)arg5 unit:(id)arg6 timeScope:(long long)arg7 ;
-(void)setAllowedDecimalPrecisionRule:(id)arg1 perUnitPrecisionRules:(id)arg2 ;
-(long long)defaultChartStyle;
-(BOOL)shouldConnectSamplesWithLines;
-(void)setShouldConnectSamplesWithLines:(BOOL)arg1 ;
@end

