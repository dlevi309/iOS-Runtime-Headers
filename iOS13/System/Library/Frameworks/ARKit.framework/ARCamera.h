/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ADCameraCalibration;

@interface ARCamera : NSObject <NSSecureCoding, NSCopying> {

	float _exposureOffset;
	long long _trackingState;
	long long _trackingStateReason;
	double _exposureDuration;
	unsigned long long _lensType;
	long long _devicePosition;
	ADCameraCalibration* _calibrationData;
	CGSize _imageResolution;
	 _tangentialDistortion;
	 _radialDistortion;
	SCD_Struct_AR24 _intrinsics;
	SCD_Struct_AR1 _transform;

}

@property (assign,nonatomic) CGSize imageResolution;                             //@synthesize imageResolution=_imageResolution - In the implementation block
@property (assign,nonatomic) double exposureDuration;                            //@synthesize exposureDuration=_exposureDuration - In the implementation block
@property (assign,nonatomic) float exposureOffset;                               //@synthesize exposureOffset=_exposureOffset - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR24 intrinsics;                         //@synthesize intrinsics=_intrinsics - In the implementation block
@property (assign,nonatomic) unsigned long long lensType;                        //@synthesize lensType=_lensType - In the implementation block
@property (assign,nonatomic)  radialDistortion;                                  //@synthesize radialDistortion=_radialDistortion - In the implementation block
@property (assign,nonatomic)  tangentialDistortion;                              //@synthesize tangentialDistortion=_tangentialDistortion - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR1 transform;                           //@synthesize transform=_transform - In the implementation block
@property (assign,nonatomic) long long trackingState;                            //@synthesize trackingState=_trackingState - In the implementation block
@property (assign,nonatomic) long long trackingStateReason;                      //@synthesize trackingStateReason=_trackingStateReason - In the implementation block
@property (assign,nonatomic) long long devicePosition;                           //@synthesize devicePosition=_devicePosition - In the implementation block
@property (nonatomic,retain) ADCameraCalibration * calibrationData;              //@synthesize calibrationData=_calibrationData - In the implementation block
@property (nonatomic,readonly)  eulerAngles; 
@property (nonatomic,readonly) SCD_Struct_AR1 projectionMatrix; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_AR1)transform;
-(id)debugQuickLookObject;
-(CGPoint)focalLength;
-(void)setTransform:(SCD_Struct_AR1)arg1 ;
-(ADCameraCalibration *)calibrationData;
-(long long)trackingState;
-(void)setTrackingState:(long long)arg1 ;
-(unsigned long long)lensType;
-(double)exposureDuration;
-(long long)devicePosition;
-(void)setDevicePosition:(long long)arg1 ;
-(void)setExposureDuration:(double)arg1 ;
-()eulerAngles;
-(long long)trackingStateReason;
-(SCD_Struct_AR1)projectionMatrix;
-(void)setExposureOffset:(float)arg1 ;
-(float)exposureOffset;
-(id)_description:(BOOL)arg1 ;
-(CGSize)imageResolution;
-(void)setImageResolution:(CGSize)arg1 ;
-()radialDistortion;
-()tangentialDistortion;
-(CGPoint)principalPoint;
-(void)setLensType:(unsigned long long)arg1 ;
-(void)setRadialDistortion:;
-(void)setTangentialDistortion:;
-(void)setCalibrationData:(ADCameraCalibration *)arg1 ;
-(SCD_Struct_AR1)projectionMatrixForOrientation:(long long)arg1 viewportSize:(CGSize)arg2 zNear:(double)arg3 zFar:(double)arg4 ;
-(SCD_Struct_AR1)viewMatrixForOrientation:(long long)arg1 ;
-(id)initWithIntrinsics:(SCD_Struct_AR24)arg1 imageResolution:(CGSize)arg2 ;
-(SCD_Struct_AR1)displayCenterTransform;
-(CGPoint)projectPoint:(long long)arg1 orientation:(CGSize)arg2 ;
-(1)unprojectPoint:(CGPoint)arg1 ontoPlaneWithTransform:(SCD_Struct_AR1)arg2 orientation:(long long)arg3 viewportSize:(CGSize)arg4 ;
-(void)setTrackingStateReason:(long long)arg1 ;
-(SCD_Struct_AR24)intrinsics;
-(void)setIntrinsics:(SCD_Struct_AR24)arg1 ;
@end

