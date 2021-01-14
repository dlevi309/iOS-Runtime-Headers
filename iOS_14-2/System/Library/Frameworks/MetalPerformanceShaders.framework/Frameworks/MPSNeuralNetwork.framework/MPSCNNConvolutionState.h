/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSCore/MPSState.h>
#import <MPSNeuralNetwork/MPSImageSizeEncodingState.h>

@class NSString;

@interface MPSCNNConvolutionState : MPSState <MPSImageSizeEncodingState> {

	unsigned long long _originalConvolutionSourceWidth;
	unsigned long long _originalConvolutionSourceHeight;
	unsigned long long _kernelWidth;
	unsigned long long _kernelHeight;
	SCD_Struct_MP11 _srcOffset;

}

@property (nonatomic,readonly) unsigned long long kernelWidth;               //@synthesize kernelWidth=_kernelWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long kernelHeight;              //@synthesize kernelHeight=_kernelHeight - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MP11 sourceOffset;                 //@synthesize srcOffset=_srcOffset - In the implementation block
@property (nonatomic,readonly) unsigned long long sourceWidth;               //@synthesize originalConvolutionSourceWidth=_originalConvolutionSourceWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long sourceHeight;              //@synthesize originalConvolutionSourceHeight=_originalConvolutionSourceHeight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSourceWidth:(unsigned long long)arg1 sourceHeight:(unsigned long long)arg2 kernelWidth:(unsigned long long)arg3 kernelHeight:(unsigned long long)arg4 sourceOffset:(SCD_Struct_MP11)arg5 ;
-(unsigned long long)sourceWidth;
-(unsigned long long)sourceHeight;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 forKernel:(id)arg3 suggestedDescriptor:(id)arg4 ;
-(SCD_Struct_MP11)sourceOffset;
-(unsigned long long)kernelWidth;
-(unsigned long long)kernelHeight;
@end

