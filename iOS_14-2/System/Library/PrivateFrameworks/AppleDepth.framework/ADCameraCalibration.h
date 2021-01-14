/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/

#import <AppleDepth/AppleDepth-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol ADLensDistortionModel;
@interface ADCameraCalibration : NSObject <NSCopying, NSMutableCopying> {

	SCD_Struct_AD22 _intrinsicMatrix;
	CGSize _referenceDimensions;
	SCD_Struct_AD1 _cameraToPlatformTransform;
	float _pixelSize;
	id<ADLensDistortionModel> _distortionModel;

}

@property (nonatomic,readonly) SCD_Struct_AD22 intrinsicMatrix;                        //@synthesize intrinsicMatrix=_intrinsicMatrix - In the implementation block
@property (nonatomic,readonly) CGSize referenceDimensions;                             //@synthesize referenceDimensions=_referenceDimensions - In the implementation block
@property (nonatomic,readonly) SCD_Struct_AD1 cameraToPlatformTransform;               //@synthesize cameraToPlatformTransform=_cameraToPlatformTransform - In the implementation block
@property (nonatomic,readonly) float pixelSize;                                        //@synthesize pixelSize=_pixelSize - In the implementation block
@property (nonatomic,readonly) id<ADLensDistortionModel> distortionModel;              //@synthesize distortionModel=_distortionModel - In the implementation block
+(id)ar_calibrationWithImageData:(id)arg1 adCalibrationData:(id)arg2 ;
+(id)ar_initWithCVACameraCalibrationData:(id)arg1 ;
+(void)transform:(unsigned long long)arg1 points:(const 2*)arg2 with:(SCD_Struct_AD1)arg3 outPoints:(9*)arg4 ;
-(id)ar_initWithImageData:(id)arg1 calibrationData:(id)arg2 ;
-(id)ar_initWithImageData:(id)arg1 cameraToPlatformTransform:(SCD_Struct_AD1)arg2 pixelSize:(double)arg3 referenceDimensions:(CGSize)arg4 distortionCenter:(CGPoint)arg5 lensDistortionLookupTable:(id)arg6 inverseLensDistortionLookupTable:(id)arg7 ;
-(id)dictionaryRepresentation;
-(id)initWithIntrinsics:(SCD_Struct_AD22)arg1 cameraToPlatformTransform:(SCD_Struct_AD1)arg2 pixelSize:(double)arg3 forReferenceDimensions:(CGSize)arg4 withDistortionModel:(id)arg5 ;
-(id)initWithFile:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(SCD_Struct_AD22)intrinsicMatrix;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)pixelSize;
-(BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 ;
-(void)project:(unsigned long long)arg1 points:(const 2*)arg2 outUndistortedPixels:(CGPoint*)arg3 outR:(float*)arg4 ;
-(void)backProject:(unsigned long long)arg1 undistortedPixels:(const CGPoint*)arg2 withR:(const float*)arg3 outPoints:(4*)arg4 ;
-(void)distort:(unsigned long long)arg1 undistortedPixels:(const CGPoint*)arg2 outDistorted:(CGPoint*)arg3 ;
-(void)undistort:(unsigned long long)arg1 distortedPixels:(const CGPoint*)arg2 outUndistorted:(CGPoint*)arg3 ;
-(void)backProject:(unsigned long long)arg1 undistortedPixels:(const CGPoint*)arg2 withZ:(const float*)arg3 outPoints:(4*)arg4 ;
-(void)transform:(unsigned long long)arg1 points:(const 2*)arg2 toCamera:(id)arg3 outPoints:(4*)arg4 ;
-(id<ADLensDistortionModel>)distortionModel;
-(CGSize)referenceDimensions;
-(SCD_Struct_AD1)cameraToPlatformTransform;
-(SCD_Struct_AD1)getTransformationTo:(id)arg1 ;
-(void)project:(unsigned long long)arg1 points:(const 2*)arg2 outUndistortedPixels:(CGPoint*)arg3 ;
-(id)createDictionaryRepresentationWithHumanReadable:(BOOL)arg1 ;
@end

