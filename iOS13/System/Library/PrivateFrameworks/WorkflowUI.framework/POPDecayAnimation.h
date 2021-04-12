/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <WorkflowUI/POPPropertyAnimation.h>

@interface POPDecayAnimation : POPPropertyAnimation

@property (nonatomic,copy) id velocity; 
@property (nonatomic,copy,readonly) id originalVelocity; 
@property (assign,nonatomic) double deceleration; 
@property (nonatomic,readonly) double duration; 
+(id)animation;
+(id)animationWithPropertyNamed:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)duration;
-(id)velocity;
-(void)setVelocity:(id)arg1 ;
-(void)setFromValue:(id)arg1 ;
-(id)toValue;
-(void)setToValue:(id)arg1 ;
-(void)setDeceleration:(double)arg1 ;
-(double)deceleration;
-(void)_initState;
-(void)_appendDescription:(id)arg1 debug:(BOOL)arg2 ;
-(id)reversedVelocity;
-(id)originalVelocity;
-(void)_ensureComputedProperties;
-(void)_invalidateComputedProperties;
@end

