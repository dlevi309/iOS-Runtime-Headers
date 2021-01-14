/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSCNNPoolingNode : MPSNNFilterNode {

	unsigned long long _kernelWidth;
	unsigned long long _kernelHeight;
	unsigned long long _strideInPixelsX;
	unsigned long long _strideInPixelsY;

}

@property (nonatomic,readonly) unsigned long long kernelWidth;                  //@synthesize kernelWidth=_kernelWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long kernelHeight;                 //@synthesize kernelHeight=_kernelHeight - In the implementation block
@property (nonatomic,readonly) unsigned long long strideInPixelsX;              //@synthesize strideInPixelsX=_strideInPixelsX - In the implementation block
@property (nonatomic,readonly) unsigned long long strideInPixelsY;              //@synthesize strideInPixelsY=_strideInPixelsY - In the implementation block
+(id)nodeWithSource:(id)arg1 filterSize:(unsigned long long)arg2 ;
+(id)nodeWithSource:(id)arg1 filterSize:(unsigned long long)arg2 stride:(unsigned long long)arg3 ;
-(unsigned long long)strideInPixelsX;
-(unsigned long long)strideInPixelsY;
-(FilterGraphNode*)newFilterNode;
-(unsigned long long)kernelWidth;
-(unsigned long long)kernelHeight;
-(id)initWithSource:(id)arg1 filterSize:(unsigned long long)arg2 ;
-(id)initWithSource:(id)arg1 filterSize:(unsigned long long)arg2 stride:(unsigned long long)arg3 ;
-(id)initWithSource:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 strideInPixelsX:(unsigned long long)arg4 strideInPixelsY:(unsigned long long)arg5 ;
@end

