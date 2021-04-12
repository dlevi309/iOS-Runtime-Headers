/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIMotionEffectEvent.h>

@interface _UIMotionEffectAttitudeEvent : _UIMotionEffectEvent {

	UIEdgeInsets _attitude;

}

@property (nonatomic,readonly) UIEdgeInsets attitude;              //@synthesize attitude=_attitude - In the implementation block
-(UIEdgeInsets)attitude;
-(id)initWithTimestamp:(double)arg1 attitude:(UIEdgeInsets)arg2 ;
-(id)copyWithTimestamp:(double)arg1 ;
-(double)velocityRelativeToPreviousEvent:(id)arg1 ;
@end

