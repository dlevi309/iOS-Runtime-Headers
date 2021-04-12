/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSImage/MPSUnaryImageKernel.h>

@class MPSImageConvolution;

@interface MPSImageGaussianBlur : MPSUnaryImageKernel {

	float _sigma;
	MPSImageConvolution* smallConv;
	int _planSteps[8];
	unsigned long long _numSteps;
	const double* _plan;
	BOOL _cheesyBlur;
	float _scale;

}

@property (nonatomic,readonly) float sigma;              //@synthesize sigma=_sigma - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(float)sigma;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 sigma:(float)arg2 ;
-(void)dealloc;
-(MPSRegion)sourceRegionForDestinationSize:(SCD_Struct_MP9)arg1 ;
-(void)initFilterInfo;
-(void)toggleCheesyBlur;
@end

