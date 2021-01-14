/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNKernel.h>

@protocol MTLBuffer;
@interface MPSNNPad : MPSCNNKernel {

	id<MTLBuffer> _aBuf;
	unsigned long long _aBufFP32Len;
	float _fillValue;
	MPSImageCoordinate _paddingSizeBefore;
	MPSImageCoordinate _paddingSizeAfter;

}

@property (assign,nonatomic) MPSImageCoordinate paddingSizeBefore;              //@synthesize paddingSizeBefore=_paddingSizeBefore - In the implementation block
@property (assign,nonatomic) MPSImageCoordinate paddingSizeAfter;               //@synthesize paddingSizeAfter=_paddingSizeAfter - In the implementation block
@property (assign,nonatomic) float fillValue;                                   //@synthesize fillValue=_fillValue - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(BOOL)isResultStateReusedAcrossBatch;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(float)fillValue;
-(id)initWithDevice:(id)arg1 paddingSizeBefore:(MPSImageCoordinate)arg2 paddingSizeAfter:(MPSImageCoordinate)arg3 fillValueArray:(id)arg4 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 ;
-(id)initWithDevice:(id)arg1 paddingSizeBefore:(MPSImageCoordinate)arg2 paddingSizeAfter:(MPSImageCoordinate)arg3 ;
-(MPSImageCoordinate)paddingSizeBefore;
-(void)setPaddingSizeBefore:(MPSImageCoordinate)arg1 ;
-(MPSImageCoordinate)paddingSizeAfter;
-(void)setPaddingSizeAfter:(MPSImageCoordinate)arg1 ;
-(void)setFillValue:(float)arg1 ;
-(id)resultStateForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(void)dealloc;
@end

