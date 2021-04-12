/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSImage/MPSUnaryImageKernel.h>

@interface MPSImageScale : MPSUnaryImageKernel {

	MPSScaleTransform _transformStorage;
	MPSScaleTransform* _scaleTransform;

}

@property (assign,nonatomic) const MPSScaleTransform* scaleTransform;              //@synthesize scaleTransform=_scaleTransform - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(const MPSScaleTransform*)scaleTransform;
-(void)setScaleTransform:(const MPSScaleTransform*)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
@end

