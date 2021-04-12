/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject, CMMotionActivityManager, NSOperationQueue;

@interface CMMediaSession : NSObject {

	unique_ptr<CMHeadTrackingService, std::__1::default_delete<CMHeadTrackingService> >* _headTrackingService;
	Dispatcher* _deviceMotionDispatcher;
	Dispatcher* _accessoryDeviceMotionDispatcher;
	Dispatcher* _accessoryDeviceMotionConfigDispatcher;
	Dispatcher* _accessoryDeviceMotionInEarStatusDispatcher;
	NSObject*<OS_dispatch_queue> _clientQueue;
	/*^block*/id _clientHandler;
	unsigned long long _predictionIntervalMicroseconds;
	int _scheme;
	CMOQuaternion _q_bf;
	UnTimesyncedAuxSampleHelper _unsyncedAuxHelper;
	unique_ptr<CMMediaSessionAnalyticsTracker, std::__1::default_delete<CMMediaSessionAnalyticsTracker> >* _analyticsTracker;
	int _previousBTZState;
	double _lastInBTZTime;
	int _previousMotionActivityType;
	double _lastAccessoryDMTime;
	int _previousTracking1IMU;
	BOOL _previousCTState;
	double _lastExitCTTime;
	float _lastAngleBetweenCurrentBoresightToDefault;
	BOOL _previousTrackingEnabled;
	double _lastDistractedViewingStartTime;
	BOOL _previousSrcMoving;
	BOOL _previousAuxMoving;
	AudioAccessorySample _lastAudioAccessorySample;
	unsigned long long _lastAccessoryTimestamp;
	unsigned long long _lastSourceTimestamp;
	unsigned long long _lastStateTimestamp;
	BOOL _trackingEstimatesStagnated;
	BOOL _logForReplay;
	double _printPoseTimer;
	double _accessorySampleTimer;
	int _accessorySamplesPerSecond;
	CMMotionActivityManager* _activityManager;
	NSOperationQueue* _activityQueue;
	shared_ptr<CLIoHidInterface::Device>* _ioHidTouch;
	double _lastTouchEventTimestamp;
	unique_ptr<CLSettings, std::__1::default_delete<CLSettings> >* _motionSettings;
	NSObject*<OS_dispatch_source> _defaultsPreferenceTimer;
	double _minQuiescentPeriodForBTZ;
	int _notify50HzPoseDecimator;
	double _sessionStartTime;
	double _firstAccessoryDMTime;
	double _firstValidPoseTime;
	double _lastTimesyncLostTime;
	unique_ptr<CMSpatialLogger, std::__1::default_delete<CMSpatialLogger> >* _logger;
	int _inEarStatus;
	BOOL _inEarStatusGatingEnabled;
	BOOL _overrideDefaultHeadsetOrientation;
	BOOL _returnDefaultPose;
	BOOL _returnRandomPose;
	BOOL _alwaysNotify50HzPose;
	unsigned _totalSourceIMUSamples;
	unsigned _totalAccessoryIMUSamples;
	unsigned _totalFacePoseAnchorSamples;
	unsigned _accessoryIMUSampleRate;
	float _prevAmbienceBedRoll;
	CMOQuaternion _headsetOrientationOverride;

}

@property (assign) unsigned totalSourceIMUSamples;                        //@synthesize totalSourceIMUSamples=_totalSourceIMUSamples - In the implementation block
@property (assign) unsigned totalAccessoryIMUSamples;                     //@synthesize totalAccessoryIMUSamples=_totalAccessoryIMUSamples - In the implementation block
@property (assign) unsigned totalFacePoseAnchorSamples;                   //@synthesize totalFacePoseAnchorSamples=_totalFacePoseAnchorSamples - In the implementation block
@property (assign) unsigned accessoryIMUSampleRate;                       //@synthesize accessoryIMUSampleRate=_accessoryIMUSampleRate - In the implementation block
@property (assign) float prevAmbienceBedRoll;                             //@synthesize prevAmbienceBedRoll=_prevAmbienceBedRoll - In the implementation block
@property (assign) BOOL overrideDefaultHeadsetOrientation;                //@synthesize overrideDefaultHeadsetOrientation=_overrideDefaultHeadsetOrientation - In the implementation block
@property (assign) CMOQuaternion headsetOrientationOverride;              //@synthesize headsetOrientationOverride=_headsetOrientationOverride - In the implementation block
@property (assign) BOOL returnDefaultPose;                                //@synthesize returnDefaultPose=_returnDefaultPose - In the implementation block
@property (assign) BOOL returnRandomPose;                                 //@synthesize returnRandomPose=_returnRandomPose - In the implementation block
@property (assign) BOOL alwaysNotify50HzPose;                             //@synthesize alwaysNotify50HzPose=_alwaysNotify50HzPose - In the implementation block
+(BOOL)_isAvailable;
-(id)_initWithOptions:(id)arg1 ;
-(id)init;
-(void)_logEvent:(id)arg1 ;
-(BOOL)returnDefaultPose;
-(BOOL)returnRandomPose;
-(BOOL)alwaysNotify50HzPose;
-(void)_updateUserSettings;
-(void)_disableLoggingForReplay;
-(void)_startDefaultsPreferenceUpdater;
-(void)_startHeadTracking;
-(void)_notifyClientHandler;
-(void)_stopHeadTracking;
-(void)setReturnDefaultPose:(BOOL)arg1 ;
-(void)_stopDefaultsPreferenceUpdater;
-(void)setReturnRandomPose:(BOOL)arg1 ;
-(void)setAlwaysNotify50HzPose:(BOOL)arg1 ;
-(void)_updateMinQuiescentPeriodForBTZ;
-(void)_feedPredictorEstimates;
-(int)_createPoseFromListenerOrientation:(const ListenerOrientation*)arg1 Pose:(id*)arg2 ;
-(unsigned)totalSourceIMUSamples;
-(void)setTotalSourceIMUSamples:(unsigned)arg1 ;
-(void)_feedPoseAnchor:(const Sample*)arg1 facePoseError:(SCD_Struct_CM54*)arg2 ;
-(unsigned)totalFacePoseAnchorSamples;
-(void)setTotalFacePoseAnchorSamples:(unsigned)arg1 ;
-(void)feedPoseAnchorWithAttitude:(SCD_Struct_CM14)arg1 position:(CMVector<float, 3>)arg2 timestampUs:(unsigned long long)arg3 ;
-(unsigned)totalAccessoryIMUSamples;
-(void)setTotalAccessoryIMUSamples:(unsigned)arg1 ;
-(unsigned long long)_getAuxSampleTimestamp:(const AudioAccessorySample*)arg1 currentTime:(double)arg2 ;
-(void)_setFixedTransforms:(const CMOQuaternion*)arg1 ;
-(void)_enableLoggingForReplayWithFilenamePrefix:(id)arg1 filePath:(id)arg2 ;
-(BOOL)_startPoseUpdatesToQueue:(id)arg1 andHandler:(/*^block*/id)arg2 ;
-(void)_feedSourceDeviceIMU:(const Sample*)arg1 ;
-(void)_feedTouchEventTimestamp:(double)arg1 ;
-(void)_feedFacePose:(id)arg1 rotationMatrix:(id)arg2 timestamp:(double)arg3 error:(SCD_Struct_CM54*)arg4 ;
-(void)_feedAccessoryDeviceMotion:(const AudioAccessorySample*)arg1 ;
-(void)_feedAccessoryConfig:(const Config*)arg1 ;
-(void)_feedAccessoryInEarStatus:(const int*)arg1 ;
-(AudioAccessorySample)_getLastAudioAccessorySample;
-(int)_currentAudioListenerOrientation:(id*)arg1 ;
-(void)_setConvergenceRateForBTZ:(float)arg1 ;
-(unsigned)accessoryIMUSampleRate;
-(void)setAccessoryIMUSampleRate:(unsigned)arg1 ;
-(float)prevAmbienceBedRoll;
-(void)setPrevAmbienceBedRoll:(float)arg1 ;
-(BOOL)overrideDefaultHeadsetOrientation;
-(void)setOverrideDefaultHeadsetOrientation:(BOOL)arg1 ;
-(CMOQuaternion)headsetOrientationOverride;
-(void)setHeadsetOrientationOverride:(CMOQuaternion)arg1 ;
-(BOOL)_start;
-(void)_stop;
-(void)_reset;
-(void)dealloc;
@end

