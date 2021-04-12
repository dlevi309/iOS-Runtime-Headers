/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/POPPropertyAnimation.h>

@interface POPDecayAnimation : POPPropertyAnimation

@property (nonatomic,copy) id velocity; 
@property (nonatomic,copy,readonly) id originalVelocity; 
@property (assign,nonatomic) double deceleration; 
@property (nonatomic,readonly) double duration; 
+(id)animation;
+(id)animationWithPropertyNamed:(id)arg1 ;
-(void)setVelocity:(id)arg1 ;
-(id)toValue;
-(id)velocity;
-(id)init;
-(void)setToValue:(id)arg1 ;
-(void)setFromValue:(id)arg1 ;
-(void)_initState;
-(void)setDeceleration:(double)arg1 ;
-(double)deceleration;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_appendDescription:(id)arg1 debug:(BOOL)arg2 ;
-(id)reversedVelocity;
-(id)originalVelocity;
-(void)_ensureComputedProperties;
-(void)_invalidateComputedProperties;
@end

