/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <UIKit/UITimingCurveProvider.h>

@class UICubicTimingParameters;

@interface UISpringTimingParameters : NSObject <NSSecureCoding, UITimingCurveProvider> {

	BOOL _implicitDuration;
	double _dampingRatio;
	double _mass;
	double _stiffness;
	double _damping;
	CGVector _initialVelocity;

}

@property (nonatomic,readonly) double dampingRatio;                                            //@synthesize dampingRatio=_dampingRatio - In the implementation block
@property (assign,nonatomic) BOOL implicitDuration;                                            //@synthesize implicitDuration=_implicitDuration - In the implementation block
@property (assign,nonatomic) double mass;                                                      //@synthesize mass=_mass - In the implementation block
@property (assign,nonatomic) double stiffness;                                                 //@synthesize stiffness=_stiffness - In the implementation block
@property (assign,nonatomic) double damping;                                                   //@synthesize damping=_damping - In the implementation block
@property (nonatomic,readonly) double settlingDuration; 
@property (nonatomic,readonly) CGVector initialVelocity;                                       //@synthesize initialVelocity=_initialVelocity - In the implementation block
@property (nonatomic,readonly) long long timingCurveType; 
@property (nonatomic,readonly) UICubicTimingParameters * cubicTimingParameters; 
@property (nonatomic,readonly) UISpringTimingParameters * springTimingParameters; 
+(BOOL)supportsSecureCoding;
+(void)_convertMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 toDampingRatio:(double*)arg4 response:(double*)arg5 ;
+(void)_convertDampingRatio:(double)arg1 response:(double)arg2 toMass:(double*)arg3 stiffness:(double*)arg4 damping:(double*)arg5 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)mass;
-(void)setMass:(double)arg1 ;
-(double)stiffness;
-(void)setStiffness:(double)arg1 ;
-(double)damping;
-(void)setDamping:(double)arg1 ;
-(CGVector)initialVelocity;
-(double)settlingDuration;
-(id)_mediaTimingFunction;
-(id)effectiveTimingFunction;
-(void)setImplicitDuration:(BOOL)arg1 ;
-(long long)timingCurveType;
-(UICubicTimingParameters *)cubicTimingParameters;
-(UISpringTimingParameters *)springTimingParameters;
-(BOOL)implicitDuration;
-(double)dampingRatio;
-(id)initWithDampingRatio:(double)arg1 initialVelocity:(CGVector)arg2 ;
-(id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 initialVelocity:(CGVector)arg4 ;
-(id)initWithDampingRatio:(double)arg1 response:(double)arg2 initialVelocity:(CGVector)arg3 ;
-(id)initWithDampingRatio:(double)arg1 ;
-(id)initWithDampingRatio:(double)arg1 response:(double)arg2 ;
@end

