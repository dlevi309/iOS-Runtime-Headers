/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSImage/MPSUnaryImageKernel.h>

@interface MPSImageScale : MPSUnaryImageKernel {

	MPSScaleTransform _transformStorage;
	MPSScaleTransform* _scaleTransform;

}

@property (assign,nonatomic) const MPSScaleTransform* scaleTransform;              //@synthesize scaleTransform=_scaleTransform - In the implementation block
-(id)initWithDevice:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)setScaleTransform:(const MPSScaleTransform*)arg1 ;
-(const MPSScaleTransform*)scaleTransform;
@end

