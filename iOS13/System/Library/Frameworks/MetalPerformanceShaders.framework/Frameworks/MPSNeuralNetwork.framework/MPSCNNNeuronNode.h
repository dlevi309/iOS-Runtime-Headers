/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSCNNNeuronNode : MPSNNFilterNode {

	int _type;
	float _a;
	float _b;
	float _c;

}

@property (a,nonatomic,readonly) float a;              //@synthesize a=_a - In the implementation block
@property (b,nonatomic,readonly) float b;              //@synthesize b=_b - In the implementation block
@property (c,nonatomic,readonly) float c;              //@synthesize c=_c - In the implementation block
+(id)nodeWithSource:(id)arg1 descriptor:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)debugDescription;
-(float)c;
-(id)descriptor;
-(float)b;
-(float)a;
-(FilterGraphNode*)newFilterNode;
-(Class)gradientClass;
-(id)initWithSource:(id)arg1 type:(int)arg2 a:(float)arg3 b:(float)arg4 c:(float)arg5 ;
@end

