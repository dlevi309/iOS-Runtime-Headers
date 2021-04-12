/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)defaultContextViewColorsUsingColor:(id)arg1 ;
+(id)sleepColors;
+(id)workoutContextViewColors;
+(id)metricColorsForHeartRateContext:(long long)arg1 ;
+(id)vitalsColors;
+(id)activityColors;
+(id)bodyMeasurementColors;
+(id)mindfulnessColors;
+(id)reproductiveHealthColors;
+(id)hearingHealthColors;
+(id)respiratoryColors;
+(id)otherColors;
+(id)defaultClinicalColors;
-(UIColor *)keyColor;
-(void)setKeyColor:(UIColor *)arg1 ;
-(void)setContextViewPrimaryTextColor:(UIColor *)arg1 ;
-(UIColor *)contextViewPrimaryTextColor;
-(void)setContextViewSecondaryTextColor:(UIColor *)arg1 ;
-(UIColor *)contextViewInfoButtonGlyphColor;
-(UIColor *)contextViewInfoButtonBackgroundColor;
-(UIColor *)contextViewSecondaryTextColor;
-(void)setContextViewInfoButtonGlyphColor:(UIColor *)arg1 ;
-(void)setContextViewInfoButtonBackgroundColor:(UIColor *)arg1 ;
@end

