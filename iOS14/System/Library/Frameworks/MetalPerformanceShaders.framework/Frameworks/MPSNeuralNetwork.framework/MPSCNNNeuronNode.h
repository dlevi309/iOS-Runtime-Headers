/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(float)b;
-(float)c;
-(id)debugDescription;
-(id)descriptor;
-(FilterGraphNode*)newFilterNode;
-(Class)gradientClass;
-(id)initWithSource:(id)arg1 type:(int)arg2 a:(float)arg3 b:(float)arg4 c:(float)arg5 ;
-(float)a;
-(BOOL)isEqual:(id)arg1 ;
@end

