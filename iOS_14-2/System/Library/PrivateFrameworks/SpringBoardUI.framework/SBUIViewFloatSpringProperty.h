/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTracking:(BOOL)arg1 ;
-(BOOL)tracking;
-(id)init;
-(double)input;
-(double)projectForTime:(double)arg1 ;
-(double)output;
-(void)setTrackingDampingRatio:(double)arg1 response:(double)arg2 impulse:(double)arg3 ;
-(void)setInput:(double)arg1 ;
-(void)setTrackingDampingRatio:(double)arg1 response:(double)arg2 ;
-(void)setDampingRatio:(double)arg1 response:(double)arg2 ;
-(SCD_Struct_SB3)parametersForTransitionFromState:(int)arg1 toState:(int)arg2 ;
-(void)setOutput:(double)arg1 ;
-(double)projectForDeceleration:(double)arg1 ;
-(void)setDampingRatio:(double)arg1 response:(double)arg2 impulse:(double)arg3 ;
@end

