/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARDictionaryCoding.h>
#import <ARKitCore/ARSensorData.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <ARKitCore/ARDaemonSecureCoding.h>

@class NSDate, ARFaceData, AVDepthData, ARPointCloud, NSString, AVCameraCalibrationData, ADCameraCalibration, NSMutableDictionary;

@interface ARImageData : NSObject <ARDictionaryCoding, ARSensorData, NSCopying, ARDaemonSecureCoding> {

	BOOL _mirrored;
	BOOL _secondary;
	float _exposureTargetOffset;
	float _temperature;
	float _signalToNoiseRatio;
	float _ISO;
	double _timestamp;
	NSDate* _captureDate;
	double _currentCaptureTimestamp;
	CVBufferRef _pixelBuffer;
	unsigned long long _lensType;
	double _exposureDuration;
	long long _deviceOrientation;
	ARFaceData* _faceData;
	AVDepthData* _depthData;
	ARPointCloud* _pointCloud;
	double _depthDataTimestamp;
	CVBufferRef _visionData;
	long long _cameraPosition;
	NSString* _cameraType;
	AVCameraCalibrationData* _calibrationData;
	ADCameraCalibration* _adCameraCalibration;
	long long _captureFramesPerSecond;
	ARImageData* _latestUltraWideImage;
	double _timestampOfSynchronizedWideImageData;
	NSMutableDictionary* _extrinsicsMap;
	CGSize _imageResolution;
	 _tangentialDistortion;
	 _radialDistortion;
	SCD_Struct_AR25 _cameraIntrinsics;
	SCD_Struct_AR1 _visionTransform;

}

@property (nonatomic,retain) NSMutableDictionary * extrinsicsMap;                      //@synthesize extrinsicsMap=_extrinsicsMap - In the implementation block
@property (assign,nonatomic) double timestamp;                                         //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSDate * captureDate;                                       //@synthesize captureDate=_captureDate - In the implementation block
@property (assign,nonatomic) double currentCaptureTimestamp;                           //@synthesize currentCaptureTimestamp=_currentCaptureTimestamp - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR25 cameraIntrinsics;                         //@synthesize cameraIntrinsics=_cameraIntrinsics - In the implementation block
@property (assign,nonatomic) CVBufferRef pixelBuffer;                                  //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (assign,getter=isMirrored,nonatomic) BOOL mirrored;                          //@synthesize mirrored=_mirrored - In the implementation block
@property (assign,nonatomic) CGSize imageResolution;                                   //@synthesize imageResolution=_imageResolution - In the implementation block
@property (assign,nonatomic) unsigned long long lensType;                              //@synthesize lensType=_lensType - In the implementation block
@property (assign,nonatomic)  radialDistortion;                                        //@synthesize radialDistortion=_radialDistortion - In the implementation block
@property (assign,nonatomic)  tangentialDistortion;                                    //@synthesize tangentialDistortion=_tangentialDistortion - In the implementation block
@property (assign,nonatomic) double exposureDuration;                                  //@synthesize exposureDuration=_exposureDuration - In the implementation block
@property (assign,nonatomic) float exposureTargetOffset;                               //@synthesize exposureTargetOffset=_exposureTargetOffset - In the implementation block
@property (assign,nonatomic) float temperature;                                        //@synthesize temperature=_temperature - In the implementation block
@property (assign,nonatomic) float signalToNoiseRatio;                                 //@synthesize signalToNoiseRatio=_signalToNoiseRatio - In the implementation block
@property (assign,nonatomic) float ISO;                                                //@synthesize ISO=_ISO - In the implementation block
@property (assign,nonatomic) long long deviceOrientation;                              //@synthesize deviceOrientation=_deviceOrientation - In the implementation block
@property (nonatomic,retain) ARFaceData * faceData;                                    //@synthesize faceData=_faceData - In the implementation block
@property (nonatomic,retain) AVDepthData * depthData;                                  //@synthesize depthData=_depthData - In the implementation block
@property (nonatomic,retain) ARPointCloud * pointCloud;                                //@synthesize pointCloud=_pointCloud - In the implementation block
@property (assign,nonatomic) double depthDataTimestamp;                                //@synthesize depthDataTimestamp=_depthDataTimestamp - In the implementation block
@property (assign,nonatomic) CVBufferRef visionData;                                   //@synthesize visionData=_visionData - In the implementation block
@property (assign,nonatomic) long long cameraPosition;                                 //@synthesize cameraPosition=_cameraPosition - In the implementation block
@property (nonatomic,retain) NSString * cameraType;                                    //@synthesize cameraType=_cameraType - In the implementation block
@property (nonatomic,retain) AVCameraCalibrationData * calibrationData;                //@synthesize calibrationData=_calibrationData - In the implementation block
@property (nonatomic,retain) ADCameraCalibration * adCameraCalibration;                //@synthesize adCameraCalibration=_adCameraCalibration - In the implementation block
@property (assign,nonatomic) long long captureFramesPerSecond;                         //@synthesize captureFramesPerSecond=_captureFramesPerSecond - In the implementation block
@property (nonatomic,readonly) ARImageData * originalImage; 
@property (assign,getter=isSecondary,nonatomic) BOOL secondary;                        //@synthesize secondary=_secondary - In the implementation block
@property (nonatomic,retain) ARImageData * latestUltraWideImage;                       //@synthesize latestUltraWideImage=_latestUltraWideImage - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR1 visionTransform;                           //@synthesize visionTransform=_visionTransform - In the implementation block
@property (assign,nonatomic) double timestampOfSynchronizedWideImageData;              //@synthesize timestampOfSynchronizedWideImageData=_timestampOfSynchronizedWideImageData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)captureDateFromPresentationTimestamp:(SCD_Struct_AR19)arg1 session:(id)arg2 ;
-(id)debugQuickLookObject;
-(float)temperature;
-(long long)cameraPosition;
-(AVDepthData *)depthData;
-(id)init;
-(BOOL)isMirrored;
-(ARImageData *)originalImage;
-(double)timestamp;
-(void)setMirrored:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setExposureDuration:(double)arg1 ;
-(AVCameraCalibrationData *)calibrationData;
-(void)setDeviceOrientation:(long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDate *)captureDate;
-(double)exposureDuration;
-(NSString *)cameraType;
-(NSString *)description;
-(float)exposureTargetOffset;
-(id)initWithImageData:(id)arg1 ;
-(unsigned long long)lensType;
-(void)setPixelBuffer:(CVBufferRef)arg1 ;
-(SCD_Struct_AR25)cameraIntrinsics;
-(void)setCameraIntrinsics:(SCD_Struct_AR25)arg1 ;
-(void)setTemperature:(float)arg1 ;
-(CVBufferRef)pixelBuffer;
-(unsigned long long)hash;
-(void)setCameraType:(NSString *)arg1 ;
-(long long)deviceOrientation;
-(id)initWithCoder:(id)arg1 ;
-(float)ISO;
-(void)setISO:(float)arg1 ;
-(void)setSecondary:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setCaptureDate:(NSDate *)arg1 ;
-(ARPointCloud *)pointCloud;
-(void)setPointCloud:(ARPointCloud *)arg1 ;
-(BOOL)isSecondary;
-(id)initWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 captureFramePerSecond:(long long)arg2 captureDevice:(id)arg3 captureSession:(id)arg4 ;
-(void)setDepthData:(AVDepthData *)arg1 ;
-(void)setFaceData:(ARFaceData *)arg1 ;
-(ARFaceData *)faceData;
-(CGSize)imageResolution;
-(void)setImageResolution:(CGSize)arg1 ;
-(SCD_Struct_AR1)visionTransform;
-(void)setVisionTransform:(SCD_Struct_AR1)arg1 ;
-(long long)captureFramesPerSecond;
-(CVBufferRef)visionData;
-(void)setVisionData:(CVBufferRef)arg1 ;
-(double)currentCaptureTimestamp;
-()radialDistortion;
-()tangentialDistortion;
-(float)signalToNoiseRatio;
-(double)depthDataTimestamp;
-(ARImageData *)latestUltraWideImage;
-(double)timestampOfSynchronizedWideImageData;
-(ADCameraCalibration *)adCameraCalibration;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 captureFramePerSecond:(long long)arg2 captureDevice:(id)arg3 captureSession:(id)arg4 timestamp:(SCD_Struct_AR19)arg5 intrinsics:(SCD_Struct_AR25)arg6 exif:(id)arg7 ;
-(BOOL)matchesPixelBufferPointerRecursively:(void*)arg1 ;
-(void)setCurrentCaptureTimestamp:(double)arg1 ;
-(void)setExposureTargetOffset:(float)arg1 ;
-(void)setSignalToNoiseRatio:(float)arg1 ;
-(void)setCameraPosition:(long long)arg1 ;
-(void)setLensType:(unsigned long long)arg1 ;
-(void)setRadialDistortion:;
-(void)setTangentialDistortion:;
-(void)setCaptureFramesPerSecond:(long long)arg1 ;
-(void)setDepthDataTimestamp:(double)arg1 ;
-(void)setLatestUltraWideImage:(ARImageData *)arg1 ;
-(void)setTimestampOfSynchronizedWideImageData:(double)arg1 ;
-(id)encodeToDictionary;
-(NSMutableDictionary *)extrinsicsMap;
-(SCD_Struct_AR1)extrinsicMatrixToDeviceType:(id)arg1 ;
-(void)addExtrinsicMatrix:(SCD_Struct_AR1)arg1 toDeviceType:(id)arg2 ;
-(void)setCalibrationData:(AVCameraCalibrationData *)arg1 ;
-(void)setAdCameraCalibration:(ADCameraCalibration *)arg1 ;
-(void)setExtrinsicsMap:(NSMutableDictionary *)arg1 ;
@end

