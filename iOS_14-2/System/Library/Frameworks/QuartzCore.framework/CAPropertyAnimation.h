/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(BOOL)additive;
-(void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3 ;
-(unsigned)_propertyFlagsForLayer:(id)arg1 ;
-(void)setAdditive:(BOOL)arg1 ;
-(void)setKeyPath:(NSString *)arg1 ;
-(NSString *)keyPath;
-(CAValueFunction *)valueFunction;
-(BOOL)isCumulative;
-(void)setCumulative:(BOOL)arg1 ;
-(BOOL)isAdditive;
-(void)setValueFunction:(CAValueFunction *)arg1 ;
-(BOOL)cumulative;
@end

