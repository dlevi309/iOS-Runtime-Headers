/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UISettingsKeyObserver.h>

@class NSString;

@interface _UICubicPolyTangent : NSObject <_UISettingsKeyObserver> {

	double _initialLinearGain;
	double _parabolicGain;
	double _cubicGain;
	double _quarticGain;
	double _tangentLineSpeed;
	double _tangentSqrtSpeed;
	double _tangentCbrtSpeed;
	double _tangentHyperCbrtSpeed;

}

@property (assign,nonatomic) double initialLinearGain;                  //@synthesize initialLinearGain=_initialLinearGain - In the implementation block
@property (assign,nonatomic) double parabolicGain;                      //@synthesize parabolicGain=_parabolicGain - In the implementation block
@property (assign,nonatomic) double cubicGain;                          //@synthesize cubicGain=_cubicGain - In the implementation block
@property (assign,nonatomic) double quarticGain;                        //@synthesize quarticGain=_quarticGain - In the implementation block
@property (assign,nonatomic) double tangentLineSpeed;                   //@synthesize tangentLineSpeed=_tangentLineSpeed - In the implementation block
@property (assign,nonatomic) double tangentSqrtSpeed;                   //@synthesize tangentSqrtSpeed=_tangentSqrtSpeed - In the implementation block
@property (assign,nonatomic) double tangentCbrtSpeed;                   //@synthesize tangentCbrtSpeed=_tangentCbrtSpeed - In the implementation block
@property (assign,nonatomic) double tangentHyperCbrtSpeed;              //@synthesize tangentHyperCbrtSpeed=_tangentHyperCbrtSpeed - In the implementation block
@property (nonatomic,readonly) BOOL isEmpty; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyboardTrackpadCurve;
-(double)tangentSpeedForPower:(int)arg1 ;
-(int)RootPowerOfEarliestTangent:(int)arg1 ;
-(void)setCubicGain:(double)arg1 ;
-(double)clipForIOFixedMath:(double)arg1 polynomialPower:(int)arg2 tangencyStartingAt:(double)arg3 ;
-(double)quarticDerivative:(double)arg1 ;
-(void)clipGainsForIOFixedMathWithTangency;
-(double)quarticFunction:(double)arg1 ;
-(void)setTangentLineSpeed:(double)arg1 ;
-(double)quarticTangentFunction:(double)arg1 powerOfEarliestTangent:(int)arg2 ;
-(void)setTangentSqrtSpeed:(double)arg1 ;
-(void)setParabolicGain:(double)arg1 ;
-(void)setInitialLinearGain:(double)arg1 ;
-(void)setQuarticGain:(double)arg1 ;
-(double)gainForPower:(int)arg1 ;
-(void)setTangentCbrtSpeed:(double)arg1 ;
-(void)setTangentHyperCbrtSpeed:(double)arg1 ;
-(double)initialLinearGain;
-(double)cubicGain;
-(double)parabolicGain;
-(double)tangentLineSpeed;
-(double)tangentSqrtSpeed;
-(double)tangentCbrtSpeed;
-(double)tangentHyperCbrtSpeed;
-(id)init;
-(double)piecewiseCubicAcceleratedSpeed:(double)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(BOOL)isEmpty;
-(double)quarticGain;
@end

