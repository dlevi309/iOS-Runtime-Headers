/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface _UIFocusEngineFakePanGestureRecognizer : NSObject {

	long long _state;
	CGPoint _digitizerLocation;
	CGPoint _velocity;

}

@property (assign,nonatomic) long long state;                        //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) CGPoint digitizerLocation;              //@synthesize digitizerLocation=_digitizerLocation - In the implementation block
@property (assign,nonatomic) CGPoint velocity;                       //@synthesize velocity=_velocity - In the implementation block
-(long long)state;
-(void)setState:(long long)arg1 ;
-(CGPoint)velocity;
-(void)setVelocity:(CGPoint)arg1 ;
-(CGPoint)velocityInView:(id)arg1 ;
-(CGPoint)digitizerLocation;
-(CGPoint)_digitizerLocation;
-(void)setDigitizerLocation:(CGPoint)arg1 ;
@end

