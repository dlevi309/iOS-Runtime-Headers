/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/POPAnimationEvent.h>

@interface POPAnimationValueEvent : POPAnimationEvent {

	id _value;
	id _velocity;

}

@property (nonatomic,retain) id velocity;              //@synthesize velocity=_velocity - In the implementation block
@property (nonatomic,readonly) id value;               //@synthesize value=_value - In the implementation block
-(id)value;
-(id)velocity;
-(void)setVelocity:(id)arg1 ;
-(void)_appendDescription:(id)arg1 ;
-(id)initWithType:(unsigned long long)arg1 time:(double)arg2 value:(id)arg3 ;
@end

