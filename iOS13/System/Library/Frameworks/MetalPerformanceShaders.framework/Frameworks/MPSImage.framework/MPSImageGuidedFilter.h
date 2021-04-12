/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSCore/MPSKernel.h>

@class MPSImageBox, MPSImageLanczosScale, MPSImageBilinearScale;

@interface MPSImageGuidedFilter : MPSKernel {

	unsigned long long _kernelDiameter;
	float _epsilon;
	float _reconstructScale;
	float _reconstructOffset;
	BOOL _rescaleCoefficients;
	BOOL _reconstructionCoefficientsSampleBicubic;
	MPSImageBox* _boxFilter;
	MPSImageLanczosScale* _lanczosScaler;
	MPSImageBilinearScale* _bilinearScaler;

}

@property (assign,nonatomic) BOOL rescaleCoefficients;                                  //@synthesize rescaleCoefficients=_rescaleCoefficients - In the implementation block
@property (assign,nonatomic) BOOL reconstructionCoefficientsSampleBicubic;              //@synthesize reconstructionCoefficientsSampleBicubic=_reconstructionCoefficientsSampleBicubic - In the implementation block
@property (nonatomic,readonly) unsigned long long kernelDiameter;                       //@synthesize kernelDiameter=_kernelDiameter - In the implementation block
@property (assign,nonatomic) float epsilon;                                             //@synthesize epsilon=_epsilon - In the implementation block
@property (assign,nonatomic) float reconstructScale;                                    //@synthesize reconstructScale=_reconstructScale - In the implementation block
@property (assign,nonatomic) float reconstructOffset;                                   //@synthesize reconstructOffset=_reconstructOffset - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(float)epsilon;
-(void)setEpsilon:(float)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 kernelDiameter:(unsigned long long)arg2 ;
-(void)setReconstructScale:(float)arg1 ;
-(void)setReconstructOffset:(float)arg1 ;
-(void)encodeRegressionToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 guidanceTexture:(id)arg3 weightsTexture:(id)arg4 destinationCoefficientsTexture:(id)arg5 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(unsigned long long)kernelDiameter;
-(void)initFilterInfoWithDevice:(id)arg1 ;
-(void)encodeReconstructionToCommandBuffer:(id)arg1 guidanceTexture:(id)arg2 coefficientsTexture:(id)arg3 destinationTexture:(id)arg4 ;
-(void)encodeRegressionToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 guidanceTexture:(id)arg3 weightsTexture:(id)arg4 destinationCoefficientsTextureA:(id)arg5 destinationCoefficientsTextureB:(id)arg6 ;
-(void)encodeReconstructionToCommandBuffer:(id)arg1 guidanceTexture:(id)arg2 coefficientsTextureA:(id)arg3 coefficientsTextureB:(id)arg4 destinationTexture:(id)arg5 ;
-(float)reconstructScale;
-(float)reconstructOffset;
-(BOOL)rescaleCoefficients;
-(void)setRescaleCoefficients:(BOOL)arg1 ;
-(BOOL)reconstructionCoefficientsSampleBicubic;
-(void)setReconstructionCoefficientsSampleBicubic:(BOOL)arg1 ;
@end

