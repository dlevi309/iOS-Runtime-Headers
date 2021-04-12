/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
*/

#import <Montreal/MLPOptimizer.h>

@class MPSVector;

@interface MLPOptimizerSGD : MLPOptimizer {

	MPSVector* _momentum;

}

@property (retain) MPSVector * momentum;              //@synthesize momentum=_momentum - In the implementation block
-(MPSVector *)momentum;
-(void)setMomentum:(MPSVector *)arg1 ;
-(void)encodeToCommandBuffer:(id)arg1 inputGradientVector:(id)arg2 inputValuesVector:(id)arg3 ;
-(void)updateLearningRate:(float)arg1 ;
-(id)initWithNetwork:(id)arg1 momentum:(/*^block*/id)arg2 ;
@end

