/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(const MPSLibraryInfo*)libraryInfo;
-(void)dealloc;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 sigma:(float)arg2 ;
-(id)initWithDevice:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(float)sigma;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(MPSRegion)sourceRegionForDestinationSize:(SCD_Struct_MP9)arg1 ;
-(void)initFilterInfo;
-(void)toggleCheesyBlur;
@end

