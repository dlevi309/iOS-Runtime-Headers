/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <PrototypeTools/PTSettings.h>
#import <UIKit/UIViewSpringAnimationBehaviorDescribing.h>

@class NSString;

@interface SBFFluidBehaviorSettings : PTSettings <UIViewSpringAnimationBehaviorDescribing> {

	BOOL _smoothingAndProjectionEnabled;
	long long _behaviorType;
	NSString* _name;
	double _deceleration;
	double _dampingRatio;
	double _response;
	double _retargetImpulse;
	double _trackingDampingRatio;
	double _trackingResponse;
	double _trackingRetargetImpulse;
	double _dampingRatioSmoothing;
	double _responseSmoothing;
	double _trackingDampingRatioSmoothing;
	double _trackingResponseSmoothing;
	double _inertialTargetSmoothingRatio;
	double _inertialProjectionDeceleration;

}

@property (assign,nonatomic) long long behaviorType;                             //@synthesize behaviorType=_behaviorType - In the implementation block
@property (nonatomic,copy) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) double deceleration;                                //@synthesize deceleration=_deceleration - In the implementation block
@property (assign,nonatomic) double dampingRatio;                                //@synthesize dampingRatio=_dampingRatio - In the implementation block
@property (assign,nonatomic) double response;                                    //@synthesize response=_response - In the implementation block
@property (assign,nonatomic) double retargetImpulse;                             //@synthesize retargetImpulse=_retargetImpulse - In the implementation block
@property (assign,nonatomic) double trackingDampingRatio;                        //@synthesize trackingDampingRatio=_trackingDampingRatio - In the implementation block
@property (assign,nonatomic) double trackingResponse;                            //@synthesize trackingResponse=_trackingResponse - In the implementation block
@property (assign,nonatomic) double trackingRetargetImpulse;                     //@synthesize trackingRetargetImpulse=_trackingRetargetImpulse - In the implementation block
@property (assign,nonatomic) BOOL smoothingAndProjectionEnabled;                 //@synthesize smoothingAndProjectionEnabled=_smoothingAndProjectionEnabled - In the implementation block
@property (assign,nonatomic) double dampingRatioSmoothing;                       //@synthesize dampingRatioSmoothing=_dampingRatioSmoothing - In the implementation block
@property (assign,nonatomic) double responseSmoothing;                           //@synthesize responseSmoothing=_responseSmoothing - In the implementation block
@property (assign,nonatomic) double trackingDampingRatioSmoothing;               //@synthesize trackingDampingRatioSmoothing=_trackingDampingRatioSmoothing - In the implementation block
@property (assign,nonatomic) double trackingResponseSmoothing;                   //@synthesize trackingResponseSmoothing=_trackingResponseSmoothing - In the implementation block
@property (assign,nonatomic) double inertialTargetSmoothingRatio;                //@synthesize inertialTargetSmoothingRatio=_inertialTargetSmoothingRatio - In the implementation block
@property (assign,nonatomic) double inertialProjectionDeceleration;              //@synthesize inertialProjectionDeceleration=_inertialProjectionDeceleration - In the implementation block
+(id)settingsControllerModule;
+(id)_moduleWithSectionTitle:(id)arg1 ;
-(void)setDefaultValues;
-(void)setDampingRatioSmoothing:(double)arg1 ;
-(void)setRetargetImpulse:(double)arg1 ;
-(double)responseSmoothing;
-(long long)behaviorType;
-(NSString *)name;
-(double)dampingRatioSmoothing;
-(SCD_Struct_SB16)parametersForTransitionFromState:(int)arg1 toState:(int)arg2 ;
-(void)setResponseSmoothing:(double)arg1 ;
-(double)response;
-(void)setInertialProjectionDeceleration:(double)arg1 ;
-(void)setResponse:(double)arg1 ;
-(void)setBehaviorType:(long long)arg1 ;
-(void)setDeceleration:(double)arg1 ;
-(void)setTrackingRetargetImpulse:(double)arg1 ;
-(void)setTrackingDampingRatioSmoothing:(double)arg1 ;
-(void)setTrackingResponseSmoothing:(double)arg1 ;
-(void)setSmoothingAndProjectionEnabled:(BOOL)arg1 ;
-(double)_effectiveTrackingDampingRatio;
-(double)_effectiveTrackingResponse;
-(double)trackingDampingRatio;
-(double)dampingRatio;
-(double)_effectiveTrackingRetargetImpulse;
-(BOOL)smoothingAndProjectionEnabled;
-(double)trackingResponse;
-(double)retargetImpulse;
-(double)trackingRetargetImpulse;
-(void)setDefaultCriticallyDampedValues;
-(double)deceleration;
-(double)trackingDampingRatioSmoothing;
-(double)trackingResponseSmoothing;
-(double)inertialTargetSmoothingRatio;
-(void)setInertialTargetSmoothingRatio:(double)arg1 ;
-(double)inertialProjectionDeceleration;
-(void)setName:(NSString *)arg1 ;
-(void)setTrackingDampingRatio:(double)arg1 ;
-(void)setTrackingResponse:(double)arg1 ;
-(double)settlingDuration;
-(void)setDampingRatio:(double)arg1 ;
@end

