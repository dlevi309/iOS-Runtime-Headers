/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
*/

#import <Montreal/MLPOptimizer.h>

@class MPSVector;

@interface MLPOptimizerAdam : MLPOptimizer {

	MPSVector* _momentum;
	MPSVector* _velocity;

}

@property (retain) MPSVector * momentum;              //@synthesize momentum=_momentum - In the implementation block
@property (retain) MPSVector * velocity;              //@synthesize velocity=_velocity - In the implementation block
-(MPSVector *)momentum;
-(MPSVector *)velocity;
-(id)initWithNetwork:(id)arg1 momentum:(/*^block*/id)arg2 velocity:(/*^block*/id)arg3 ;
-(void)encodeToCommandBuffer:(id)arg1 inputGradientVector:(id)arg2 inputValuesVector:(id)arg3 ;
-(void)setMomentum:(MPSVector *)arg1 ;
-(void)setVelocity:(MPSVector *)arg1 ;
@end

