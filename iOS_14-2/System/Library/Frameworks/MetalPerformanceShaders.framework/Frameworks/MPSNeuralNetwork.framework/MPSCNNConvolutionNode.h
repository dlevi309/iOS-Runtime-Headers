/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNFilterNode.h>
#import <MPSNeuralNetwork/MPSNNTrainableNode.h>

@protocol MPSCNNConvolutionDataSource;
@class MPSCNNConvolutionStateNode, MPSCNNConvolutionGradientStateNode, NSString;

@interface MPSCNNConvolutionNode : MPSNNFilterNode <MPSNNTrainableNode> {

	id<MPSCNNConvolutionDataSource> _weights;
	unsigned long long _accumulatorPrecision;
	unsigned long long _trainingStyle;

}

@property (nonatomic,readonly) MPSCNNConvolutionStateNode * convolutionState; 
@property (nonatomic,readonly) id<MPSCNNConvolutionDataSource> weights;                                    //@synthesize weights=_weights - In the implementation block
@property (assign,nonatomic) unsigned long long trainingStyle;                                             //@synthesize trainingStyle=_trainingStyle - In the implementation block
@property (assign,nonatomic) unsigned long long accumulatorPrecision;                                      //@synthesize accumulatorPrecision=_accumulatorPrecision - In the implementation block
@property (nonatomic,readonly) MPSCNNConvolutionGradientStateNode * convolutionGradientState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)nodeWithSource:(id)arg1 weights:(id)arg2 ;
-(id)initWithSource:(id)arg1 weights:(id)arg2 ;
-(id)initWithSource:(id)arg1 weights:(id)arg2 state:(id)arg3 ;
-(unsigned long long)accumulatorPrecision;
-(void)setAccumulatorPrecision:(unsigned long long)arg1 ;
-(FilterGraphNode*)newFilterNode;
-(Class)gradientClass;
-(id<MPSCNNConvolutionDataSource>)weights;
-(MPSCNNConvolutionGradientStateNode *)convolutionGradientState;
-(unsigned long long)trainingStyle;
-(void)setTrainingStyle:(unsigned long long)arg1 ;
-(id)resultState;
-(void)dealloc;
-(MPSCNNConvolutionStateNode *)convolutionState;
@end

