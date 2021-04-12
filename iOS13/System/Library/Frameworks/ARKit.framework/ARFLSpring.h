/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


#import <ARKit/ARKit-Structs.h>
@interface ARFLSpring : NSObject {

	ARFLCompoundSpring _s;
	double _targetVelocity;
	double _previousTarget;
	BOOL _transitioningFromTracking;
	BOOL _tracking;
	double _minimumTarget;
	double _maximumTarget;
	double _rubberbandRange;
	double _rubberbandFactor;
	double _retargetResponseFraction;
	double _projectionDeceleration;
	ARFLSpringParameters _parameters;
	ARFLSpringParameters _trackingParameters;

}

@property (assign,nonatomic) double retargetResponseFraction;                      //@synthesize retargetResponseFraction=_retargetResponseFraction - In the implementation block
@property (assign,nonatomic) double projectionDeceleration;                        //@synthesize projectionDeceleration=_projectionDeceleration - In the implementation block
@property (assign,nonatomic) double value; 
@property (assign,nonatomic) double target; 
@property (assign,nonatomic) double velocity; 
@property (nonatomic,readonly) double projectedTarget; 
@property (assign,nonatomic) ARFLSpringParameters parameters;                      //@synthesize parameters=_parameters - In the implementation block
@property (assign,nonatomic) ARFLSpringParameters trackingParameters;              //@synthesize trackingParameters=_trackingParameters - In the implementation block
@property (assign,getter=isTracking,nonatomic) BOOL tracking;                      //@synthesize tracking=_tracking - In the implementation block
@property (assign,nonatomic) double minimumTarget;                                 //@synthesize minimumTarget=_minimumTarget - In the implementation block
@property (assign,nonatomic) double maximumTarget;                                 //@synthesize maximumTarget=_maximumTarget - In the implementation block
@property (assign,nonatomic) double rubberbandRange;                               //@synthesize rubberbandRange=_rubberbandRange - In the implementation block
@property (assign,nonatomic) double rubberbandFactor;                              //@synthesize rubberbandFactor=_rubberbandFactor - In the implementation block
+(id)springWithValue:(double)arg1 ;
-(id)init;
-(void)setTarget:(double)arg1 ;
-(double)target;
-(double)value;
-(void)setValue:(double)arg1 ;
-(ARFLSpringParameters)parameters;
-(void)setParameters:(ARFLSpringParameters)arg1 ;
-(double)velocity;
-(void)setVelocity:(double)arg1 ;
-(BOOL)isTracking;
-(void)setTracking:(BOOL)arg1 ;
-(id)initWithValue:(double)arg1 ;
-(void)step:(double)arg1 ;
-(void)resetImmediatelyToValue:(double)arg1 ;
-(double)_projectedTargetForVelocity:(double)arg1 ;
-(ARFLSpringParameters)_effectiveParameters;
-(void)_updateForEffectiveParameters;
-(double)projectedTarget;
-(void)setTrackingParameters:(ARFLSpringParameters)arg1 ;
-(BOOL)usesDampingRatioResponseForSmoothing;
-(void)setUsesDampingRatioResponseForSmoothing:(BOOL)arg1 ;
-(ARFLSpringParameters)trackingParameters;
-(double)minimumTarget;
-(void)setMinimumTarget:(double)arg1 ;
-(double)maximumTarget;
-(void)setMaximumTarget:(double)arg1 ;
-(double)rubberbandRange;
-(void)setRubberbandRange:(double)arg1 ;
-(double)rubberbandFactor;
-(void)setRubberbandFactor:(double)arg1 ;
-(double)retargetResponseFraction;
-(void)setRetargetResponseFraction:(double)arg1 ;
-(double)projectionDeceleration;
-(void)setProjectionDeceleration:(double)arg1 ;
@end

