/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/

#import <CoreBrightness/KeyboardBacklight.h>

@class NSDictionary;

@interface KeyboardBacklightHIDCurve : KeyboardBacklight {

	float _chicletCurveCoefficient;
	float _chicletCurvePower;

}

@property (readonly) NSDictionary * brightnessCurve; 
@property (readonly) float maxCurveNits; 
@property (readonly) float chicletCurveCoefficient;               //@synthesize chicletCurveCoefficient=_chicletCurveCoefficient - In the implementation block
@property (readonly) float chicletCurvePower;                     //@synthesize chicletCurvePower=_chicletCurvePower - In the implementation block
@property (readonly) float level; 
@property (readonly) float maxLevelPercentage; 
@property (readonly) float maxCapableNits; 
@property (readonly) float minCapableNits; 
-(void)dealloc;
-(id)description;
-(float)level;
-(id)initWithQueue:(id)arg1 ;
-(float)brightness;
-(void)setBrightness:(float)arg1 ;
-(id)initWithQueue:(id)arg1 device:(id)arg2 ;
-(void)updateLuxToNitsCurve;
-(float)maxLevelPercentage;
-(void)setBrightness:(float)arg1 withFadeSpeed:(int)arg2 commit:(BOOL)arg3 ;
-(float)convertNitsToLevelPercentage:(float)arg1 ;
-(float)maxCapableNits;
-(float)minCapableNits;
-(void)getKeyboardBacklightPreferences;
-(void)storeKeyboardBacklightPreferences;
-(float)currentLuxToAmbient;
-(void)calculateLevelPercentageAtAmbient:(float)arg1 ;
-(void)handleLuxUpdate:(float)arg1 ;
-(float)maxUserLevel;
-(float)maxCurveNits;
-(BOOL)isBrightnessCurveValid:(id)arg1 ;
-(float)chicletCurveCoefficient;
-(float)chicletCurvePower;
-(void)updateBrightnessCurve:(id)arg1 ;
-(void)storeKeyboardBacklightCurveToPreferences;
-(NSDictionary *)brightnessCurve;
-(float)currentLuxToNits;
-(float)perceptualBrightnessForLevel:(float)arg1 ;
-(float)convertPWMPercentageToNits:(float)arg1 ;
@end

