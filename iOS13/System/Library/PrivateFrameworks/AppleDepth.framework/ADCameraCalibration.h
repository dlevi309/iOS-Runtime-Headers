/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/


@protocol ADLensDistortionModel;
#import <AppleDepth/AppleDepth-Structs.h>
@interface ADCameraCalibration : NSObject {

	float _pixelSize;
	id<ADLensDistortionModel> _distortionModel;
	CGSize _referenceDimensions;
	SCD_Struct_AD12 _intrinsicMatrix;
	SCD_Struct_AD5 _cameraToPlatformTransform;

}

@property (nonatomic,readonly) SCD_Struct_AD12 intrinsicMatrix;                        //@synthesize intrinsicMatrix=_intrinsicMatrix - In the implementation block
@property (nonatomic,readonly) CGSize referenceDimensions;                             //@synthesize referenceDimensions=_referenceDimensions - In the implementation block
@property (nonatomic,readonly) SCD_Struct_AD5 cameraToPlatformTransform;               //@synthesize cameraToPlatformTransform=_cameraToPlatformTransform - In the implementation block
@property (nonatomic,readonly) float pixelSize;                                        //@synthesize pixelSize=_pixelSize - In the implementation block
@property (nonatomic,readonly) id<ADLensDistortionModel> distortionModel;              //@synthesize distortionModel=_distortionModel - In the implementation block
+(void)transform:(unsigned long long)arg1 points:(const 2*)arg2 with:(SCD_Struct_AD5)arg3 outPoints:(9*)arg4 ;
-(id)ar_initWithImageData:(id)arg1 calibrationData:(id)arg2 ;
-(id)ar_initWithImageData:(id)arg1 cameraToPlatformTransform:(SCD_Struct_AD5)arg2 pixelSize:(double)arg3 referenceDimensions:(CGSize)arg4 distortionCenter:(CGPoint)arg5 lensDistortionLookupTable:(id)arg6 inverseLensDistortionLookupTable:(id)arg7 ;
-(id)ar_initWithImageData:(id)arg1 calibrationData:(id)arg2 cameraToPlatformTransform:(SCD_Struct_AD5)arg3 ;
-(SCD_Struct_AD12)intrinsicMatrix;
-(float)pixelSize;
-(SCD_Struct_AD5)cameraToPlatformTransform;
-(CGSize)referenceDimensions;
-(id)initWithIntrinsics:(SCD_Struct_AD12)arg1 cameraToPlatformTransform:(SCD_Struct_AD5)arg2 pixelSize:(double)arg3 forReferenceDimensions:(CGSize)arg4 withDistortionModel:(id)arg5 ;
-(SCD_Struct_AD5)getTransformationTo:(id)arg1 ;
-(void)project:(unsigned long long)arg1 points:(const 2*)arg2 outUndistortedPixels:(CGPoint*)arg3 outR:(float*)arg4 ;
-(void)distort:(unsigned long long)arg1 undistortedPixels:(const CGPoint*)arg2 outDistorted:(CGPoint*)arg3 ;
-(void)transform:(unsigned long long)arg1 points:(const 2*)arg2 toCamera:(id)arg3 outPoints:(4*)arg4 ;
-(void)project:(unsigned long long)arg1 points:(const 2*)arg2 outUndistortedPixels:(CGPoint*)arg3 ;
-(void)backProject:(unsigned long long)arg1 undistortedPixels:(const CGPoint*)arg2 withZ:(const float*)arg3 outPoints:(4*)arg4 ;
-(void)backProject:(unsigned long long)arg1 undistortedPixels:(const CGPoint*)arg2 withR:(const float*)arg3 outPoints:(4*)arg4 ;
-(void)undistort:(unsigned long long)arg1 distortedPixels:(const CGPoint*)arg2 outUndistorted:(CGPoint*)arg3 ;
-(id<ADLensDistortionModel>)distortionModel;
@end

