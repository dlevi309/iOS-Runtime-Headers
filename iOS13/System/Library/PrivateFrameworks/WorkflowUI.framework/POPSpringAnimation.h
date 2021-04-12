/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <WorkflowUI/POPPropertyAnimation.h>

@interface POPSpringAnimation : POPPropertyAnimation

@property (nonatomic,copy) id velocity; 
@property (assign,nonatomic) double springBounciness; 
@property (assign,nonatomic) double springSpeed; 
@property (assign,nonatomic) double dynamicsTension; 
@property (assign,nonatomic) double dynamicsFriction; 
@property (assign,nonatomic) double dynamicsMass; 
+(id)animation;
+(id)animationWithPropertyNamed:(id)arg1 ;
+(void)convertBounciness:(double)arg1 speed:(double)arg2 toTension:(double*)arg3 friction:(double*)arg4 mass:(double*)arg5 ;
+(void)convertTension:(double)arg1 friction:(double)arg2 toBounciness:(double*)arg3 speed:(double*)arg4 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)velocity;
-(void)setVelocity:(id)arg1 ;
-(SpringSolver<POP::Vector4<double> >*)solver;
-(void)setSolver:(SpringSolver<POP::Vector4<double> >*)arg1 ;
-(void)_initState;
-(void)_appendDescription:(id)arg1 debug:(BOOL)arg2 ;
-(void)_updatedDynamicsTension;
-(void)_updatedDynamicsFriction;
-(void)_updatedDynamicsMass;
-(double)dynamicsTension;
-(void)setDynamicsTension:(double)arg1 ;
-(double)dynamicsFriction;
-(void)setDynamicsFriction:(double)arg1 ;
-(double)dynamicsMass;
-(void)setDynamicsMass:(double)arg1 ;
-(double)springSpeed;
-(void)setSpringSpeed:(double)arg1 ;
-(double)springBounciness;
-(void)setSpringBounciness:(double)arg1 ;
@end

