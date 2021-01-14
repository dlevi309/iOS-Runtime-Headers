/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNGradientFilterNode.h>

@protocol MPSNNLossCallback;
@class MPSCNNLossDescriptor;

@interface MPSNNLossGradientNode : MPSNNGradientFilterNode {

	unsigned _lossType;
	int _reductionType;
	float _weight;
	float _labelSmoothing;
	unsigned long long _numberOfClasses;
	float _epsilon;
	float _delta;
	MPSCNNLossDescriptor* _descriptor;
	BOOL _isLabelsGradientFilter;
	id<MPSNNLossCallback> _propertyCallBack;
	BOOL _reduceAcrossBatch;

}

@property (nonatomic,readonly) unsigned lossType;                                 //@synthesize lossType=_lossType - In the implementation block
@property (nonatomic,readonly) int reductionType;                                 //@synthesize reductionType=_reductionType - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfClasses;                //@synthesize numberOfClasses=_numberOfClasses - In the implementation block
@property (nonatomic,readonly) BOOL reduceAcrossBatch;                            //@synthesize reduceAcrossBatch=_reduceAcrossBatch - In the implementation block
@property (nonatomic,readonly) float weight;                                      //@synthesize weight=_weight - In the implementation block
@property (nonatomic,readonly) float labelSmoothing;                              //@synthesize labelSmoothing=_labelSmoothing - In the implementation block
@property (nonatomic,readonly) float epsilon;                                     //@synthesize epsilon=_epsilon - In the implementation block
@property (nonatomic,readonly) float delta;                                       //@synthesize delta=_delta - In the implementation block
@property (nonatomic,readonly) BOOL isLabelsGradientFilter;                       //@synthesize isLabelsGradientFilter=_isLabelsGradientFilter - In the implementation block
@property (nonatomic,retain) id<MPSNNLossCallback> propertyCallBack;              //@synthesize propertyCallBack=_propertyCallBack - In the implementation block
+(id)nodeWithSourceGradient:(id)arg1 sourceImage:(id)arg2 labels:(id)arg3 weights:(id)arg4 gradientState:(id)arg5 lossDescriptor:(id)arg6 isLabelsGradientFilter:(BOOL)arg7 ;
+(id)nodeWithSourceGradient:(id)arg1 sourceImage:(id)arg2 labels:(id)arg3 gradientState:(id)arg4 lossDescriptor:(id)arg5 isLabelsGradientFilter:(BOOL)arg6 ;
+(id)nodeWithSources:(id)arg1 gradientState:(id)arg2 lossDescriptor:(id)arg3 isLabelsGradientFilter:(BOOL)arg4 ;
-(unsigned)lossType;
-(float)delta;
-(float)weight;
-(FilterGraphNode*)newFilterNode;
-(id)gradientFilterWithSources:(id)arg1 ;
-(int)reductionType;
-(float)labelSmoothing;
-(BOOL)reduceAcrossBatch;
-(id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 labels:(id)arg3 weights:(id)arg4 gradientState:(id)arg5 lossDescriptor:(id)arg6 isLabelsGradientFilter:(BOOL)arg7 ;
-(id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 labels:(id)arg3 gradientState:(id)arg4 lossDescriptor:(id)arg5 isLabelsGradientFilter:(BOOL)arg6 ;
-(id<MPSNNLossCallback>)propertyCallBack;
-(void)setPropertyCallBack:(id<MPSNNLossCallback>)arg1 ;
-(BOOL)isLabelsGradientFilter;
-(id)initWithSources:(id)arg1 gradientState:(id)arg2 lossDescriptor:(id)arg3 isLabelsGradientFilter:(BOOL)arg4 ;
-(float)epsilon;
-(unsigned long long)numberOfClasses;
-(void)dealloc;
@end

