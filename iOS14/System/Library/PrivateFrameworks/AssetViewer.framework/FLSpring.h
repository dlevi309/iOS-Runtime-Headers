/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
*/


#import <AssetViewer/AssetViewer-Structs.h>
@interface FLSpring : NSObject {

	FLCompoundSpring _s;
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
	FLSpringParameters _parameters;
	FLSpringParameters _trackingParameters;

}

@property (assign,nonatomic) double retargetResponseFraction;                    //@synthesize retargetResponseFraction=_retargetResponseFraction - In the implementation block
@property (assign,nonatomic) double projectionDeceleration;                      //@synthesize projectionDeceleration=_projectionDeceleration - In the implementation block
@property (assign,nonatomic) double value; 
@property (assign,nonatomic) double target; 
@property (assign,nonatomic) double velocity; 
@property (nonatomic,readonly) double projectedTarget; 
@property (assign,nonatomic) FLSpringParameters parameters;                      //@synthesize parameters=_parameters - In the implementation block
@property (assign,nonatomic) FLSpringParameters trackingParameters;              //@synthesize trackingParameters=_trackingParameters - In the implementation block
@property (assign,getter=isTracking,nonatomic) BOOL tracking;                    //@synthesize tracking=_tracking - In the implementation block
@property (assign,nonatomic) double minimumTarget;                               //@synthesize minimumTarget=_minimumTarget - In the implementation block
@property (assign,nonatomic) double maximumTarget;                               //@synthesize maximumTarget=_maximumTarget - In the implementation block
@property (assign,nonatomic) double rubberbandRange;                             //@synthesize rubberbandRange=_rubberbandRange - In the implementation block
@property (assign,nonatomic) double rubberbandFactor;                            //@synthesize rubberbandFactor=_rubberbandFactor - In the implementation block
+(id)springWithValue:(double)arg1 ;
-(void)setVelocity:(double)arg1 ;
-(FLSpringParameters)parameters;
-(void)setParameters:(FLSpringParameters)arg1 ;
-(void)setTracking:(BOOL)arg1 ;
-(void)setTarget:(double)arg1 ;
-(double)velocity;
-(id)init;
-(BOOL)isTracking;
-(id)initWithValue:(double)arg1 ;
-(void)setValue:(double)arg1 ;
-(void)step:(double)arg1 ;
-(double)target;
-(double)value;
-(void)resetImmediatelyToValue:(double)arg1 ;
-(double)_projectedTargetForVelocity:(double)arg1 ;
-(FLSpringParameters)_effectiveParameters;
-(void)_updateForEffectiveParameters;
-(double)projectedTarget;
-(void)setTrackingParameters:(FLSpringParameters)arg1 ;
-(BOOL)usesDampingRatioResponseForSmoothing;
-(void)setUsesDampingRatioResponseForSmoothing:(BOOL)arg1 ;
-(FLSpringParameters)trackingParameters;
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

