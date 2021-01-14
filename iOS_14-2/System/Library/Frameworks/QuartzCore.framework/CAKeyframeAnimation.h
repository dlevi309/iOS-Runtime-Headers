/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)CA_prepareRenderValue;
-(BOOL)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(Animation*)_copyRenderAnimationForLayer:(id)arg1 ;
-(void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3 ;
-(NSArray *)values;
-(BOOL)CA_validateValue:(id)arg1 forKey:(id)arg2 ;
-(void)setTensionValues:(NSArray *)arg1 ;
-(void)setPath:(const CGPathRef)arg1 ;
-(const CGPathRef)path;
-(NSArray *)keyTimes;
-(void)setValues:(NSArray *)arg1 ;
-(void)setTimingFunctions:(NSArray *)arg1 ;
-(void)setCalculationMode:(NSString *)arg1 ;
-(NSString *)rotationMode;
-(NSArray *)tensionValues;
-(NSString *)calculationMode;
-(NSArray *)timingFunctions;
-(NSArray *)continuityValues;
-(void)setContinuityValues:(NSArray *)arg1 ;
-(void)setBiasValues:(NSArray *)arg1 ;
-(void)setRotationMode:(NSString *)arg1 ;
-(void)setKeyTimes:(NSArray *)arg1 ;
-(NSArray *)biasValues;
@end

