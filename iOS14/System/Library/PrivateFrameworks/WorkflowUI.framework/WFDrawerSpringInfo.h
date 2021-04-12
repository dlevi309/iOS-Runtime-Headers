/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@interface WFDrawerSpringInfo : NSObject {

	double _mass;
	double _stiffness;
	double _damping;
	double _initialVelocity;
	double _undershootTime;
	double _overshootTime;
	double _settlingTime;

}

@property (readonly) double mass;                         //@synthesize mass=_mass - In the implementation block
@property (readonly) double stiffness;                    //@synthesize stiffness=_stiffness - In the implementation block
@property (readonly) double damping;                      //@synthesize damping=_damping - In the implementation block
@property (readonly) double initialVelocity;              //@synthesize initialVelocity=_initialVelocity - In the implementation block
@property (readonly) double undershootTime;               //@synthesize undershootTime=_undershootTime - In the implementation block
@property (readonly) double overshootTime;                //@synthesize overshootTime=_overshootTime - In the implementation block
@property (readonly) double settlingTime;                 //@synthesize settlingTime=_settlingTime - In the implementation block
-(double)stiffness;
-(double)initialVelocity;
-(double)mass;
-(double)damping;
-(id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 initialVelocity:(double)arg4 ;
-(id)description;
-(double)valueAtTime:(double)arg1 ;
-(double)undershootTime;
-(double)overshootTime;
-(double)settlingTime;
@end

