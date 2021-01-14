/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVCameraCalibrationData, NSDictionary;

@interface ARCamera : NSObject <NSSecureCoding, NSCopying> {

	float _exposureOffset;
	long long _trackingState;
	long long _trackingStateReason;
	double _exposureDuration;
	unsigned long long _lensType;
	long long _devicePosition;
	AVCameraCalibrationData* _calibrationData;
	NSDictionary* _extrinsicsMap;
	CGSize _imageResolution;
	 _tangentialDistortion;
	 _radialDistortion;
	SCD_Struct_AR25 _intrinsics;
	SCD_Struct_AR1 _transform;

}

@property (assign,nonatomic) CGSize imageResolution;                                 //@synthesize imageResolution=_imageResolution - In the implementation block
@property (assign,nonatomic) double exposureDuration;                                //@synthesize exposureDuration=_exposureDuration - In the implementation block
@property (assign,nonatomic) float exposureOffset;                                   //@synthesize exposureOffset=_exposureOffset - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR25 intrinsics;                             //@synthesize intrinsics=_intrinsics - In the implementation block
@property (assign,nonatomic) unsigned long long lensType;                            //@synthesize lensType=_lensType - In the implementation block
@property (assign,nonatomic)  radialDistortion;                                      //@synthesize radialDistortion=_radialDistortion - In the implementation block
@property (assign,nonatomic)  tangentialDistortion;                                  //@synthesize tangentialDistortion=_tangentialDistortion - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR1 transform;                               //@synthesize transform=_transform - In the implementation block
@property (assign,nonatomic) long long trackingState;                                //@synthesize trackingState=_trackingState - In the implementation block
@property (assign,nonatomic) long long trackingStateReason;                          //@synthesize trackingStateReason=_trackingStateReason - In the implementation block
@property (assign,nonatomic) long long devicePosition;                               //@synthesize devicePosition=_devicePosition - In the implementation block
@property (nonatomic,retain) AVCameraCalibrationData * calibrationData;              //@synthesize calibrationData=_calibrationData - In the implementation block
@property (nonatomic,retain) NSDictionary * extrinsicsMap;                           //@synthesize extrinsicsMap=_extrinsicsMap - In the implementation block
@property (nonatomic,readonly)  eulerAngles; 
@property (nonatomic,readonly) SCD_Struct_AR1 projectionMatrix; 
+(BOOL)supportsSecureCoding;
-(id)debugQuickLookObject;
-(id)init;
-(long long)devicePosition;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setExposureDuration:(double)arg1 ;
-()eulerAngles;
-(AVCameraCalibrationData *)calibrationData;
-(long long)trackingStateReason;
-(void)setTransform:(SCD_Struct_AR1)arg1 ;
-(SCD_Struct_AR1)transform;
-(double)exposureDuration;
-(id)description;
-(unsigned long long)lensType;
-(long long)trackingState;
-(void)setTrackingState:(long long)arg1 ;
-(void)setDevicePosition:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGPoint)focalLength;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_description:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(CGSize)imageResolution;
-(void)setImageResolution:(CGSize)arg1 ;
-()radialDistortion;
-()tangentialDistortion;
-(CGPoint)principalPoint;
-(void)setLensType:(unsigned long long)arg1 ;
-(void)setRadialDistortion:;
-(void)setTangentialDistortion:;
-(NSDictionary *)extrinsicsMap;
-(SCD_Struct_AR1)extrinsicMatrixToDeviceType:(id)arg1 ;
-(void)setCalibrationData:(AVCameraCalibrationData *)arg1 ;
-(void)setExtrinsicsMap:(NSDictionary *)arg1 ;
-(SCD_Struct_AR1)projectionMatrixForOrientation:(long long)arg1 viewportSize:(CGSize)arg2 zNear:(double)arg3 zFar:(double)arg4 ;
-(SCD_Struct_AR1)viewMatrixForOrientation:(long long)arg1 ;
-(id)initWithIntrinsics:(SCD_Struct_AR25)arg1 imageResolution:(CGSize)arg2 ;
-(SCD_Struct_AR1)displayCenterTransform;
-(SCD_Struct_AR1)projectionMatrix;
-(CGPoint)projectPoint:(long long)arg1 orientation:(CGSize)arg2 ;
-(1)unprojectPoint:(CGPoint)arg1 ontoPlaneWithTransform:(SCD_Struct_AR1)arg2 orientation:(long long)arg3 viewportSize:(CGSize)arg4 ;
-(void)setTrackingStateReason:(long long)arg1 ;
-(SCD_Struct_AR25)intrinsics;
-(void)setIntrinsics:(SCD_Struct_AR25)arg1 ;
-(float)exposureOffset;
-(void)setExposureOffset:(float)arg1 ;
@end

