/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@class NSArray, NSData, NSMutableArray;

@interface FigIrisAutoTrimmer : NSObject {

	BOOL _motionAvailable;
	SCD_Struct_BW94 _captureMotionDelta;
	double _captureMotionDeltaPeriod;
	BOOL _haveCaptureMotionDelta;
	SCD_Struct_BW94 _lastAttitude;
	SCD_Struct_BW94 _lastDelta;
	double _lastCheckedTimestamp;
	int _lastStatus;
	int _svmKernelType;
	int _svmVectorCount;
	int _svmParamCount;
	float _svmRBFRho;
	float _svmRBFGamma;
	NSArray* _svmKeys;
	NSData* _svmNormalization;
	NSData* _svmVectors;
	NSMutableArray* _motionSamples;
	unsigned long long _estimatedIntermediatesCount;
	BOOL _intermediateLoggingEnabled;
	SCD_Struct_BW8 _maxHoldDuration;
	long long _maxHoldFrames;
	double _bufferHistorySeconds;
	double _motionSampleRate;
	unsigned long long _nominalHistorySize;
	BOOL _vitalityScoringEnabled;
	SCD_Struct_BW57 _vitalityScoringSmartCameraPipelineVersion;

}

@property (nonatomic,readonly) BOOL trimmingActive; 
@property (nonatomic,readonly) unsigned vitalityScoringVersion; 
+(void)initialize;
-(void)_initSVM:(id)arg1 fromFile:(id)arg2 ;
-(id)init;
-(BOOL)intermediateLoggingEnabled;
-(double)_directionalWeightForSample:(id)arg1 ;
-(double)_timeoutThreshold;
-(long long)_findClosestIndexToHostTime:(SCD_Struct_BW8)arg1 fromIndex:(long long)arg2 limitIndex:(long long)arg3 ;
-(SCD_Struct_BW8)maxHoldDuration;
-(void)_processMotionSample:(const SCD_Struct_BW94*)arg1 gravity:(const SCD_Struct_Fi129*)arg2 motionTimestamp:(double)arg3 frameTimestamp:(SCD_Struct_BW8)arg4 metadata:(id)arg5 ;
-(BOOL)_shouldCutUnstable:(id)arg1 withLookahead:(id)arg2 ;
-(void)setIntermediateLoggingEnabled:(BOOL)arg1 ;
-(void)processInferences:(id)arg1 forHostTime:(SCD_Struct_BW8)arg2 ;
-(float)computeVitalityScoreForStillImageHostPTS:(SCD_Struct_BW8)arg1 movieRange:(SCD_Struct_BW39)arg2 ;
-(SCD_Struct_BW8)beginTrimmingForStillImageHostPTS:(SCD_Struct_BW8)arg1 minimumPTS:(SCD_Struct_BW8)arg2 ;
-(SCD_Struct_BW57)vitalityScoringSmartCameraPipelineVersion;
-(void)setMaxHoldDuration:(SCD_Struct_BW8)arg1 ;
-(void)setVideoFrameRate:(double)arg1 ;
-(void)stopMotionProcessing;
-(BOOL)_shouldCutSVM:(id)arg1 ;
-(double)videoFrameRate;
-(void)setVitalityScoringEnabled:(BOOL)arg1 ;
-(int)emissionStatusForHostPTS:(SCD_Struct_BW8)arg1 ;
-(void)_updateStorageStats;
-(long long)_findClosestIndexToOffset:(double)arg1 atLeastOneFromIndex:(long long)arg2 limitIndex:(long long)arg3 ;
-(double)_getHostTime;
-(id)exportMotionSamples;
-(long long)_findClosestIndexToTimestamp:(double)arg1 fromIndex:(long long)arg2 limitIndex:(long long)arg3 ;
-(void)startMotionProcessing;
-(double)bufferHistorySeconds;
-(unsigned)vitalityScoringVersion;
-(BOOL)_checkSamplesContainHostTime:(SCD_Struct_BW8)arg1 ;
-(BOOL)vitalityScoringEnabled;
-(float)_computeVitalityFrom:(long long)arg1 to:(long long)arg2 ;
-(BOOL)_isUnstable:(id)arg1 withLookback:(id)arg2 ;
-(void)processISPMotionData:(id)arg1 forHostTime:(SCD_Struct_BW8)arg2 ;
-(void)processCountOfVisibleVitalityObjects:(int)arg1 forHostTime:(SCD_Struct_BW8)arg2 ;
-(void)setBufferHistorySeconds:(double)arg1 ;
-(BOOL)trimmingActive;
-(BOOL)_shouldCut:(id)arg1 withLookahead:(id)arg2 withLookback:(id)arg3 ;
-(void)dealloc;
-(void)setVitalityScoringSmartCameraPipelineVersion:(SCD_Struct_BW57)arg1 ;
@end

