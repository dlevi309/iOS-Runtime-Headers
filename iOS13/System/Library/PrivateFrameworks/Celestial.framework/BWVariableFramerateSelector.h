/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
@interface BWVariableFramerateSelector : NSObject {

	float _suggestedFrameRate;
	float _suggestedAEMaxGain;
	int _mode;
	unsigned _highLightModeLuxThreshold;
	unsigned _luxThresholds[3];
	float _luxFramerates[3];
	float _llAEMaxGains[3];
	float _motionThreshold;
	BOOL _lastStabilityFlag;
	BWSmartCameraScene _motionXSmartScene;
	BWSmartCameraScene _motionXRapidSmartScene;
	BWSmartCameraScene _motionYSmartScene;
	BWSmartCameraScene _motionAttitudeBased;
	float _hysteresisRatioThreshold;
	float _underExposureStops;
	float _movingCameraFrameRateCap;
	SCD_Struct_Fi17 _lastQuaternion;
	SCD_Struct_Fi17 _lastQuaternionDiff;
	SCD_Struct_BW128 _state;

}

@property (nonatomic,readonly) float suggestedFrameRate; 
@property (nonatomic,readonly) float suggestedAEMaxGain; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)_loadDefaults;
-(void)_updateSuggestedFrameRateFromLuxLevel:(unsigned)arg1 sampleBuffer:(opaqueCMSampleBufferRef)arg2 frameRate:(float)arg3 exposureTargetOffset:(float)arg4 aeMaxGain:(float)arg5 ;
-(void)_updateMotionDataFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_updateSmartSceneFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)_getSceneStabilityFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_updateStateWithFramerate:(float)arg1 reason:(int)arg2 luxLevel:(unsigned)arg3 currentFramerate:(float)arg4 ;
-(void)processSampleBuffer:(opaqueCMSampleBufferRef)arg1 luxLevel:(unsigned)arg2 frameRate:(float)arg3 exposureTargetOffset:(float)arg4 aeMaxGain:(float)arg5 ;
-(float)suggestedFrameRate;
-(float)suggestedAEMaxGain;
-(id)frameRateChangeDescription;
-(id)dynamicStabilityDescription;
-(id)stabilityDecisionDescription;
@end

