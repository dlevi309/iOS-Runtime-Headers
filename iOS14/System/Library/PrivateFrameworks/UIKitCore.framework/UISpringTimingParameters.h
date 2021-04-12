/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)_convertDampingRatio:(double)arg1 response:(double)arg2 toMass:(double*)arg3 stiffness:(double*)arg4 damping:(double*)arg5 ;
+(void)_convertMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 toDampingRatio:(double*)arg4 response:(double*)arg5 ;
-(double)stiffness;
-(void)setStiffness:(double)arg1 ;
-(CGVector)initialVelocity;
-(double)mass;
-(id)init;
-(void)setDamping:(double)arg1 ;
-(double)damping;
-(id)effectiveTimingFunction;
-(id)initWithDampingRatio:(double)arg1 response:(double)arg2 initialVelocity:(CGVector)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 initialVelocity:(CGVector)arg4 ;
-(void)setMass:(double)arg1 ;
-(long long)timingCurveType;
-(id)description;
-(id)initWithDampingRatio:(double)arg1 initialVelocity:(CGVector)arg2 ;
-(id)initWithDampingRatio:(double)arg1 response:(double)arg2 ;
-(UICubicTimingParameters *)cubicTimingParameters;
-(double)dampingRatio;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)implicitDuration;
-(UISpringTimingParameters *)springTimingParameters;
-(id)initWithDampingRatio:(double)arg1 ;
-(id)_mediaTimingFunction;
-(void)setImplicitDuration:(BOOL)arg1 ;
-(id)initWithVelocity:(CGVector)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)settlingDuration;
-(BOOL)isEqual:(id)arg1 ;
@end

