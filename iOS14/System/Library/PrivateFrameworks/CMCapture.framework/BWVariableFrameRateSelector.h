/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@class NSMutableDictionary;

@interface BWVariableFrameRateSelector : NSObject {

	float _suggestedFrameRate;
	int _mode;
	float _integrationTimeFrom60To30;
	float _integrationTimeFrom30To24;
	float _integrationTimeFrom30BackTo60;
	NSMutableDictionary* _vfrAEMaxGainsByPortType;
	NSMutableDictionary* _variableFrameRateInfo;
	SCD_Struct_BW8 _lastPTSForVariableFrameRateInfo;
	os_unfair_lock_s _variableFrameRateInfoLock;
	int _frameRateConversionStatus;
	BOOL _lastStabilityFlag;
	BOOL _deviceMotionEnabled;
	BOOL _sceneMotionEnabled;
	BOOL _zoomInProgress;
	BWSmartCameraScene _sceneMotionAEInLowLight;
	BWSmartCameraScene _sceneMotionAEInHighLight;
	BWSmartCameraScene _deviceMotionInLowLight;
	BWSmartCameraScene _deviceMotionInHighLight;
	BWSmartCameraScene _aeLimits;
	BWSmartCameraScene _zoomRequest;
	BWSmartCameraScene _flickerDetected;
	float _previousEITForAELimitsReached;
	int _globalMotionAE;
	NSMutableDictionary* _highLightSceneMotionThresholdsByPortType;
	NSMutableDictionary* _lowLightSceneMotionThresholdsByPortType;
	SCD_Struct_BW94 _lastQuaternion;
	SCD_Struct_BW94 _lastQuaternionDiff;
	BOOL _testRun;
	BOOL _frameRateConversionInVISNodeEnabled;
	SCD_Struct_BW95 _state;

}

@property (nonatomic,readonly) float suggestedFrameRate; 
+(void)initialize;
-(void)_loadDefaultsWithPortTypes:(id)arg1 forParameters:(id)arg2 ;
-(BOOL)_zoomRequestConfidenceFromCurrentZoomInProgress:(BOOL)arg1 ;
-(void)_updateSuggestedFrameRateFromFrameStatistics:(id)arg1 sampleBuffer:(opaqueCMSampleBufferRef)arg2 currentFrameRate:(float)arg3 aeMaxGain:(float)arg4 ;
-(void)_updateAEMaxGainDictionary:(id)arg1 withAEMaxGain:(id)arg2 forPortType:(id)arg3 ;
-(void)_updatemotionThreshold:(int)arg1 forPortType:(id)arg2 ;
-(BOOL)_flickerDetectedConfidenceFromCurrentLightMode:(BOOL)arg1 ;
-(float)getAEMaxGainForPortType:(id)arg1 suggestedFrameRate:(double)arg2 ;
-(void)_updateMotionDataFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_updateSmartSceneFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 currentFrameRate:(float)arg2 portType:(id)arg3 ;
-(BOOL)_getSceneStabilityFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 currentFrameRate:(float)arg2 portType:(id)arg3 ;
-(BOOL)_aeLimitsConfidenceFromCurrentFrameStatistics:(id)arg1 ;
-(float)_frameRateForFrameStatistics:(id)arg1 portType:(id)arg2 ;
-(void)_updateStateWithFramerate:(float)arg1 reason:(int)arg2 currentFramerate:(float)arg3 ;
-(BOOL)_switchBackTo60AsFlickerFrequencyIsDetected:(id)arg1 ;
-(float)suggestedFrameRate;
-(id)initWithPortTypes:(id)arg1 forParameters:(id)arg2 ;
-(void)processSampleBuffer:(opaqueCMSampleBufferRef)arg1 frameStatistics:(id)arg2 currentFrameRate:(float)arg3 aeMaxGain:(float)arg4 zoomInProgress:(BOOL)arg5 ;
-(void)dealloc;
@end

