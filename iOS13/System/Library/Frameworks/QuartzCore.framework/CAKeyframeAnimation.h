/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAPropertyAnimation.h>

@class NSArray, NSString;

@interface CAKeyframeAnimation : CAPropertyAnimation

@property (copy) NSArray * values; 
@property (assign) const CGPathRef path; 
@property (copy) NSArray * keyTimes; 
@property (copy) NSArray * timingFunctions; 
@property (copy) NSString * calculationMode; 
@property (copy) NSArray * tensionValues; 
@property (copy) NSArray * continuityValues; 
@property (copy) NSArray * biasValues; 
@property (copy) NSString * rotationMode; 
+(id)normalizedKeyframeAnimationWithKeyPath:(id)arg1 ;
-(void)setValues:(NSArray *)arg1 ;
-(NSArray *)values;
-(const CGPathRef)path;
-(void)setPath:(const CGPathRef)arg1 ;
-(void)setKeyTimes:(NSArray *)arg1 ;
-(void)setTimingFunctions:(NSArray *)arg1 ;
-(void)setCalculationMode:(NSString *)arg1 ;
-(NSArray *)keyTimes;
-(void)setTensionValues:(NSArray *)arg1 ;
-(void)CA_prepareRenderValue;
-(void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3 ;
-(Animation*)_copyRenderAnimationForLayer:(id)arg1 ;
-(BOOL)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(NSString *)calculationMode;
-(NSArray *)timingFunctions;
-(NSArray *)tensionValues;
-(NSArray *)continuityValues;
-(void)setContinuityValues:(NSArray *)arg1 ;
-(NSArray *)biasValues;
-(void)setBiasValues:(NSArray *)arg1 ;
-(NSString *)rotationMode;
-(void)setRotationMode:(NSString *)arg1 ;
@end

