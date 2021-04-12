/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
*/


@class MPSNNOptimizer, MLPNetwork;

@interface MLPOptimizer : NSObject {

	MPSNNOptimizer* _mpsOptimizer;
	MLPNetwork* _network;

}

@property (readonly) MPSNNOptimizer * mpsOptimizer;              //@synthesize mpsOptimizer=_mpsOptimizer - In the implementation block
@property (__weak,readonly) MLPNetwork * network;                //@synthesize network=_network - In the implementation block
+(id)optimizerWithNetwork:(id)arg1 momentum:(/*^block*/id)arg2 velocity:(/*^block*/id)arg3 ;
-(MLPNetwork *)network;
-(id)initWithNetwork:(id)arg1 mpsOptimizer:(id)arg2 ;
-(MPSNNOptimizer *)mpsOptimizer;
-(void)encodeToCommandBuffer:(id)arg1 inputGradientVector:(id)arg2 inputValuesVector:(id)arg3 ;
-(void)updateLearningRate:(float)arg1 ;
-(void)encodeToCommandBuffer:(id)arg1 inputGradientMatrix:(id)arg2 inputValuesMatrix:(id)arg3 ;
@end

