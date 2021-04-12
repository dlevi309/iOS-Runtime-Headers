/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/


#import <ActivityRingsUI/ActivityRingsUI-Structs.h>
@class UIColor, NSString;

@interface ARUIMetricColors : NSObject {

	UIColor* _gradientLightColor;
	UIColor* _gradientDarkColor;
	UIColor* _gradientContrastColor;
	UIColor* _adjustmentButtonBackgroundColor;
	UIColor* _nonGradientTextColor;
	UIColor* _lightenedNonGradientColor;
	UIColor* _buttonTextColor;
	UIColor* _buttonDisabledTextColor;
	UIColor* _valueDisplayColor;
	UIColor* _platterBackgroundColor;
	UIColor* _platterInactiveBackgroundColor;
	NSString* _workoutRingColorIdentifier;

}

@property (nonatomic,retain) UIColor * gradientLightColor;                           //@synthesize gradientLightColor=_gradientLightColor - In the implementation block
@property (nonatomic,retain) UIColor * gradientDarkColor;                            //@synthesize gradientDarkColor=_gradientDarkColor - In the implementation block
@property (nonatomic,retain) UIColor * gradientContrastColor;                        //@synthesize gradientContrastColor=_gradientContrastColor - In the implementation block
@property (nonatomic,retain) UIColor * adjustmentButtonBackgroundColor;              //@synthesize adjustmentButtonBackgroundColor=_adjustmentButtonBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * nonGradientTextColor;                         //@synthesize nonGradientTextColor=_nonGradientTextColor - In the implementation block
@property (nonatomic,retain) UIColor * lightenedNonGradientColor;                    //@synthesize lightenedNonGradientColor=_lightenedNonGradientColor - In the implementation block
@property (nonatomic,retain) UIColor * buttonTextColor;                              //@synthesize buttonTextColor=_buttonTextColor - In the implementation block
@property (nonatomic,retain) UIColor * buttonDisabledTextColor;                      //@synthesize buttonDisabledTextColor=_buttonDisabledTextColor - In the implementation block
@property (nonatomic,retain) UIColor * valueDisplayColor;                            //@synthesize valueDisplayColor=_valueDisplayColor - In the implementation block
@property (nonatomic,retain) UIColor * platterBackgroundColor;                       //@synthesize platterBackgroundColor=_platterBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * platterInactiveBackgroundColor;               //@synthesize platterInactiveBackgroundColor=_platterInactiveBackgroundColor - In the implementation block
@property (nonatomic,retain) NSString * workoutRingColorIdentifier;                  //@synthesize workoutRingColorIdentifier=_workoutRingColorIdentifier - In the implementation block
+(id)metricColorsForGoalTypeIdentifier:(unsigned long long)arg1 ;
+(id)lapsColors;
+(id)elevationColors;
+(id)flightsClimbedColors;
+(id)powerColors;
+(id)cadenceColors;
+(id)metricColorsForMetricType:(unsigned long long)arg1 ;
+(id)lapColors;
+(id)deepBreathingColors;
+(id)stepColors;
+(id)energyColors;
+(id)briskColors;
+(id)sedentaryColors;
+(id)keyColors;
+(id)paceColors;
+(id)systemGrayTextColor;
+(CGGradientRef)newGradientForStartColor:(id)arg1 endColor:(id)arg2 ;
+(id)distanceColors;
+(id)noMetricColors;
+(id)elapsedTimeColors;
+(id)heartRateColors;
+(id)clockColors;
-(UIColor *)buttonTextColor;
-(void)setButtonTextColor:(UIColor *)arg1 ;
-(void)setButtonDisabledTextColor:(UIColor *)arg1 ;
-(UIColor *)buttonDisabledTextColor;
-(UIColor *)gradientDarkColor;
-(UIColor *)gradientLightColor;
-(UIColor *)gradientContrastColor;
-(void)setGradientLightColor:(UIColor *)arg1 ;
-(void)setGradientDarkColor:(UIColor *)arg1 ;
-(void)setGradientContrastColor:(UIColor *)arg1 ;
-(void)setNonGradientTextColor:(UIColor *)arg1 ;
-(UIColor *)nonGradientTextColor;
-(void)setAdjustmentButtonBackgroundColor:(UIColor *)arg1 ;
-(void)setValueDisplayColor:(UIColor *)arg1 ;
-(void)setWorkoutRingColorIdentifier:(NSString *)arg1 ;
-(UIColor *)adjustmentButtonBackgroundColor;
-(void)setLightenedNonGradientColor:(UIColor *)arg1 ;
-(void)setPlatterBackgroundColor:(UIColor *)arg1 ;
-(void)setPlatterInactiveBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)lightenedNonGradientColor;
-(UIColor *)valueDisplayColor;
-(UIColor *)platterBackgroundColor;
-(UIColor *)platterInactiveBackgroundColor;
-(NSString *)workoutRingColorIdentifier;
@end

