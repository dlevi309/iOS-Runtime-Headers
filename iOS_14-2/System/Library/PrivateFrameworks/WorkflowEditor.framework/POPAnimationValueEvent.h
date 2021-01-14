/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/POPAnimationEvent.h>

@interface POPAnimationValueEvent : POPAnimationEvent {

	id _value;
	id _velocity;

}

@property (nonatomic,retain) id velocity;              //@synthesize velocity=_velocity - In the implementation block
@property (nonatomic,readonly) id value;               //@synthesize value=_value - In the implementation block
-(void)setVelocity:(id)arg1 ;
-(id)velocity;
-(id)value;
-(id)initWithType:(unsigned long long)arg1 time:(double)arg2 value:(id)arg3 ;
-(void)_appendDescription:(id)arg1 ;
@end

