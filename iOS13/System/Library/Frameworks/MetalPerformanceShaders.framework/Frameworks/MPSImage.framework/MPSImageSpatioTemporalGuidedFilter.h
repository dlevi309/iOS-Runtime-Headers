/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSCore/MPSKernel.h>

@protocol MTLTexture;
@class MPSImageBox3D, MPSImageBilinearScale, NSArray;

@interface MPSImageSpatioTemporalGuidedFilter : MPSKernel {

	unsigned long long _width;
	unsigned long long _height;
	unsigned long long _arrayLength;
	unsigned long long _kernelSpatialDiameter;
	unsigned long long _kernelTemporalDiameter;
	float _epsilon;
	unsigned long long _sourceChannels;
	unsigned long long _guideChannels;
	BOOL _preallocateIntermediates;
	MPSImageBox3D* _boxFilter;
	MPSImageBilinearScale* _bilinearScaler;
	id<MTLTexture> _guideStack;
	NSArray* _sourceStackArray;
	id<MTLTexture> _mean_guideStack;
	id<MTLTexture> _mean_sourceStack;
	NSArray* _var_I;
	id<MTLTexture> _constraints;
	NSArray* _coefficientsTextureArray;
	unsigned long long _preallocatedSize;

}

@property (nonatomic,readonly) unsigned long long preallocatedSize;              //@synthesize preallocatedSize=_preallocatedSize - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)allocateResourcesWithDevice:(id)arg1 ;
-(id)allocateIntermediateTextureWithDevice:(id)arg1 textureDescriptor:(id)arg2 ;
-(void)validateCoefficientsTextures:(id)arg1 ;
-(void)encodeShiftOn:(id)arg1 textureArray:(id)arg2 by:(unsigned long long)arg3 ;
-(void)encodeDownsamplingOn:(id)arg1 inputTexture:(id)arg2 outputTexture:(id)arg3 ;
-(void)encodeReconstructionToCommandBuffer:(id)arg1 guidanceTexture:(id)arg2 constraintsTexture:(id)arg3 coefficientsTextureArray:(id)arg4 destinationTexture:(id)arg5 ;
-(void)encodeReconstructionToCommandBuffer:(id)arg1 guidanceTexture:(id)arg2 coefficientsTextureArray:(id)arg3 destinationTextureArray:(id)arg4 ;
-(void)encodeRegressionToCommandBuffer:(id)arg1 sourceTextureArray:(id)arg2 guidanceTexture:(id)arg3 constraintsTextureArray:(id)arg4 numberOfIterations:(unsigned long long)arg5 destinationCoefficientsTextureArray:(id)arg6 ;
-(void)encodeReconstructionToCommandBuffer:(id)arg1 guidanceTexture:(id)arg2 constraintsTextureArray:(id)arg3 coefficientsTextureArray:(id)arg4 destinationTextureArray:(id)arg5 ;
-(id)initWithDevice:(id)arg1 filterDescriptor:(id)arg2 ;
-(void)compileKernels;
-(void)encodeToCommandBuffer:(id)arg1 sourceTextureArray:(id)arg2 guidanceTexture:(id)arg3 constraintsTextureArray:(id)arg4 numberOfIterations:(unsigned long long)arg5 destinationTextureArray:(id)arg6 ;
-(unsigned long long)preallocatedSize;
@end

