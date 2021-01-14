/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNPoolingGradient.h>

@interface MPSCNNPoolingAverageGradient : MPSCNNPoolingGradient {

	unsigned long long _zeroPadSizeX;
	unsigned long long _zeroPadSizeY;

}

@property (assign,nonatomic) unsigned long long zeroPadSizeX;              //@synthesize zeroPadSizeX=_zeroPadSizeX - In the implementation block
@property (assign,nonatomic) unsigned long long zeroPadSizeY;              //@synthesize zeroPadSizeY=_zeroPadSizeY - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(unsigned long long)zeroPadSizeY;
-(id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 strideInPixelsX:(unsigned long long)arg4 strideInPixelsY:(unsigned long long)arg5 ;
-(void)setZeroPadSizeY:(unsigned long long)arg1 ;
-(void)setZeroPadSizeX:(unsigned long long)arg1 ;
-(unsigned long long)zeroPadSizeX;
@end

