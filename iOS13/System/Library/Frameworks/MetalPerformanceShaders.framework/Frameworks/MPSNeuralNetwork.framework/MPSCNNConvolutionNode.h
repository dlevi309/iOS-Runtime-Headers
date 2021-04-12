/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id<MPSCNNConvolutionDataSource>)weights;
-(FilterGraphNode*)newFilterNode;
-(Class)gradientClass;
-(MPSCNNConvolutionGradientStateNode *)convolutionGradientState;
-(id)resultState;
-(unsigned long long)trainingStyle;
-(void)setTrainingStyle:(unsigned long long)arg1 ;
-(id)initWithSource:(id)arg1 weights:(id)arg2 ;
-(id)initWithSource:(id)arg1 weights:(id)arg2 state:(id)arg3 ;
-(MPSCNNConvolutionStateNode *)convolutionState;
-(unsigned long long)accumulatorPrecision;
-(void)setAccumulatorPrecision:(unsigned long long)arg1 ;
@end

