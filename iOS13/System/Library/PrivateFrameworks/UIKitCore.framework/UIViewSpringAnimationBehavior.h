/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIViewSpringAnimationBehaviorDescribing.h>

@interface UIViewSpringAnimationBehavior : NSObject <UIViewSpringAnimationBehaviorDescribing> {

	double _trackingDampingRatio;
	double _trackingResponse;
	double _dampingRatio;
	double _response;
	double _dampingRatioSmoothing;
	double _responseSmoothing;
	double _inertialTargetSmoothing;
	double _inertialProjectionDeceleration;

}

@property (assign,nonatomic) double inertialTargetSmoothing;                     //@synthesize inertialTargetSmoothing=_inertialTargetSmoothing - In the implementation block
@property (assign,nonatomic) double inertialProjectionDeceleration;              //@synthesize inertialProjectionDeceleration=_inertialProjectionDeceleration - In the implementation block
-(id)init;
-(void)setDampingRatio:(double)arg1 response:(double)arg2 ;
-(void)setInertialTargetSmoothing:(double)arg1 ;
-(void)setInertialProjectionDeceleration:(double)arg1 ;
-(void)setTrackingDampingRatio:(double)arg1 response:(double)arg2 dampingRatioSmoothing:(double)arg3 responseSmoothing:(double)arg4 ;
-(SCD_Struct_UI133)parametersForTransitionFromState:(int)arg1 toState:(int)arg2 ;
-(double)inertialTargetSmoothing;
-(double)inertialProjectionDeceleration;
@end

