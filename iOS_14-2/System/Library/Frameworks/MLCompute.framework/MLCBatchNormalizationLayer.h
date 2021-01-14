/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/MLCLayer.h>

@class MLCTensor, MLCTensorParameter;

@interface MLCBatchNormalizationLayer : MLCLayer {

	float _varianceEpsilon;
	float _momentum;
	unsigned long long _featureChannelCount;
	MLCTensor* _mean;
	MLCTensor* _variance;
	MLCTensor* _beta;
	MLCTensor* _gamma;
	MLCTensorParameter* _betaParameter;
	MLCTensorParameter* _gammaParameter;

}

@property (nonatomic,readonly) unsigned long long featureChannelCount;                  //@synthesize featureChannelCount=_featureChannelCount - In the implementation block
@property (nonatomic,retain,readonly) MLCTensor * mean;                                 //@synthesize mean=_mean - In the implementation block
@property (nonatomic,retain,readonly) MLCTensor * variance;                             //@synthesize variance=_variance - In the implementation block
@property (nonatomic,retain,readonly) MLCTensor * beta;                                 //@synthesize beta=_beta - In the implementation block
@property (nonatomic,retain,readonly) MLCTensor * gamma;                                //@synthesize gamma=_gamma - In the implementation block
@property (nonatomic,retain,readonly) MLCTensorParameter * betaParameter;               //@synthesize betaParameter=_betaParameter - In the implementation block
@property (nonatomic,retain,readonly) MLCTensorParameter * gammaParameter;              //@synthesize gammaParameter=_gammaParameter - In the implementation block
@property (nonatomic,readonly) float varianceEpsilon;                                   //@synthesize varianceEpsilon=_varianceEpsilon - In the implementation block
@property (nonatomic,readonly) float momentum;                                          //@synthesize momentum=_momentum - In the implementation block
+(id)layerWithFeatureChannelCount:(unsigned long long)arg1 mean:(id)arg2 variance:(id)arg3 beta:(id)arg4 gamma:(id)arg5 varianceEpsilon:(float)arg6 momentum:(float)arg7 ;
+(id)layerWithFeatureChannelCount:(unsigned long long)arg1 mean:(id)arg2 variance:(id)arg3 beta:(id)arg4 gamma:(id)arg5 varianceEpsilon:(float)arg6 ;
-(MLCTensor *)mean;
-(MLCTensor *)beta;
-(float)momentum;
-(MLCTensor *)variance;
-(id)description;
-(MLCTensor *)gamma;
-(float)varianceEpsilon;
-(id)initWithFeatureChannelCount:(unsigned long long)arg1 mean:(id)arg2 variance:(id)arg3 beta:(id)arg4 gamma:(id)arg5 varianceEpsilon:(float)arg6 momentum:(float)arg7 ;
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
-(BOOL)isSupportedShapeForTensorSources:(id)arg1 ;
@end
