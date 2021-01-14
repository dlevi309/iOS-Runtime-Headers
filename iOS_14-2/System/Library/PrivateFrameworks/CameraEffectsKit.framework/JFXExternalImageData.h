/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@interface JFXExternalImageData : NSObject {

	BOOL _hasValidFaceData;
	BOOL _requiresFaceTracking;
	double _timestamp;
	CVBufferRef _pixelBuffer;
	long long _cameraPosition;
	long long _captureFramesPerSecond;
	long long _orientation;
	double _rollAngle;
	CGRect _normalizedFaceRect;
	SCD_Struct_JF13 _cameraIntrinsics;

}

@property (assign,nonatomic) double timestamp;                              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) SCD_Struct_JF13 cameraIntrinsics;              //@synthesize cameraIntrinsics=_cameraIntrinsics - In the implementation block
@property (assign,nonatomic) CVBufferRef pixelBuffer;                       //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (assign,nonatomic) long long cameraPosition;                      //@synthesize cameraPosition=_cameraPosition - In the implementation block
@property (assign,nonatomic) long long captureFramesPerSecond;              //@synthesize captureFramesPerSecond=_captureFramesPerSecond - In the implementation block
@property (assign,nonatomic) long long orientation;                         //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) BOOL hasValidFaceData;                         //@synthesize hasValidFaceData=_hasValidFaceData - In the implementation block
@property (assign,nonatomic) BOOL requiresFaceTracking;                     //@synthesize requiresFaceTracking=_requiresFaceTracking - In the implementation block
@property (assign,nonatomic) CGRect normalizedFaceRect;                     //@synthesize normalizedFaceRect=_normalizedFaceRect - In the implementation block
@property (assign,nonatomic) double rollAngle;                              //@synthesize rollAngle=_rollAngle - In the implementation block
-(long long)cameraPosition;
-(double)timestamp;
-(void)setPixelBuffer:(CVBufferRef)arg1 ;
-(SCD_Struct_JF13)cameraIntrinsics;
-(void)setCameraIntrinsics:(SCD_Struct_JF13)arg1 ;
-(void)setNormalizedFaceRect:(CGRect)arg1 ;
-(void)setRollAngle:(double)arg1 ;
-(CGRect)normalizedFaceRect;
-(CVBufferRef)pixelBuffer;
-(long long)orientation;
-(double)rollAngle;
-(void)setTimestamp:(double)arg1 ;
-(void)dealloc;
-(void)setOrientation:(long long)arg1 ;
-(long long)captureFramesPerSecond;
-(void)setCameraPosition:(long long)arg1 ;
-(void)setCaptureFramesPerSecond:(long long)arg1 ;
-(BOOL)requiresFaceTracking;
-(void)setHasValidFaceData:(BOOL)arg1 ;
-(void)setRequiresFaceTracking:(BOOL)arg1 ;
-(BOOL)hasValidFaceData;
@end

