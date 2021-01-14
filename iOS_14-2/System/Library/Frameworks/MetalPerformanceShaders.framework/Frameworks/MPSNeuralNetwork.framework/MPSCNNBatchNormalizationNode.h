/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNFilterNode.h>
#import <MPSNeuralNetwork/MPSNNTrainableNode.h>

@protocol MPSCNNBatchNormalizationDataSource;
@class NSString;

@interface MPSCNNBatchNormalizationNode : MPSNNFilterNode <MPSNNTrainableNode> {

	id<MPSCNNBatchNormalizationDataSource> _dataSource;
	unsigned long long _flags;
	unsigned long long _trainingStyle;

}

@property (assign,nonatomic) unsigned long long flags;                      //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) unsigned long long trainingStyle;              //@synthesize trainingStyle=_trainingStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)nodeWithSource:(id)arg1 dataSource:(id)arg2 ;
-(BOOL)calculateStatistics;
-(id)initWithSource:(id)arg1 dataSource:(id)arg2 ;
-(unsigned long long)flags;
-(FilterGraphNode*)newFilterNode;
-(Class)gradientClass;
-(void)setFlags:(unsigned long long)arg1 ;
-(id)sourceStates;
-(unsigned long long)trainingStyle;
-(void)setTrainingStyle:(unsigned long long)arg1 ;
-(id)resultStates;
-(void)dealloc;
@end

