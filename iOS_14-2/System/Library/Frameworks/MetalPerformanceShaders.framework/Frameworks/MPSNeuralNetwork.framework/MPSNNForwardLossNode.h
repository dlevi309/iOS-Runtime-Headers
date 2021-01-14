/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@protocol MPSNNLossCallback;
@class MPSCNNLossDescriptor;

@interface MPSNNForwardLossNode : MPSNNFilterNode {

	unsigned _lossType;
	int _reductionType;
	float _weight;
	float _labelSmoothing;
	unsigned long long _numberOfClasses;
	float _epsilon;
	float _delta;
	MPSCNNLossDescriptor* _descriptor;
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
@property (nonatomic,retain) id<MPSNNLossCallback> propertyCallBack;              //@synthesize propertyCallBack=_propertyCallBack - In the implementation block
+(id)nodeWithSource:(id)arg1 labels:(id)arg2 lossDescriptor:(id)arg3 ;
+(id)nodeWithSource:(id)arg1 labels:(id)arg2 weights:(id)arg3 lossDescriptor:(id)arg4 ;
+(id)nodeWithSources:(id)arg1 lossDescriptor:(id)arg2 ;
-(unsigned)lossType;
-(float)delta;
-(float)weight;
-(FilterGraphNode*)newFilterNode;
-(id)gradientFilterWithSource:(id)arg1 ;
-(Class)gradientClass;
-(id)gradientFilterWithSources:(id)arg1 ;
-(id)gradientFiltersWithSources:(id)arg1 ;
-(id)initWithSource:(id)arg1 labels:(id)arg2 weights:(id)arg3 lossDescriptor:(id)arg4 ;
-(int)reductionType;
-(float)labelSmoothing;
-(BOOL)reduceAcrossBatch;
-(id)gradientFiltersWithSource:(id)arg1 ;
-(id)initWithSource:(id)arg1 labels:(id)arg2 lossDescriptor:(id)arg3 ;
-(id)initWithSources:(id)arg1 lossDescriptor:(id)arg2 ;
-(id<MPSNNLossCallback>)propertyCallBack;
-(void)setPropertyCallBack:(id<MPSNNLossCallback>)arg1 ;
-(float)epsilon;
-(unsigned long long)numberOfClasses;
-(void)dealloc;
@end

