/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
@class NSArray, NSData, NSMutableArray;

@interface FigIrisAutoTrimmer : NSObject {

	BOOL _motionAvailable;
	SCD_Struct_Fi17 _captureMotionDelta;
	double _captureMotionDeltaPeriod;
	BOOL _haveCaptureMotionDelta;
	SCD_Struct_Fi17 _lastAttitude;
	SCD_Struct_Fi17 _lastDelta;
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
	SCD_Struct_BW2 _maxHoldDuration;
	long long _maxHoldFrames;
	double _bufferHistorySeconds;
	double _motionSampleRate;
	unsigned long long _nominalHistorySize;
	BOOL _vitalityScoringEnabled;
	SCD_Struct_BW94 _vitalityScoringSmartCameraPipelineVersion;

}

@property (nonatomic,readonly) BOOL trimmingActive; 
@property (nonatomic,readonly) unsigned vitalityScoringVersion; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)setVideoFrameRate:(double)arg1 ;
-(double)videoFrameRate;
-(unsigned)vitalityScoringVersion;
-(void)setVitalityScoringEnabled:(BOOL)arg1 ;
-(void)setBufferHistorySeconds:(double)arg1 ;
-(void)setMaxHoldDuration:(SCD_Struct_BW2)arg1 ;
-(void)setVitalityScoringSmartCameraPipelineVersion:(SCD_Struct_BW94)arg1 ;
-(void)startMotionProcessing;
-(void)stopMotionProcessing;
-(float)computeVitalityScoreForStillImageHostPTS:(SCD_Struct_BW2)arg1 movieRange:(SCD_Struct_BW11)arg2 ;
-(int)emissionStatusForHostPTS:(SCD_Struct_BW2)arg1 ;
-(SCD_Struct_BW2)beginTrimmingForStillImageHostPTS:(SCD_Struct_BW2)arg1 minimumPTS:(SCD_Struct_BW2)arg2 ;
-(void)processISPMotionData:(id)arg1 forHostTime:(SCD_Struct_BW2)arg2 ;
-(void)processCountOfVisibleVitalityObjects:(int)arg1 forHostTime:(SCD_Struct_BW2)arg2 ;
-(void)processInferences:(id)arg1 forHostTime:(SCD_Struct_BW2)arg2 ;
-(SCD_Struct_BW94)vitalityScoringSmartCameraPipelineVersion;
-(BOOL)vitalityScoringEnabled;
-(void)_initSVM:(id)arg1 fromFile:(id)arg2 ;
-(void)_processMotionSample:(const SCD_Struct_Fi17*)arg1 gravity:(const SCD_Struct_Fi16*)arg2 motionTimestamp:(double)arg3 frameTimestamp:(SCD_Struct_BW2)arg4 metadata:(id)arg5 ;
-(BOOL)_checkSamplesContainHostTime:(SCD_Struct_BW2)arg1 ;
-(long long)_findClosestIndexToHostTime:(SCD_Struct_BW2)arg1 fromIndex:(long long)arg2 limitIndex:(long long)arg3 ;
-(double)_timeoutThreshold;
-(long long)_findClosestIndexToOffset:(double)arg1 atLeastOneFromIndex:(long long)arg2 limitIndex:(long long)arg3 ;
-(BOOL)_shouldCut:(id)arg1 withLookahead:(id)arg2 withLookback:(id)arg3 ;
-(float)_computeVitalityFrom:(long long)arg1 to:(long long)arg2 ;
-(long long)_findClosestIndexToTimestamp:(double)arg1 fromIndex:(long long)arg2 limitIndex:(long long)arg3 ;
-(double)_directionalWeightForSample:(id)arg1 ;
-(BOOL)_isUnstable:(id)arg1 withLookback:(id)arg2 ;
-(BOOL)_shouldCutUnstable:(id)arg1 withLookahead:(id)arg2 ;
-(BOOL)_shouldCutSVM:(id)arg1 ;
-(void)_updateStorageStats;
-(double)_getHostTime;
-(BOOL)trimmingActive;
-(SCD_Struct_BW2)maxHoldDuration;
-(double)bufferHistorySeconds;
-(BOOL)intermediateLoggingEnabled;
-(void)setIntermediateLoggingEnabled:(BOOL)arg1 ;
-(id)exportMotionSamples;
@end

