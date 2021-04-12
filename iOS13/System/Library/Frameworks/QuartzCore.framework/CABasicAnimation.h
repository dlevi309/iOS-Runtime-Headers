/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)fromValue;
-(void)setFromValue:(id)arg1 ;
-(id)toValue;
-(void)setToValue:(id)arg1 ;
-(void)setStartAngle:(double)arg1 ;
-(double)startAngle;
-(void)setByValue:(id)arg1 ;
-(void)CA_prepareRenderValue;
-(void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3 ;
-(Animation*)_copyRenderAnimationForLayer:(id)arg1 ;
-(BOOL)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(id)byValue;
-(double)_timeFunction:(double)arg1 ;
-(BOOL)roundsToInteger;
-(double)endAngle;
-(void)setRoundsToInteger:(BOOL)arg1 ;
-(void)setEndAngle:(double)arg1 ;
@end

