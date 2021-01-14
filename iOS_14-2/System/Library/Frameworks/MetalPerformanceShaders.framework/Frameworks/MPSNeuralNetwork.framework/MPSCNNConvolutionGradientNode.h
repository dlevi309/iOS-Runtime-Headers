/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNGradientFilterNode.h>
#import <MPSNeuralNetwork/MPSNNTrainableNode.h>

@protocol MPSCNNConvolutionDataSource;
@class NSString;

@interface MPSCNNConvolutionGradientNode : MPSNNGradientFilterNode <MPSNNTrainableNode> {

	id<MPSCNNConvolutionDataSource> _weights;
	unsigned long long _trainingStyle;

}

@property (nonatomic,readonly) id<MPSCNNConvolutionDataSource> weights;              //@synthesize weights=_weights - In the implementation block
@property (assign,nonatomic) unsigned long long trainingStyle;                       //@synthesize trainingStyle=_trainingStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)nodeWithSourceGradient:(id)arg1 sourceImage:(id)arg2 convolutionGradientState:(id)arg3 weights:(id)arg4 ;
-(id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 convolutionGradientState:(id)arg3 weights:(id)arg4 ;
-(id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 weights:(id)arg4 ;
-(NSString *)debugDescription;
-(FilterGraphNode*)newFilterNode;
-(id)initWithGradientImages:(id)arg1 forwardFilter:(id)arg2 ;
-(id<MPSCNNConvolutionDataSource>)weights;
-(unsigned long long)trainingStyle;
-(void)setTrainingStyle:(unsigned long long)arg1 ;
-(void)dealloc;
@end

