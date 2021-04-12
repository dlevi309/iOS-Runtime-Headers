/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSImage/MPSUnaryImageKernel.h>

@interface MPSImageThresholdToZero : MPSUnaryImageKernel {

	SCD_Struct_MP18 filterInfo;

}

@property (nonatomic,readonly) float thresholdValue; 
@property (nonatomic,readonly) const float* transform; 
+(const MPSLibraryInfo*)libraryInfo;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(const float*)transform;
-(id)initWithDevice:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(float)thresholdValue;
-(id)initWithDevice:(id)arg1 thresholdValue:(float)arg2 linearGrayColorTransform:(const float*)arg3 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
@end

