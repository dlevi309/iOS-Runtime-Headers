/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNFilterNode.h>
#import <MPSNeuralNetwork/MPSNNTrainableNode.h>

@protocol MPSCNNGroupNormalizationDataSource;
@class NSString;

@interface MPSCNNGroupNormalizationNode : MPSNNFilterNode <MPSNNTrainableNode> {

	id<MPSCNNGroupNormalizationDataSource> _dataSource;
	unsigned long long _trainingStyle;

}

@property (assign,nonatomic) unsigned long long trainingStyle;              //@synthesize trainingStyle=_trainingStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)nodeWithSource:(id)arg1 dataSource:(id)arg2 ;
-(void)dealloc;
-(FilterGraphNode*)newFilterNode;
-(Class)gradientClass;
-(unsigned long long)trainingStyle;
-(void)setTrainingStyle:(unsigned long long)arg1 ;
-(id)initWithSource:(id)arg1 dataSource:(id)arg2 ;
@end

