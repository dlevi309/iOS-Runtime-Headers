/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSImage/MPSUnaryImageKernel.h>

@interface MPSImageMedian : MPSUnaryImageKernel {

	unsigned long long _filterDiameter;

}

@property (nonatomic,readonly) unsigned long long kernelDiameter;              //@synthesize filterDiameter=_filterDiameter - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
+(unsigned long long)minKernelDiameter;
+(unsigned long long)maxKernelDiameter;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 kernelDiameter:(unsigned long long)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(MPSRegion)sourceRegionForDestinationSize:(SCD_Struct_MP9)arg1 ;
-(void)initEncoder;
-(unsigned long long)kernelDiameter;
@end

