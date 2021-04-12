/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/FigXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, FigCaptureSourceVideoFormat, FigCaptureSourceDepthDataFormat;

@interface FigCaptureSourceConfiguration : NSObject <FigXPCCoding, NSCopying> {

	NSString* _sourceID;
	OpaqueFigCaptureSourceRef _source;
	int _sourceType;
	NSDictionary* _sourceAttributes;
	FigCaptureSourceVideoFormat* _requiredFormat;
	float _requiredMaxFrameRate;
	float _requiredMinFrameRate;
	float _maxFrameRateClientOverride;
	float _maxGainClientOverride;
	BOOL _hasSetVideoZoomFactorOnCaptureSource;
	float _videoZoomFactor;
	float _videoZoomRampAcceleration;
	int _imageControlMode;
	BOOL _applyMaxExposureDurationFrameworkOverrideWhenAvailable;
	SCD_Struct_BW8 _maxExposureDurationClientOverride;
	NSDictionary* _faceDetectionConfiguration;
	BOOL _sensorHDREnabled;
	BOOL _highlightRecoveryEnabled;
	int _colorSpace;
	BOOL _depthDataDeliveryEnabled;
	FigCaptureSourceDepthDataFormat* _depthDataFormat;
	float _depthDataMaxFrameRate;
	BOOL _lowLightVideoCaptureEnabled;
	BOOL _spatialOverCaptureEnabled;
	BOOL _nonDestructiveCropEnabled;
	BOOL _geometricDistortionCorrectionEnabled;
	BOOL _variableFrameRateVideoCaptureEnabled;

}

@property (readonly) BOOL smartCameraEnabled; 
@property (readonly) BOOL bravoShiftMitigationEnabled; 
@property (nonatomic,copy) NSString * sourceID;                                                        //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,readonly) OpaqueFigCaptureSourceRef source; 
@property (nonatomic,retain) FigCaptureSourceVideoFormat * requiredFormat;                             //@synthesize requiredFormat=_requiredFormat - In the implementation block
@property (assign,nonatomic) float requiredMaxFrameRate;                                               //@synthesize requiredMaxFrameRate=_requiredMaxFrameRate - In the implementation block
@property (assign,nonatomic) float requiredMinFrameRate;                                               //@synthesize requiredMinFrameRate=_requiredMinFrameRate - In the implementation block
@property (assign,nonatomic) float maxFrameRateClientOverride;                                         //@synthesize maxFrameRateClientOverride=_maxFrameRateClientOverride - In the implementation block
@property (assign,nonatomic) float maxGainClientOverride;                                              //@synthesize maxGainClientOverride=_maxGainClientOverride - In the implementation block
@property (assign,nonatomic) BOOL hasSetVideoZoomFactorOnCaptureSource;                                //@synthesize hasSetVideoZoomFactorOnCaptureSource=_hasSetVideoZoomFactorOnCaptureSource - In the implementation block
@property (assign,nonatomic) float videoZoomFactor;                                                    //@synthesize videoZoomFactor=_videoZoomFactor - In the implementation block
@property (assign,nonatomic) float videoZoomRampAcceleration;                                          //@synthesize videoZoomRampAcceleration=_videoZoomRampAcceleration - In the implementation block
@property (nonatomic,copy) NSDictionary * faceDetectionConfiguration;                                  //@synthesize faceDetectionConfiguration=_faceDetectionConfiguration - In the implementation block
@property (nonatomic,readonly) int sourcePosition; 
@property (nonatomic,readonly) int sourceType; 
@property (nonatomic,readonly) int sourceDeviceType; 
@property (assign,nonatomic) int imageControlMode;                                                     //@synthesize imageControlMode=_imageControlMode - In the implementation block
@property (assign,nonatomic) BOOL applyMaxExposureDurationFrameworkOverrideWhenAvailable;              //@synthesize applyMaxExposureDurationFrameworkOverrideWhenAvailable=_applyMaxExposureDurationFrameworkOverrideWhenAvailable - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW8 maxExposureDurationClientOverride;                         //@synthesize maxExposureDurationClientOverride=_maxExposureDurationClientOverride - In the implementation block
@property (assign,nonatomic) BOOL sensorHDREnabled;                                                    //@synthesize sensorHDREnabled=_sensorHDREnabled - In the implementation block
@property (assign,nonatomic) BOOL highlightRecoveryEnabled;                                            //@synthesize highlightRecoveryEnabled=_highlightRecoveryEnabled - In the implementation block
@property (assign,nonatomic) int colorSpace;                                                           //@synthesize colorSpace=_colorSpace - In the implementation block
@property (assign,nonatomic) BOOL depthDataDeliveryEnabled;                                            //@synthesize depthDataDeliveryEnabled=_depthDataDeliveryEnabled - In the implementation block
@property (assign,nonatomic) float depthDataMaxFrameRate;                                              //@synthesize depthDataMaxFrameRate=_depthDataMaxFrameRate - In the implementation block
@property (nonatomic,retain) FigCaptureSourceDepthDataFormat * depthDataFormat;                        //@synthesize depthDataFormat=_depthDataFormat - In the implementation block
@property (assign,nonatomic) BOOL lowLightVideoCaptureEnabled;                                         //@synthesize lowLightVideoCaptureEnabled=_lowLightVideoCaptureEnabled - In the implementation block
@property (assign,nonatomic) BOOL variableFrameRateVideoCaptureEnabled;                                //@synthesize variableFrameRateVideoCaptureEnabled=_variableFrameRateVideoCaptureEnabled - In the implementation block
@property (assign,nonatomic) BOOL spatialOverCaptureEnabled;                                           //@synthesize spatialOverCaptureEnabled=_spatialOverCaptureEnabled - In the implementation block
@property (assign,nonatomic) BOOL nonDestructiveCropEnabled;                                           //@synthesize nonDestructiveCropEnabled=_nonDestructiveCropEnabled - In the implementation block
@property (assign,nonatomic) BOOL geometricDistortionCorrectionEnabled;                                //@synthesize geometricDistortionCorrectionEnabled=_geometricDistortionCorrectionEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)sourceTypeForString:(id)arg1 ;
+(id)stringForSourcePosition:(int)arg1 ;
+(id)stringForSourceDeviceType:(int)arg1 ;
+(id)stringForSourceType:(int)arg1 ;
-(float)videoZoomRampAcceleration;
-(void)setNonDestructiveCropEnabled:(BOOL)arg1 ;
-(void)setImageControlMode:(int)arg1 ;
-(void)setVideoZoomRampAcceleration:(float)arg1 ;
-(int)imageControlMode;
-(SCD_Struct_BW8)maxExposureDurationClientOverride;
-(void)setSpatialOverCaptureEnabled:(BOOL)arg1 ;
-(void)setVariableFrameRateVideoCaptureEnabled:(BOOL)arg1 ;
-(void)setColorSpace:(int)arg1 ;
-(BOOL)smartCameraEnabled;
-(void)setGeometricDistortionCorrectionEnabled:(BOOL)arg1 ;
-(int)sourcePosition;
-(void)setFaceDetectionConfiguration:(NSDictionary *)arg1 ;
-(void)setSourceID:(NSString *)arg1 ;
-(BOOL)depthDataDeliveryEnabled;
-(int)colorSpace;
-(void)setLowLightVideoCaptureEnabled:(BOOL)arg1 ;
-(void)setMaxExposureDurationClientOverride:(SCD_Struct_BW8)arg1 ;
-(void)setVideoZoomFactor:(float)arg1 ;
-(id)initWithSource:(OpaqueFigCaptureSourceRef)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(float)requiredMaxFrameRate;
-(int)sourceType;
-(float)depthDataMaxFrameRate;
-(BOOL)hasSetVideoZoomFactorOnCaptureSource;
-(BOOL)spatialOverCaptureEnabled;
-(void)setHasSetVideoZoomFactorOnCaptureSource:(BOOL)arg1 ;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(BOOL)nonDestructiveCropEnabled;
-(float)maxGainClientOverride;
-(void)setDepthDataMaxFrameRate:(float)arg1 ;
-(void)setHighlightRecoveryEnabled:(BOOL)arg1 ;
-(void)setDepthDataFormat:(FigCaptureSourceDepthDataFormat *)arg1 ;
-(float)videoZoomFactor;
-(float)requiredMinFrameRate;
-(BOOL)highlightRecoveryEnabled;
-(BOOL)sensorHDREnabled;
-(FigCaptureSourceDepthDataFormat *)depthDataFormat;
-(NSString *)description;
-(void)setRequiredFormat:(FigCaptureSourceVideoFormat *)arg1 ;
-(BOOL)variableFrameRateVideoCaptureEnabled;
-(id)_sourceUID;
-(id)_sourceAttributes;
-(int)_sourceToken;
-(float)maxFrameRateClientOverride;
-(BOOL)bravoShiftMitigationEnabled;
-(FigCaptureSourceVideoFormat *)requiredFormat;
-(BOOL)_isMicSource;
-(void)setMaxFrameRateClientOverride:(float)arg1 ;
-(BOOL)lowLightVideoCaptureEnabled;
-(BOOL)_isCameraSource;
-(BOOL)geometricDistortionCorrectionEnabled;
-(void)setApplyMaxExposureDurationFrameworkOverrideWhenAvailable:(BOOL)arg1 ;
-(void)setRequiredMaxFrameRate:(float)arg1 ;
-(NSString *)sourceID;
-(int)sourceDeviceType;
-(void)setMaxGainClientOverride:(float)arg1 ;
-(void)setRequiredMinFrameRate:(float)arg1 ;
-(BOOL)applyMaxExposureDurationFrameworkOverrideWhenAvailable;
-(void)setSensorHDREnabled:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSourceType:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(NSDictionary *)faceDetectionConfiguration;
-(OpaqueFigCaptureSourceRef)source;
@end

