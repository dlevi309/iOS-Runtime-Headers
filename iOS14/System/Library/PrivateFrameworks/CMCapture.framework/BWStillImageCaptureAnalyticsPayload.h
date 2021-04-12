/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <libobjc.A.dylib/BWCoreAnalyticsPayload.h>

@class NSString, NSDictionary;

@interface BWStillImageCaptureAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {

	NSString* _portType;
	float _accelStandardDeviation;
	float _gyroStandardDeviation;
	NSDictionary* _apsSubjectDistance;
	NSDictionary* _practicalFocalLength;
	NSDictionary* _focusingMethod;
	float _maxSphereTrackingError;
	float _stdSphereTrackingError;
	float _maxAFTrackingError;
	float _stdAFTrackingError;
	float _minDistanceFromSphereEndStop;
	float _spherePowerConsumption;
	float _afPowerConsumption;
	unsigned _cameraPosture;
	NSString* _sphereMode;
	unsigned _apsMode;
	unsigned _timeSinceLastCaptureInSession;
	float _flashBrightnessRatio;
	NSDictionary* _oisRecenteringLoggingData;
	float _effectiveIntegrationTime;
	int _intelligentDistortionCorrectionStatusCode;
	int _intelligentDistortionCorrectionGainMapProcessingStatusCode;
	int _intelligentDistortionCorrectionCorrectionType;
	int _ispMotionHighPassFilterConvergenceFlags;
	NSDictionary* _timeOfFlightAssistedAutoFocusEstimatorData;
	BOOL _afDriverShortOccurred;
	BOOL _livePhotoEnabled;
	BOOL _depthEnabled;
	BOOL _timeLapse;
	BOOL _burst;
	int _activeDeviceMask;
	int _devicePosition;
	int _deviceType;
	int _captureType;
	unsigned _processingFlags;
	int _processingDuration;
	int _streamingTime;
	int _shutterLag;
	float _zoom;
	int _luxLevel;
	float _lensPosition;
	int _sensorTemperature;
	float _exposureDuration;
	float _iso;
	float _normalizedSNR;
	float _SNR;
	int _numberOfFaces;
	int _clientIDType;
	unsigned long long _captureFlags;
	unsigned long long _sceneFlags;

}

@property (assign,nonatomic) int activeDeviceMask;                                                        //@synthesize activeDeviceMask=_activeDeviceMask - In the implementation block
@property (assign,nonatomic) int devicePosition;                                                          //@synthesize devicePosition=_devicePosition - In the implementation block
@property (assign,nonatomic) int deviceType;                                                              //@synthesize deviceType=_deviceType - In the implementation block
@property (assign,nonatomic) int captureType;                                                             //@synthesize captureType=_captureType - In the implementation block
@property (assign,nonatomic) unsigned long long captureFlags;                                             //@synthesize captureFlags=_captureFlags - In the implementation block
@property (assign,nonatomic) unsigned processingFlags;                                                    //@synthesize processingFlags=_processingFlags - In the implementation block
@property (assign,nonatomic) unsigned long long sceneFlags;                                               //@synthesize sceneFlags=_sceneFlags - In the implementation block
@property (assign,nonatomic) int processingDuration;                                                      //@synthesize processingDuration=_processingDuration - In the implementation block
@property (assign,nonatomic) int streamingTime;                                                           //@synthesize streamingTime=_streamingTime - In the implementation block
@property (assign,nonatomic) int shutterLag;                                                              //@synthesize shutterLag=_shutterLag - In the implementation block
@property (assign,nonatomic) float zoom;                                                                  //@synthesize zoom=_zoom - In the implementation block
@property (assign,nonatomic) int luxLevel;                                                                //@synthesize luxLevel=_luxLevel - In the implementation block
@property (assign,nonatomic) float lensPosition;                                                          //@synthesize lensPosition=_lensPosition - In the implementation block
@property (assign,nonatomic) int sensorTemperature;                                                       //@synthesize sensorTemperature=_sensorTemperature - In the implementation block
@property (assign,nonatomic) float exposureDuration;                                                      //@synthesize exposureDuration=_exposureDuration - In the implementation block
@property (assign,nonatomic) float iso;                                                                   //@synthesize iso=_iso - In the implementation block
@property (assign,nonatomic) float normalizedSNR;                                                         //@synthesize normalizedSNR=_normalizedSNR - In the implementation block
@property (assign,setter=NR,nonatomic) float SNR;                                                         //@synthesize SNR=_SNR - In the implementation block
@property (assign,nonatomic) int numberOfFaces;                                                           //@synthesize numberOfFaces=_numberOfFaces - In the implementation block
@property (assign,nonatomic) int clientIDType;                                                            //@synthesize clientIDType=_clientIDType - In the implementation block
@property (assign,nonatomic) BOOL livePhotoEnabled;                                                       //@synthesize livePhotoEnabled=_livePhotoEnabled - In the implementation block
@property (assign,nonatomic) BOOL depthEnabled;                                                           //@synthesize depthEnabled=_depthEnabled - In the implementation block
@property (assign,nonatomic) BOOL timeLapse;                                                              //@synthesize timeLapse=_timeLapse - In the implementation block
@property (assign,nonatomic) BOOL burst;                                                                  //@synthesize burst=_burst - In the implementation block
@property (nonatomic,retain) NSString * portType;                                                         //@synthesize portType=_portType - In the implementation block
@property (assign,nonatomic) float accelStandardDeviation;                                                //@synthesize accelStandardDeviation=_accelStandardDeviation - In the implementation block
@property (assign,nonatomic) float gyroStandardDeviation;                                                 //@synthesize gyroStandardDeviation=_gyroStandardDeviation - In the implementation block
@property (nonatomic,retain) NSDictionary * apsSubjectDistance;                                           //@synthesize apsSubjectDistance=_apsSubjectDistance - In the implementation block
@property (nonatomic,retain) NSDictionary * practicalFocalLength;                                         //@synthesize practicalFocalLength=_practicalFocalLength - In the implementation block
@property (nonatomic,retain) NSDictionary * focusingMethod;                                               //@synthesize focusingMethod=_focusingMethod - In the implementation block
@property (assign,nonatomic) float maxSphereTrackingError;                                                //@synthesize maxSphereTrackingError=_maxSphereTrackingError - In the implementation block
@property (assign,nonatomic) float stdSphereTrackingError;                                                //@synthesize stdSphereTrackingError=_stdSphereTrackingError - In the implementation block
@property (assign,nonatomic) float maxAFTrackingError;                                                    //@synthesize maxAFTrackingError=_maxAFTrackingError - In the implementation block
@property (assign,nonatomic) float stdAFTrackingError;                                                    //@synthesize stdAFTrackingError=_stdAFTrackingError - In the implementation block
@property (assign,nonatomic) float minDistanceFromSphereEndStop;                                          //@synthesize minDistanceFromSphereEndStop=_minDistanceFromSphereEndStop - In the implementation block
@property (assign,nonatomic) float spherePowerConsumption;                                                //@synthesize spherePowerConsumption=_spherePowerConsumption - In the implementation block
@property (assign,nonatomic) float afPowerConsumption;                                                    //@synthesize afPowerConsumption=_afPowerConsumption - In the implementation block
@property (assign,nonatomic) unsigned cameraPosture;                                                      //@synthesize cameraPosture=_cameraPosture - In the implementation block
@property (nonatomic,retain) NSString * sphereMode;                                                       //@synthesize sphereMode=_sphereMode - In the implementation block
@property (assign,nonatomic) unsigned apsMode;                                                            //@synthesize apsMode=_apsMode - In the implementation block
@property (assign,nonatomic) unsigned timeSinceLastCaptureInSession;                                      //@synthesize timeSinceLastCaptureInSession=_timeSinceLastCaptureInSession - In the implementation block
@property (assign,nonatomic) float flashBrightnessRatio;                                                  //@synthesize flashBrightnessRatio=_flashBrightnessRatio - In the implementation block
@property (nonatomic,retain) NSDictionary * oisRecenteringLoggingData;                                    //@synthesize oisRecenteringLoggingData=_oisRecenteringLoggingData - In the implementation block
@property (assign,nonatomic) float effectiveIntegrationTime;                                              //@synthesize effectiveIntegrationTime=_effectiveIntegrationTime - In the implementation block
@property (assign,nonatomic) int intelligentDistortionCorrectionStatusCode;                               //@synthesize intelligentDistortionCorrectionStatusCode=_intelligentDistortionCorrectionStatusCode - In the implementation block
@property (assign,nonatomic) int intelligentDistortionCorrectionGainMapProcessingStatusCode;              //@synthesize intelligentDistortionCorrectionGainMapProcessingStatusCode=_intelligentDistortionCorrectionGainMapProcessingStatusCode - In the implementation block
@property (assign,nonatomic) int intelligentDistortionCorrectionCorrectionType;                           //@synthesize intelligentDistortionCorrectionCorrectionType=_intelligentDistortionCorrectionCorrectionType - In the implementation block
@property (assign,nonatomic) int ispMotionHighPassFilterConvergenceFlags;                                 //@synthesize ispMotionHighPassFilterConvergenceFlags=_ispMotionHighPassFilterConvergenceFlags - In the implementation block
@property (nonatomic,retain) NSDictionary * timeOfFlightAssistedAutoFocusEstimatorData;                   //@synthesize timeOfFlightAssistedAutoFocusEstimatorData=_timeOfFlightAssistedAutoFocusEstimatorData - In the implementation block
@property (assign,nonatomic) BOOL afDriverShortOccurred;                                                  //@synthesize afDriverShortOccurred=_afDriverShortOccurred - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)SNR;
-(float)iso;
-(void)setLuxLevel:(int)arg1 ;
-(int)numberOfFaces;
-(void)setCameraPosture:(unsigned)arg1 ;
-(void)setNumberOfFaces:(int)arg1 ;
-(void)setZoom:(float)arg1 ;
-(int)deviceType;
-(NSDictionary *)practicalFocalLength;
-(float)zoom;
-(void)setMaxSphereTrackingError:(float)arg1 ;
-(void)setPortType:(NSString *)arg1 ;
-(float)effectiveIntegrationTime;
-(void)setSphereMode:(NSString *)arg1 ;
-(int)intelligentDistortionCorrectionGainMapProcessingStatusCode;
-(id)init;
-(NSString *)portType;
-(BOOL)depthEnabled;
-(void)setFlashBrightnessRatio:(float)arg1 ;
-(void)setSpherePowerConsumption:(float)arg1 ;
-(void)setApsMode:(unsigned)arg1 ;
-(NSDictionary *)apsSubjectDistance;
-(void)setIntelligentDistortionCorrectionGainMapProcessingStatusCode:(int)arg1 ;
-(int)devicePosition;
-(void)setTimeSinceLastCaptureInSession:(unsigned)arg1 ;
-(void)setDeviceType:(int)arg1 ;
-(void)setIspMotionHighPassFilterConvergenceFlags:(int)arg1 ;
-(unsigned long long)sceneFlags;
-(float)lensPosition;
-(void)setMaxAFTrackingError:(float)arg1 ;
-(float)stdSphereTrackingError;
-(void)setFocusingMethod:(NSDictionary *)arg1 ;
-(void)setMinDistanceFromSphereEndStop:(float)arg1 ;
-(int)intelligentDistortionCorrectionCorrectionType;
-(id)eventName;
-(void)setCaptureFlags:(unsigned long long)arg1 ;
-(NSDictionary *)timeOfFlightAssistedAutoFocusEstimatorData;
-(void)setLivePhotoEnabled:(BOOL)arg1 ;
-(NSDictionary *)focusingMethod;
-(void)setExposureDuration:(float)arg1 ;
-(void)setIntelligentDistortionCorrectionStatusCode:(int)arg1 ;
-(void)setProcessingFlags:(unsigned)arg1 ;
-(void)setGyroStandardDeviation:(float)arg1 ;
-(float)afPowerConsumption;
-(void)setOisRecenteringLoggingData:(NSDictionary *)arg1 ;
-(void)setCaptureType:(int)arg1 ;
-(void)setIso:(float)arg1 ;
-(void)setPracticalFocalLength:(NSDictionary *)arg1 ;
-(float)gyroStandardDeviation;
-(NSString *)sphereMode;
-(NSDictionary *)oisRecenteringLoggingData;
-(void)setStdSphereTrackingError:(float)arg1 ;
-(int)clientIDType;
-(int)shutterLag;
-(void)setDepthEnabled:(BOOL)arg1 ;
-(float)exposureDuration;
-(void)setEffectiveIntegrationTime:(float)arg1 ;
-(void)setProcessingDuration:(int)arg1 ;
-(id)eventDictionary;
-(void)setSceneFlags:(unsigned long long)arg1 ;
-(unsigned)processingFlags;
-(void)setShutterLag:(int)arg1 ;
-(unsigned)timeSinceLastCaptureInSession;
-(int)ispMotionHighPassFilterConvergenceFlags;
-(void)setApsSubjectDistance:(NSDictionary *)arg1 ;
-(void)setIntelligentDistortionCorrectionCorrectionType:(int)arg1 ;
-(int)streamingTime;
-(BOOL)burst;
-(float)flashBrightnessRatio;
-(void)setClientIDType:(int)arg1 ;
-(void)setDevicePosition:(int)arg1 ;
-(void)setAfDriverShortOccurred:(BOOL)arg1 ;
-(int)captureType;
-(unsigned long long)captureFlags;
-(void)setTimeOfFlightAssistedAutoFocusEstimatorData:(NSDictionary *)arg1 ;
-(void)reset;
-(float)normalizedSNR;
-(float)minDistanceFromSphereEndStop;
-(int)luxLevel;
-(int)activeDeviceMask;
-(void)setAfPowerConsumption:(float)arg1 ;
-(void)setNormalizedSNR:(float)arg1 ;
-(void)setActiveDeviceMask:(int)arg1 ;
-(BOOL)livePhotoEnabled;
-(void)setSNR:(float)arg1 ;
-(void)setStreamingTime:(int)arg1 ;
-(void)setSensorTemperature:(int)arg1 ;
-(float)stdAFTrackingError;
-(float)maxSphereTrackingError;
-(int)intelligentDistortionCorrectionStatusCode;
-(void)setBurst:(BOOL)arg1 ;
-(float)accelStandardDeviation;
-(void)setTimeLapse:(BOOL)arg1 ;
-(float)spherePowerConsumption;
-(BOOL)timeLapse;
-(unsigned)apsMode;
-(void)setLensPosition:(float)arg1 ;
-(int)sensorTemperature;
-(BOOL)afDriverShortOccurred;
-(void)setStdAFTrackingError:(float)arg1 ;
-(int)processingDuration;
-(void)setAccelStandardDeviation:(float)arg1 ;
-(void)dealloc;
-(float)maxAFTrackingError;
-(unsigned)cameraPosture;
@end

