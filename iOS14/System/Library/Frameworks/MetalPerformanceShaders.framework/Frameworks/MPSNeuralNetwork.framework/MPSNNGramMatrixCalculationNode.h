/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@protocol MPSNNGramMatrixCallback;
@interface MPSNNGramMatrixCalculationNode : MPSNNFilterNode {

	float _alpha;
	id<MPSNNGramMatrixCallback> _propertyCallBack;

}

@property (nonatomic,readonly) float alpha;                                             //@synthesize alpha=_alpha - In the implementation block
@property (nonatomic,retain) id<MPSNNGramMatrixCallback> propertyCallBack;              //@synthesize propertyCallBack=_propertyCallBack - In the implementation block
+(id)nodeWithSource:(id)arg1 alpha:(float)arg2 ;
+(id)nodeWithSource:(id)arg1 ;
-(id)initWithSource:(id)arg1 ;
-(id)initWithSource:(id)arg1 alpha:(float)arg2 ;
-(float)alpha;
-(FilterGraphNode*)newFilterNode;
-(Class)gradientClass;
-(id<MPSNNGramMatrixCallback>)propertyCallBack;
-(void)setPropertyCallBack:(id<MPSNNGramMatrixCallback>)arg1 ;
-(void)dealloc;
@end

