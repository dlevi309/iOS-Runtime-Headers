/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIMotionEffectEvent.h>

@interface _UIMotionEffectAttitudeEvent : _UIMotionEffectEvent {

	UIEdgeInsets _attitude;

}

@property (nonatomic,readonly) UIEdgeInsets attitude;              //@synthesize attitude=_attitude - In the implementation block
-(id)copyWithTimestamp:(double)arg1 ;
-(double)velocityRelativeToPreviousEvent:(id)arg1 ;
-(UIEdgeInsets)attitude;
-(id)initWithTimestamp:(double)arg1 attitude:(UIEdgeInsets)arg2 ;
@end

