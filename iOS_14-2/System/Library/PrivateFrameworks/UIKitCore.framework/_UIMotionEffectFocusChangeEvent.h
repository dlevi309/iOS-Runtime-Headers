/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIMotionEffectEvent.h>

@interface _UIMotionEffectFocusChangeEvent : _UIMotionEffectEvent {

	CGPoint _focusPosition;

}

@property (nonatomic,readonly) CGPoint focusPosition;              //@synthesize focusPosition=_focusPosition - In the implementation block
-(id)copyWithTimestamp:(double)arg1 ;
-(double)velocityRelativeToPreviousEvent:(id)arg1 ;
-(CGPoint)focusPosition;
-(id)initWithTimestamp:(double)arg1 focusPosition:(CGPoint)arg2 ;
@end

