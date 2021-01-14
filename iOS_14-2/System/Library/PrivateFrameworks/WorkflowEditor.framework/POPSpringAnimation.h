/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/POPPropertyAnimation.h>

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
-(void)setVelocity:(id)arg1 ;
-(void)setSolver:(SpringSolver<POP::Vector4<double> >*)arg1 ;
-(SpringSolver<POP::Vector4<double> >*)solver;
-(id)velocity;
-(id)init;
-(void)_initState;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
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

