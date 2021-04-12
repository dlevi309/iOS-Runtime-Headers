/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <UIKitCore/UIViewFloatAnimatableProperty.h>
#import <UIKit/UIViewSpringAnimationBehaviorDescribing.h>

@interface SBUIViewFloatSpringProperty : UIViewFloatAnimatableProperty <UIViewSpringAnimationBehaviorDescribing> {

	double _dampingRatio;
	double _response;
	double _impulse;
	double _trackingDampingRatio;
	double _trackingResponse;
	double _trackingImpulse;
	BOOL _tracking;

}

@property (assign,nonatomic) double input; 
@property (assign,nonatomic) double output; 
@property (assign,nonatomic) BOOL tracking;              //@synthesize tracking=_tracking - In the implementation block
+(void)_withoutAnimation:(/*^block*/id)arg1 ;
-(id)init;
-(double)input;
-(void)setInput:(double)arg1 ;
-(void)setDampingRatio:(double)arg1 response:(double)arg2 ;
-(void)setTracking:(BOOL)arg1 ;
-(SCD_Struct_SB3)parametersForTransitionFromState:(int)arg1 toState:(int)arg2 ;
-(double)output;
-(void)setOutput:(double)arg1 ;
-(BOOL)tracking;
-(void)setDampingRatio:(double)arg1 response:(double)arg2 impulse:(double)arg3 ;
-(void)setTrackingDampingRatio:(double)arg1 response:(double)arg2 ;
-(void)setTrackingDampingRatio:(double)arg1 response:(double)arg2 impulse:(double)arg3 ;
-(double)projectForDeceleration:(double)arg1 ;
-(double)projectForTime:(double)arg1 ;
@end

