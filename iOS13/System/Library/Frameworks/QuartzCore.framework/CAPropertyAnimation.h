/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAAnimation.h>

@class NSString, CAValueFunction;

@interface CAPropertyAnimation : CAAnimation

@property (copy) NSString * keyPath; 
@property (getter=isAdditive) BOOL additive; 
@property (getter=isCumulative) BOOL cumulative; 
@property (retain) CAValueFunction * valueFunction; 
+(id)animationWithKeyPath:(id)arg1 ;
-(NSString *)keyPath;
-(BOOL)isAdditive;
-(void)setKeyPath:(NSString *)arg1 ;
-(void)setAdditive:(BOOL)arg1 ;
-(void)setValueFunction:(CAValueFunction *)arg1 ;
-(void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3 ;
-(BOOL)additive;
-(unsigned)_propertyFlagsForLayer:(id)arg1 ;
-(BOOL)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(CAValueFunction *)valueFunction;
-(BOOL)isCumulative;
-(void)setCumulative:(BOOL)arg1 ;
-(BOOL)cumulative;
@end

