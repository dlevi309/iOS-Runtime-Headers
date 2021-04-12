/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <WorkflowUI/POPPropertyAnimation.h>

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
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(CAMediaTimingFunction *)timingFunction;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(void)_initState;
-(void)_appendDescription:(id)arg1 debug:(BOOL)arg2 ;
@end

