/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSImage/MPSImagePyramid.h>

@interface MPSImageGaussianPyramid : MPSImagePyramid
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)setClipRect:(SCD_Struct_MP10)arg1 ;
-(void)setOffset:(SCD_Struct_MP13)arg1 ;
-(id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 weights:(const float*)arg4 ;
-(MPSRegion)sourceRegionForDestinationSize:(SCD_Struct_MP9)arg1 ;
@end

