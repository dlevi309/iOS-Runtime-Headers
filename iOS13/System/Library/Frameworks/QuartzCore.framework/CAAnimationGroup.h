/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAAnimation.h>

@class NSArray;

@interface CAAnimationGroup : CAAnimation

@property (copy) NSArray * animations; 
-(NSArray *)animations;
-(void)setAnimations:(NSArray *)arg1 ;
-(void)CA_prepareRenderValue;
-(void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3 ;
-(unsigned)_propertyFlagsForLayer:(id)arg1 ;
-(void)setDefaultDuration:(double)arg1 ;
-(Animation*)_copyRenderAnimationForLayer:(id)arg1 ;
@end

