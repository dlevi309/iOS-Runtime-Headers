/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNKernel.h>

@interface MPSNNResizeBilinear : MPSCNNKernel {

	unsigned long long _resizeWidth;
	unsigned long long _resizeHeight;
	BOOL _alignCorners;

}

@property (nonatomic,readonly) unsigned long long resizeWidth;               //@synthesize resizeWidth=_resizeWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long resizeHeight;              //@synthesize resizeHeight=_resizeHeight - In the implementation block
@property (nonatomic,readonly) BOOL alignCorners;                            //@synthesize alignCorners=_alignCorners - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(BOOL)alignCorners;
-(unsigned long long)resizeWidth;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 sourceOffset:(SCD_Struct_MP11*)arg4 ;
-(unsigned long long)resizeHeight;
-(id)initWithDevice:(id)arg1 resizeWidth:(unsigned long long)arg2 resizeHeight:(unsigned long long)arg3 alignCorners:(BOOL)arg4 ;
@end

