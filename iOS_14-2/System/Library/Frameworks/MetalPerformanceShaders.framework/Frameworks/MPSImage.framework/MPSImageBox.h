/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSImage/MPSUnaryImageKernel.h>

@class MPSImageConvolution;

@interface MPSImageBox : MPSUnaryImageKernel {

	unsigned long long _kernelWidth;
	unsigned long long _kernelHeight;
	unsigned filterInfoH;
	unsigned filterInfoV;
	MPSImageConvolution* hPass;
	MPSImageConvolution* vPass;

}

@property (nonatomic,readonly) unsigned long long kernelHeight;              //@synthesize kernelHeight=_kernelHeight - In the implementation block
@property (nonatomic,readonly) unsigned long long kernelWidth;               //@synthesize kernelWidth=_kernelWidth - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(unsigned long long)kernelWidth;
-(unsigned long long)kernelHeight;
-(id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 ;
-(void)dealloc;
-(MPSRegion)sourceRegionForDestinationSize:(SCD_Struct_MP9)arg1 ;
-(void)initFilterInfo;
@end

