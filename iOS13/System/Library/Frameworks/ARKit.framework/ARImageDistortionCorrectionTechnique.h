/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARTechnique.h>

@interface ARImageDistortionCorrectionTechnique : ARTechnique {

	vector<float, std::__1::allocator<float> >* _mappingU;
	vector<float, std::__1::allocator<float> >* _mappingV;
	vImageMappingRef _mapping;
	CVPixelBufferPoolRef _undistortedImageBufferPool;
	CVPixelBufferPoolRef _rgbImagePool;
	CVPixelBufferPoolRef _rgbUndistortedImagePool;
	 _radialDistortion;
	CGSize _imageSize;
	SCD_Struct_AR24 _intrinsics;

}

@property (nonatomic,readonly) SCD_Struct_AR24 intrinsics;              //@synthesize intrinsics=_intrinsics - In the implementation block
@property (nonatomic,readonly)  radialDistortion;                       //@synthesize radialDistortion=_radialDistortion - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                          //@synthesize imageSize=_imageSize - In the implementation block
-(CGSize)imageSize;
-(void)setImageSize:(CGSize)arg1 ;
-(id)processData:(id)arg1 ;
-()radialDistortion;
-(id)initWithIntrinsics:(SCD_Struct_AR24)arg1 radialDistortion:(CGSize)arg2 ;
-(SCD_Struct_AR24)intrinsics;
-(void)undistortImage:(CVBufferRef)arg1 toTargetImage:(CVBufferRef)arg2 ;
@end

