/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSImage/MPSUnaryImageKernel.h>

@interface MPSImageLaplacian : MPSUnaryImageKernel {

	float _bias;

}

@property (assign,nonatomic) float bias;              //@synthesize bias=_bias - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setBias:(float)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(float)bias;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
@end

