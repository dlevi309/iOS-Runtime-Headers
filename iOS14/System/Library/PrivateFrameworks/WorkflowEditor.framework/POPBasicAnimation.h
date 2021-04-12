/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/POPPropertyAnimation.h>

@class CAMediaTimingFunction;

@interface POPBasicAnimation : POPPropertyAnimation

@property (assign,nonatomic) double duration; 
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction; 
+(id)animation;
+(id)defaultAnimation;
+(id)animationWithPropertyNamed:(id)arg1 ;
+(id)linearAnimation;
+(id)easeInAnimation;
+(id)easeOutAnimation;
+(id)easeInEaseOutAnimation;
-(void)setDuration:(double)arg1 ;
-(id)init;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(CAMediaTimingFunction *)timingFunction;
-(void)_initState;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_appendDescription:(id)arg1 debug:(BOOL)arg2 ;
@end

