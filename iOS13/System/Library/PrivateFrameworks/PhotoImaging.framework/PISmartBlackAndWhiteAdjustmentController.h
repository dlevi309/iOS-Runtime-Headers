/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PIAdjustmentController.h>

@interface PISmartBlackAndWhiteAdjustmentController : PIAdjustmentController

@property (assign,nonatomic) double strength; 
@property (assign,nonatomic) double neutral; 
@property (assign,nonatomic) double tone; 
@property (assign,nonatomic) double grain; 
@property (assign,nonatomic) double hue; 
+(id)grainKey;
+(id)attributeGrainKey;
+(id)hueKey;
+(id)attributeHueKey;
+(id)toneKey;
+(id)attributeToneKey;
+(id)neutralKey;
+(id)attributeNeutralGammaKey;
+(id)strengthKey;
+(id)attributeStrengthKey;
+(id)inputStrengthKey;
+(id)inputNeutralGammaKey;
+(id)inputToneKey;
+(id)inputGrainKey;
+(id)inputHueKey;
+(id)inputSeedKey;
-(double)hue;
-(double)neutral;
-(void)setNeutral:(double)arg1 ;
-(void)setStrength:(double)arg1 ;
-(double)strength;
-(void)setHue:(double)arg1 ;
-(void)setTone:(double)arg1 ;
-(double)tone;
-(void)setGrain:(double)arg1 ;
-(double)grain;
@end

