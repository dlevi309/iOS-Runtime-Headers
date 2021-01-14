/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAPropertyAnimation.h>

@interface CABasicAnimation : CAPropertyAnimation

@property (assign) BOOL roundsToInteger; 
@property (assign) double startAngle; 
@property (assign) double endAngle; 
@property (retain) id fromValue; 
@property (retain) id toValue; 
@property (retain) id byValue; 
+(id)normalizedAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 ;
-(void)CA_prepareRenderValue;
-(id)toValue;
-(BOOL)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(Animation*)_copyRenderAnimationForLayer:(id)arg1 ;
-(void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3 ;
-(id)byValue;
-(double)_timeFunction:(double)arg1 ;
-(id)fromValue;
-(double)endAngle;
-(void)setToValue:(id)arg1 ;
-(void)setStartAngle:(double)arg1 ;
-(void)setByValue:(id)arg1 ;
-(double)startAngle;
-(void)setFromValue:(id)arg1 ;
-(BOOL)roundsToInteger;
-(void)setEndAngle:(double)arg1 ;
-(void)setRoundsToInteger:(BOOL)arg1 ;
@end

