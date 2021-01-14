/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PIAdjustmentController.h>

@interface PISmartBlackAndWhiteAdjustmentController : PIAdjustmentController

@property (assign,nonatomic) double strength; 
@property (assign,nonatomic) double neutral; 
@property (assign,nonatomic) double tone; 
@property (assign,nonatomic) double grain; 
@property (assign,nonatomic) double hue; 
+(id)hueKey;
+(id)toneKey;
+(id)grainKey;
+(id)attributeGrainKey;
+(id)attributeHueKey;
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
-(double)strength;
-(double)hue;
-(void)setStrength:(double)arg1 ;
-(double)tone;
-(void)setNeutral:(double)arg1 ;
-(double)grain;
-(double)neutral;
-(void)setHue:(double)arg1 ;
-(void)setTone:(double)arg1 ;
-(void)setGrain:(double)arg1 ;
@end

