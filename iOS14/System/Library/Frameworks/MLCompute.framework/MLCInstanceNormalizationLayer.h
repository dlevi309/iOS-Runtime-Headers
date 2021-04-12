/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/MLCLayer.h>

@class MLCTensor, MLCTensorParameter;

@interface MLCInstanceNormalizationLayer : MLCLayer {

	float _varianceEpsilon;
	float _momentum;
	unsigned long long _featureChannelCount;
	MLCTensor* _beta;
	MLCTensor* _gamma;
	MLCTensorParameter* _betaParameter;
	MLCTensorParameter* _gammaParameter;

}

@property (nonatomic,readonly) unsigned long long featureChannelCount;                  //@synthesize featureChannelCount=_featureChannelCount - In the implementation block
@property (nonatomic,retain,readonly) MLCTensor * beta;                                 //@synthesize beta=_beta - In the implementation block
@property (nonatomic,retain,readonly) MLCTensor * gamma;                                //@synthesize gamma=_gamma - In the implementation block
@property (nonatomic,retain,readonly) MLCTensorParameter * betaParameter;               //@synthesize betaParameter=_betaParameter - In the implementation block
@property (nonatomic,retain,readonly) MLCTensorParameter * gammaParameter;              //@synthesize gammaParameter=_gammaParameter - In the implementation block
@property (nonatomic,readonly) float varianceEpsilon;                                   //@synthesize varianceEpsilon=_varianceEpsilon - In the implementation block
@property (nonatomic,readonly) float momentum;                                          //@synthesize momentum=_momentum - In the implementation block
+(id)layerWithFeatureChannelCount:(unsigned long long)arg1 beta:(id)arg2 gamma:(id)arg3 varianceEpsilon:(float)arg4 ;
+(id)layerWithFeatureChannelCount:(unsigned long long)arg1 beta:(id)arg2 gamma:(id)arg3 varianceEpsilon:(float)arg4 momentum:(float)arg5 ;
-(MLCTensor *)beta;
-(float)momentum;
-(id)description;
-(MLCTensor *)gamma;
-(float)varianceEpsilon;
-(unsigned long long)featureChannelCount;
-(MLCTensorParameter *)betaParameter;
-(MLCTensorParameter *)gammaParameter;
-(BOOL)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(BOOL)allocateDataForOptimizer:(id)arg1 ;
-(unsigned long long)allocatedDataSizeForTraining:(BOOL)arg1 optimizer:(id)arg2 ;
-(id)summarizedDOTDescription;
-(void)linkAssociatedTensors;
-(void)unlinkAssociatedTensors;
-(BOOL)isValidTrainingParameters;
-(id)initWithFeatureChannelCount:(unsigned long long)arg1 beta:(id)arg2 gamma:(id)arg3 varianceEpsilon:(float)arg4 momentum:(float)arg5 ;
@end

