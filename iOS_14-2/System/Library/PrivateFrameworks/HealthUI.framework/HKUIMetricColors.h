/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class UIColor;

@interface HKUIMetricColors : NSObject {

	UIColor* _keyColor;
	UIColor* _contextViewPrimaryTextColor;
	UIColor* _contextViewSecondaryTextColor;
	UIColor* _contextViewInfoButtonGlyphColor;
	UIColor* _contextViewInfoButtonBackgroundColor;

}

@property (nonatomic,retain) UIColor * keyColor;                                          //@synthesize keyColor=_keyColor - In the implementation block
@property (nonatomic,retain) UIColor * contextViewPrimaryTextColor;                       //@synthesize contextViewPrimaryTextColor=_contextViewPrimaryTextColor - In the implementation block
@property (nonatomic,retain) UIColor * contextViewSecondaryTextColor;                     //@synthesize contextViewSecondaryTextColor=_contextViewSecondaryTextColor - In the implementation block
@property (nonatomic,retain) UIColor * contextViewInfoButtonGlyphColor;                   //@synthesize contextViewInfoButtonGlyphColor=_contextViewInfoButtonGlyphColor - In the implementation block
@property (nonatomic,retain) UIColor * contextViewInfoButtonBackgroundColor;              //@synthesize contextViewInfoButtonBackgroundColor=_contextViewInfoButtonBackgroundColor - In the implementation block
+(id)chartFilterDefaultForSingle;
+(id)chartFilterDefaultForMultiple;
+(id)medicationsClinicalColors;
+(id)labResultsClinicalColors;
+(id)vitalsClinicalColors;
+(id)conditionsClinicalColors;
+(id)proceduresClinicalColors;
+(id)immunizationsClinicalColors;
+(id)allergiesClinicalColors;
+(id)unknownCategoryClinicalColors;
+(id)insuranceClinicalColors;
+(id)vitalsColors;
+(id)mindfulnessColors;
+(id)workoutContextViewColors;
+(id)hearingHealthColors;
+(id)sleepColors;
+(id)defaultContextViewColorsUsingColor:(id)arg1 ;
+(id)activityColors;
+(id)bodyMeasurementColors;
+(id)reproductiveHealthColors;
+(id)respiratoryColors;
+(id)otherColors;
+(id)carePlansClinicalColors;
+(id)devicesClinicalColors;
+(id)socialHistoryClinicalColors;
+(id)mobilityColors;
+(id)symptomsColors;
+(id)defaultClinicalColors;
+(id)metricColorsForHeartRateContext:(long long)arg1 ;
-(void)setContextViewPrimaryTextColor:(UIColor *)arg1 ;
-(void)setContextViewSecondaryTextColor:(UIColor *)arg1 ;
-(void)setKeyColor:(UIColor *)arg1 ;
-(UIColor *)keyColor;
-(UIColor *)contextViewPrimaryTextColor;
-(UIColor *)contextViewSecondaryTextColor;
-(UIColor *)contextViewInfoButtonGlyphColor;
-(UIColor *)contextViewInfoButtonBackgroundColor;
-(void)setContextViewInfoButtonGlyphColor:(UIColor *)arg1 ;
-(void)setContextViewInfoButtonBackgroundColor:(UIColor *)arg1 ;
@end

