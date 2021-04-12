/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIMotionEffectEvent.h>

@interface _UIMotionEffectFocusChangeEvent : _UIMotionEffectEvent {

	CGPoint _focusPosition;

}

@property (nonatomic,readonly) CGPoint focusPosition;              //@synthesize focusPosition=_focusPosition - In the implementation block
-(CGPoint)focusPosition;
-(id)copyWithTimestamp:(double)arg1 ;
-(double)velocityRelativeToPreviousEvent:(id)arg1 ;
-(id)initWithTimestamp:(double)arg1 focusPosition:(CGPoint)arg2 ;
@end

