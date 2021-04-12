/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSImage/MPSUnaryImageKernel.h>

@protocol MTLBuffer;
@class MPSImageLaplacian;

@interface MPSImageConvolution : MPSUnaryImageKernel {

	id<MTLBuffer> wtBuffer;
	id<MTLBuffer> wtBufferh;
	float* kOrigWeights;
	float* wtArray;
	unsigned short* wtArrayh;
	unsigned long long _fWidth;
	unsigned long long _fHeight;
	float _fBias;
	BOOL separable;
	unsigned long long specialFilterType;
	MPSImageLaplacian* _laplacian;

}

@property (nonatomic,readonly) unsigned long long kernelHeight;              //@synthesize fHeight=_fHeight - In the implementation block
@property (nonatomic,readonly) unsigned long long kernelWidth;               //@synthesize fWidth=_fWidth - In the implementation block
@property (assign,nonatomic) float bias;                                     //@synthesize fBias=_fBias - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(void)dealloc;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 weights:(const float*)arg4 ;
-(void)setBias:(float)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(float)bias;
-(unsigned long long)kernelWidth;
-(unsigned long long)kernelHeight;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(MPSRegion)sourceRegionForDestinationSize:(SCD_Struct_MP9)arg1 ;
-(void)initFilterWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 weights:(const float*)arg3 ;
-(id)initWithDevice_private:(id)arg1 ;
@end

