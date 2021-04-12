/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	float x;
	float y;
	float z;
} SCD_Struct_CM1;

typedef struct {
	double field1;
	double field2;
	double field3;
} SCD_Struct_CM2;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_CM3;

typedef struct _compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > {
	char* __value_;
} compressed_pair<unsigned char *, std::__1::allocator<unsigned char> >;

typedef struct vector<unsigned char, std::__1::allocator<unsigned char> > {
	char* __begin_;
	char* __end_;
	compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > __end_cap_;
} vector<unsigned char, std::__1::allocator<unsigned char> >;

typedef struct z_stream_s {
	char* next_in;
	unsigned avail_in;
	unsigned long long total_in;
	char* next_out;
	unsigned avail_out;
	unsigned long long total_out;
	char* msg;
	internal_state state;
	/*function pointer*/void* zalloc;
	/*function pointer*/void* zfree;
	void opaque;
	int data_type;
	unsigned long long adler;
	unsigned long long reserved;
} z_stream_s;

typedef struct Reader {
	Delegate fDelegate;
	int fFd;
	unsigned long long fMappedSize;
	unsigned long long fMappedOffset;
	char* fMappedData;
	BOOL fMustScan;
	z_stream_s fZStream;
	vector<unsigned char, std::__1::allocator<unsigned char> > fUncompressedSens;
	unsigned long long fSensRemaining;
	char* fSensData;
} Reader;

typedef struct MemoryDelegate {
	/*function pointer*/void* _vptr$Delegate;
	char* fBuffer;
	unsigned long long fLength;
} MemoryDelegate;

typedef struct {
	unsigned cftime : 1;
} SCD_Struct_CM9;

typedef struct _compressed_pair<CMMsl::ZeroVelocityCorrection *, std::__1::default_delete<CMMsl::ZeroVelocityCorrection> > {
	ZeroVelocityCorrection __value_;
} compressed_pair<CMMsl::ZeroVelocityCorrection *, std::__1::default_delete<CMMsl::ZeroVelocityCorrection> >;

typedef struct unique_ptr<CMMsl::ZeroVelocityCorrection, std::__1::default_delete<CMMsl::ZeroVelocityCorrection> > {
	compressed_pair<CMMsl::ZeroVelocityCorrection *, std::__1::default_delete<CMMsl::ZeroVelocityCorrection> > __ptr_;
} unique_ptr<CMMsl::ZeroVelocityCorrection, std::__1::default_delete<CMMsl::ZeroVelocityCorrection> >;

typedef struct _compressed_pair<CMMsl::WorkoutRecorderWorkoutEvent *, std::__1::default_delete<CMMsl::WorkoutRecorderWorkoutEvent> > {
	WorkoutRecorderWorkoutEvent __value_;
} compressed_pair<CMMsl::WorkoutRecorderWorkoutEvent *, std::__1::default_delete<CMMsl::WorkoutRecorderWorkoutEvent> >;

typedef struct unique_ptr<CMMsl::WorkoutRecorderWorkoutEvent, std::__1::default_delete<CMMsl::WorkoutRecorderWorkoutEvent> > {
	compressed_pair<CMMsl::WorkoutRecorderWorkoutEvent *, std::__1::default_delete<CMMsl::WorkoutRecorderWorkoutEvent> > __ptr_;
} unique_ptr<CMMsl::WorkoutRecorderWorkoutEvent, std::__1::default_delete<CMMsl::WorkoutRecorderWorkoutEvent> >;

typedef struct _compressed_pair<CMMsl::WorkoutRecorderWifiScanResults *, std::__1::default_delete<CMMsl::WorkoutRecorderWifiScanResults> > {
	WorkoutRecorderWifiScanResults __value_;
} compressed_pair<CMMsl::WorkoutRecorderWifiScanResults *, std::__1::default_delete<CMMsl::WorkoutRecorderWifiScanResults> >;

typedef struct unique_ptr<CMMsl::WorkoutRecorderWifiScanResults, std::__1::default_delete<CMMsl::WorkoutRecorderWifiScanResults> > {
	compressed_pair<CMMsl::WorkoutRecorderWifiScanResults *, std::__1::default_delete<CMMsl::WorkoutRecorderWifiScanResults> > __ptr_;
} unique_ptr<CMMsl::WorkoutRecorderWifiScanResults, std::__1::default_delete<CMMsl::WorkoutRecorderWifiScanResults> >;

typedef struct _compressed_pair<CMMsl::WorkoutRecorderWatchOrientationSettings *, std::__1::default_delete<CMMsl::WorkoutRecorderWatchOrientationSettings> > {
	WorkoutRecorderWatchOrientationSettings __value_;
} compressed_pair<CMMsl::WorkoutRecorderWatchOrientationSettings *, std::__1::default_delete<CMMsl::WorkoutRecorderWatchOrientationSettings> >;

typedef struct unique_ptr<CMMsl::WorkoutRecorderWatchOrientationSettings, std::__1::default_delete<CMMsl::WorkoutRecorderWatchOrientationSettings> > {
	compressed_pair<CMMsl::WorkoutRecorderWatchOrientationSettings *, std::__1::default_delete<CMMsl::WorkoutRecorderWatchOrientationSettings> > __ptr_;
} unique_ptr<CMMsl::WorkoutRecorderWatchOrientationSettings, std::__1::default_delete<CMMsl::WorkoutRecorderWatchOrientationSettings> >;

typedef struct _compressed_pair<CMMsl::WorkoutRecorderRotationRate *, std::__1::default_delete<CMMsl::WorkoutRecorderRotationRate> > {
	WorkoutRecorderRotationRate __value_;
} compressed_pair<CMMsl::WorkoutRecorderRotationRate *, std::__1::default_delete<CMMsl::WorkoutRecorderRotationRate> >;

typedef struct unique_ptr<CMMsl::WorkoutRecorderRotationRate, std::__1::default_delete<CMMsl::WorkoutRecorderRotationRate> > {
	compressed_pair<CMMsl::WorkoutRecorderRotationRate *, std::__1::default_delete<CMMsl::WorkoutRecorderRotationRate> > __ptr_;
} unique_ptr<CMMsl::WorkoutRecorderRotationRate, std::__1::default_delete<CMMsl::WorkoutRecorderRotationRate> >;

typedef struct _compressed_pair<CMMsl::WorkoutRecorderPressure *, std::__1::default_delete<CMMsl::WorkoutRecorderPressure> > {
	WorkoutRecorderPressure __value_;
} compressed_pair<CMMsl::WorkoutRecorderPressure *, std::__1::default_delete<CMMsl::WorkoutRecorderPressure> >;

typedef struct unique_ptr<CMMsl::WorkoutRecorderPressure, std::__1::default_delete<CMMsl::WorkoutRecorderPressure> > {
	compressed_pair<CMMsl::WorkoutRecorderPressure *, std::__1::default_delete<CMMsl::WorkoutRecorderPressure> > __ptr_;
} unique_ptr<CMMsl::WorkoutRecorderPressure, std::__1::default_delete<CMMsl::WorkoutRecorderPressure> >;

typedef struct _compressed_pair<CMMsl::WorkoutRecorderOdometer *, std::__1::default_delete<CMMsl::WorkoutRecorderOdometer> > {
	WorkoutRecorderOdometer __value_;
} compressed_pair<CMMsl::WorkoutRecorderOdometer *, std::__1::default_delete<CMMsl::WorkoutRecorderOdometer> >;

typedef struct unique_ptr<CMMsl::WorkoutRecorderOdometer, std::__1::default_delete<CMMsl::WorkoutRecorderOdometer> > {
	compressed_pair<CMMsl::WorkoutRecorderOdometer *, std::__1::default_delete<CMMsl::WorkoutRecorderOdometer> > __ptr_;
} unique_ptr<CMMsl::WorkoutRecorderOdometer, std::__1::default_delete<CMMsl::WorkoutRecorderOdometer> >;

typedef struct _compressed_pair<CMMsl::WorkoutRecorderHeartRate *, std::__1::default_delete<CMMsl::WorkoutRecorderHeartRate> > {
	WorkoutRecorderHeartRate __value_;
} compressed_pair<CMMsl::WorkoutRecorderHeartRate *, std::__1::default_delete<CMMsl::WorkoutRecorderHeartRate> >;

typedef struct unique_ptr<CMMsl::WorkoutRecorderHeartRate, std::__1::default_delete<CMMsl::WorkoutRecorderHeartRate> > {
	compressed_pair<CMMsl::WorkoutRecorderHeartRate *, std::__1::default_delete<CMMsl::WorkoutRecorderHeartRate> > __ptr_;
} unique_ptr<CMMsl::WorkoutRecorderHeartRate, std::__1::default_delete<CMMsl::WorkoutRecorderHeartRate> >;

typedef struct _compressed_pair<CMMsl::WorkoutRecorderHealthKitInfo *, std::__1::default_delete<CMMsl::WorkoutRecorderHealthKitInfo> > {
	WorkoutRecorderHealthKitInfo __value_;
} compressed_pair<CMMsl::WorkoutRecorderHealthKitInfo *, std::__1::default_delete<CMMsl::WorkoutRecorderHealthKitInfo> >;

typedef struct unique_ptr<CMMsl::WorkoutRecorderHealthKitInfo, std::__1::default_delete<CMMsl::WorkoutRecorderHealthKitInfo> > {
	compressed_pair<CMMsl::WorkoutRecorderHealthKitInfo *, std::__1::default_delete<CMMsl::WorkoutRecorderHealthKitInfo> > __ptr_;
} unique_ptr<CMMsl::WorkoutRecorderHealthKitInfo, std::__1::default_delete<CMMsl::WorkoutRecorderHealthKitInfo> >;

typedef struct _compressed_pair<CMMsl::WorkoutRecorderElevation *, std::__1::default_delete<CMMsl::WorkoutRecorderElevation> > {
	WorkoutRecorderElevation __value_;
} compressed_pair<CMMsl::WorkoutRecorderElevation *, std::__1::default_delete<CMMsl::WorkoutRecorderElevation> >;

typedef struct unique_ptr<CMMsl::WorkoutRecorderElevation, std::__1::default_delete<CMMsl::WorkoutRecorderElevation> > {
	compressed_pair<CMMsl::WorkoutRecorderElevation *, std::__1::default_delete<CMMsl::WorkoutRecorderElevation> > __ptr_;
} unique_ptr<CMMsl::WorkoutRecorderElevation, std::__1::default_delete<CMMsl::WorkoutRecorderElevation> >;

typedef struct _compressed_pair<CMMsl::WorkoutRecorderBodyMetrics *, std::__1::default_delete<CMMsl::WorkoutRecorderBodyMetrics> > {
	WorkoutRecorderBodyMetrics __value_;
} compressed_pair<CMMsl::WorkoutRecorderBodyMetrics *, std::__1::default_delete<CMMsl::WorkoutRecorderBodyMetrics> >;

typedef struct unique_ptr<CMMsl::WorkoutRecorderBodyMetrics, std::__1::default_delete<CMMsl::WorkoutRecorderBodyMetrics> > {
	compressed_pair<CMMsl::WorkoutRecorderBodyMetrics *, std::__1::default_delete<CMMsl::WorkoutRecorderBodyMetrics> > __ptr_;
} unique_ptr<CMMsl::WorkoutRecorderBodyMetrics, std::__1::default_delete<CMMsl::WorkoutRecorderBodyMetrics> >;

typedef struct _compressed_pair<CMMsl::WorkoutRecorderAccel800 *, std::__1::default_delete<CMMsl::WorkoutRecorderAccel800> > {
	WorkoutRecorderAccel800 __value_;
} compressed_pair<CMMsl::WorkoutRecorderAccel800 *, std::__1::default_delete<CMMsl::WorkoutRecorderAccel800> >;

typedef struct unique_ptr<CMMsl::WorkoutRecorderAccel800, std::__1::default_delete<CMMsl::WorkoutRecorderAccel800> > {
	compressed_pair<CMMsl::WorkoutRecorderAccel800 *, std::__1::default_delete<CMMsl::WorkoutRecorderAccel800> > __ptr_;
} unique_ptr<CMMsl::WorkoutRecorderAccel800, std::__1::default_delete<CMMsl::WorkoutRecorderAccel800> >;

typedef struct _compressed_pair<CMMsl::WorkoutRecorderAccel *, std::__1::default_delete<CMMsl::WorkoutRecorderAccel> > {
	WorkoutRecorderAccel __value_;
} compressed_pair<CMMsl::WorkoutRecorderAccel *, std::__1::default_delete<CMMsl::WorkoutRecorderAccel> >;

typedef struct unique_ptr<CMMsl::WorkoutRecorderAccel, std::__1::default_delete<CMMsl::WorkoutRecorderAccel> > {
	compressed_pair<CMMsl::WorkoutRecorderAccel *, std::__1::default_delete<CMMsl::WorkoutRecorderAccel> > __ptr_;
} unique_ptr<CMMsl::WorkoutRecorderAccel, std::__1::default_delete<CMMsl::WorkoutRecorderAccel> >;

typedef struct _compressed_pair<CMMsl::WorkoutRecorderALSData *, std::__1::default_delete<CMMsl::WorkoutRecorderALSData> > {
	WorkoutRecorderALSData __value_;
} compressed_pair<CMMsl::WorkoutRecorderALSData *, std::__1::default_delete<CMMsl::WorkoutRecorderALSData> >;

typedef struct unique_ptr<CMMsl::WorkoutRecorderALSData, std::__1::default_delete<CMMsl::WorkoutRecorderALSData> > {
	compressed_pair<CMMsl::WorkoutRecorderALSData *, std::__1::default_delete<CMMsl::WorkoutRecorderALSData> > __ptr_;
} unique_ptr<CMMsl::WorkoutRecorderALSData, std::__1::default_delete<CMMsl::WorkoutRecorderALSData> >;

typedef struct _compressed_pair<CMMsl::WorkoutEvent *, std::__1::default_delete<CMMsl::WorkoutEvent> > {
	WorkoutEvent __value_;
} compressed_pair<CMMsl::WorkoutEvent *, std::__1::default_delete<CMMsl::WorkoutEvent> >;

typedef struct unique_ptr<CMMsl::WorkoutEvent, std::__1::default_delete<CMMsl::WorkoutEvent> > {
	compressed_pair<CMMsl::WorkoutEvent *, std::__1::default_delete<CMMsl::WorkoutEvent> > __ptr_;
} unique_ptr<CMMsl::WorkoutEvent, std::__1::default_delete<CMMsl::WorkoutEvent> >;

typedef struct _compressed_pair<CMMsl::WifiScanResults *, std::__1::default_delete<CMMsl::WifiScanResults> > {
	WifiScanResults __value_;
} compressed_pair<CMMsl::WifiScanResults *, std::__1::default_delete<CMMsl::WifiScanResults> >;

typedef struct unique_ptr<CMMsl::WifiScanResults, std::__1::default_delete<CMMsl::WifiScanResults> > {
	compressed_pair<CMMsl::WifiScanResults *, std::__1::default_delete<CMMsl::WifiScanResults> > __ptr_;
} unique_ptr<CMMsl::WifiScanResults, std::__1::default_delete<CMMsl::WifiScanResults> >;

typedef struct _compressed_pair<CMMsl::WatchOrientationSettings *, std::__1::default_delete<CMMsl::WatchOrientationSettings> > {
	WatchOrientationSettings __value_;
} compressed_pair<CMMsl::WatchOrientationSettings *, std::__1::default_delete<CMMsl::WatchOrientationSettings> >;

typedef struct unique_ptr<CMMsl::WatchOrientationSettings, std::__1::default_delete<CMMsl::WatchOrientationSettings> > {
	compressed_pair<CMMsl::WatchOrientationSettings *, std::__1::default_delete<CMMsl::WatchOrientationSettings> > __ptr_;
} unique_ptr<CMMsl::WatchOrientationSettings, std::__1::default_delete<CMMsl::WatchOrientationSettings> >;

typedef struct _compressed_pair<CMMsl::WatchOnWristState *, std::__1::default_delete<CMMsl::WatchOnWristState> > {
	WatchOnWristState __value_;
} compressed_pair<CMMsl::WatchOnWristState *, std::__1::default_delete<CMMsl::WatchOnWristState> >;

typedef struct unique_ptr<CMMsl::WatchOnWristState, std::__1::default_delete<CMMsl::WatchOnWristState> > {
	compressed_pair<CMMsl::WatchOnWristState *, std::__1::default_delete<CMMsl::WatchOnWristState> > __ptr_;
} unique_ptr<CMMsl::WatchOnWristState, std::__1::default_delete<CMMsl::WatchOnWristState> >;

typedef struct _compressed_pair<CMMsl::VO2MaxInput *, std::__1::default_delete<CMMsl::VO2MaxInput> > {
	VO2MaxInput __value_;
} compressed_pair<CMMsl::VO2MaxInput *, std::__1::default_delete<CMMsl::VO2MaxInput> >;

typedef struct unique_ptr<CMMsl::VO2MaxInput, std::__1::default_delete<CMMsl::VO2MaxInput> > {
	compressed_pair<CMMsl::VO2MaxInput *, std::__1::default_delete<CMMsl::VO2MaxInput> > __ptr_;
} unique_ptr<CMMsl::VO2MaxInput, std::__1::default_delete<CMMsl::VO2MaxInput> >;

typedef struct _compressed_pair<CMMsl::VisionCompassBias *, std::__1::default_delete<CMMsl::VisionCompassBias> > {
	VisionCompassBias __value_;
} compressed_pair<CMMsl::VisionCompassBias *, std::__1::default_delete<CMMsl::VisionCompassBias> >;

typedef struct unique_ptr<CMMsl::VisionCompassBias, std::__1::default_delete<CMMsl::VisionCompassBias> > {
	compressed_pair<CMMsl::VisionCompassBias *, std::__1::default_delete<CMMsl::VisionCompassBias> > __ptr_;
} unique_ptr<CMMsl::VisionCompassBias, std::__1::default_delete<CMMsl::VisionCompassBias> >;

typedef struct _compressed_pair<CMMsl::VIOPose *, std::__1::default_delete<CMMsl::VIOPose> > {
	VIOPose __value_;
} compressed_pair<CMMsl::VIOPose *, std::__1::default_delete<CMMsl::VIOPose> >;

typedef struct unique_ptr<CMMsl::VIOPose, std::__1::default_delete<CMMsl::VIOPose> > {
	compressed_pair<CMMsl::VIOPose *, std::__1::default_delete<CMMsl::VIOPose> > __ptr_;
} unique_ptr<CMMsl::VIOPose, std::__1::default_delete<CMMsl::VIOPose> >;

typedef struct _compressed_pair<CMMsl::VIOEstimation *, std::__1::default_delete<CMMsl::VIOEstimation> > {
	VIOEstimation __value_;
} compressed_pair<CMMsl::VIOEstimation *, std::__1::default_delete<CMMsl::VIOEstimation> >;

typedef struct unique_ptr<CMMsl::VIOEstimation, std::__1::default_delete<CMMsl::VIOEstimation> > {
	compressed_pair<CMMsl::VIOEstimation *, std::__1::default_delete<CMMsl::VIOEstimation> > __ptr_;
} unique_ptr<CMMsl::VIOEstimation, std::__1::default_delete<CMMsl::VIOEstimation> >;

typedef struct _compressed_pair<CMMsl::VibrationEvent *, std::__1::default_delete<CMMsl::VibrationEvent> > {
	VibrationEvent __value_;
} compressed_pair<CMMsl::VibrationEvent *, std::__1::default_delete<CMMsl::VibrationEvent> >;

typedef struct unique_ptr<CMMsl::VibrationEvent, std::__1::default_delete<CMMsl::VibrationEvent> > {
	compressed_pair<CMMsl::VibrationEvent *, std::__1::default_delete<CMMsl::VibrationEvent> > __ptr_;
} unique_ptr<CMMsl::VibrationEvent, std::__1::default_delete<CMMsl::VibrationEvent> >;

typedef struct _compressed_pair<CMMsl::UserStudyEvent *, std::__1::default_delete<CMMsl::UserStudyEvent> > {
	UserStudyEvent __value_;
} compressed_pair<CMMsl::UserStudyEvent *, std::__1::default_delete<CMMsl::UserStudyEvent> >;

typedef struct unique_ptr<CMMsl::UserStudyEvent, std::__1::default_delete<CMMsl::UserStudyEvent> > {
	compressed_pair<CMMsl::UserStudyEvent *, std::__1::default_delete<CMMsl::UserStudyEvent> > __ptr_;
} unique_ptr<CMMsl::UserStudyEvent, std::__1::default_delete<CMMsl::UserStudyEvent> >;

typedef struct _compressed_pair<CMMsl::TouchOscarEmu *, std::__1::default_delete<CMMsl::TouchOscarEmu> > {
	TouchOscarEmu __value_;
} compressed_pair<CMMsl::TouchOscarEmu *, std::__1::default_delete<CMMsl::TouchOscarEmu> >;

typedef struct unique_ptr<CMMsl::TouchOscarEmu, std::__1::default_delete<CMMsl::TouchOscarEmu> > {
	compressed_pair<CMMsl::TouchOscarEmu *, std::__1::default_delete<CMMsl::TouchOscarEmu> > __ptr_;
} unique_ptr<CMMsl::TouchOscarEmu, std::__1::default_delete<CMMsl::TouchOscarEmu> >;

typedef struct _compressed_pair<CMMsl::TempestPoCListenerOrientation *, std::__1::default_delete<CMMsl::TempestPoCListenerOrientation> > {
	TempestPoCListenerOrientation __value_;
} compressed_pair<CMMsl::TempestPoCListenerOrientation *, std::__1::default_delete<CMMsl::TempestPoCListenerOrientation> >;

typedef struct unique_ptr<CMMsl::TempestPoCListenerOrientation, std::__1::default_delete<CMMsl::TempestPoCListenerOrientation> > {
	compressed_pair<CMMsl::TempestPoCListenerOrientation *, std::__1::default_delete<CMMsl::TempestPoCListenerOrientation> > __ptr_;
} unique_ptr<CMMsl::TempestPoCListenerOrientation, std::__1::default_delete<CMMsl::TempestPoCListenerOrientation> >;

typedef struct _compressed_pair<CMMsl::TempestPoCAuxiliaryDeviceMotion *, std::__1::default_delete<CMMsl::TempestPoCAuxiliaryDeviceMotion> > {
	TempestPoCAuxiliaryDeviceMotion __value_;
} compressed_pair<CMMsl::TempestPoCAuxiliaryDeviceMotion *, std::__1::default_delete<CMMsl::TempestPoCAuxiliaryDeviceMotion> >;

typedef struct unique_ptr<CMMsl::TempestPoCAuxiliaryDeviceMotion, std::__1::default_delete<CMMsl::TempestPoCAuxiliaryDeviceMotion> > {
	compressed_pair<CMMsl::TempestPoCAuxiliaryDeviceMotion *, std::__1::default_delete<CMMsl::TempestPoCAuxiliaryDeviceMotion> > __ptr_;
} unique_ptr<CMMsl::TempestPoCAuxiliaryDeviceMotion, std::__1::default_delete<CMMsl::TempestPoCAuxiliaryDeviceMotion> >;

typedef struct _compressed_pair<CMMsl::TapDetect *, std::__1::default_delete<CMMsl::TapDetect> > {
	TapDetect __value_;
} compressed_pair<CMMsl::TapDetect *, std::__1::default_delete<CMMsl::TapDetect> >;

typedef struct unique_ptr<CMMsl::TapDetect, std::__1::default_delete<CMMsl::TapDetect> > {
	compressed_pair<CMMsl::TapDetect *, std::__1::default_delete<CMMsl::TapDetect> > __ptr_;
} unique_ptr<CMMsl::TapDetect, std::__1::default_delete<CMMsl::TapDetect> >;

typedef struct _compressed_pair<CMMsl::TapAccept *, std::__1::default_delete<CMMsl::TapAccept> > {
	TapAccept __value_;
} compressed_pair<CMMsl::TapAccept *, std::__1::default_delete<CMMsl::TapAccept> >;

typedef struct unique_ptr<CMMsl::TapAccept, std::__1::default_delete<CMMsl::TapAccept> > {
	compressed_pair<CMMsl::TapAccept *, std::__1::default_delete<CMMsl::TapAccept> > __ptr_;
} unique_ptr<CMMsl::TapAccept, std::__1::default_delete<CMMsl::TapAccept> >;

typedef struct _compressed_pair<CMMsl::StrideCalBin *, std::__1::default_delete<CMMsl::StrideCalBin> > {
	StrideCalBin __value_;
} compressed_pair<CMMsl::StrideCalBin *, std::__1::default_delete<CMMsl::StrideCalBin> >;

typedef struct unique_ptr<CMMsl::StrideCalBin, std::__1::default_delete<CMMsl::StrideCalBin> > {
	compressed_pair<CMMsl::StrideCalBin *, std::__1::default_delete<CMMsl::StrideCalBin> > __ptr_;
} unique_ptr<CMMsl::StrideCalBin, std::__1::default_delete<CMMsl::StrideCalBin> >;

typedef struct _compressed_pair<CMMsl::StreamingHeartRateData *, std::__1::default_delete<CMMsl::StreamingHeartRateData> > {
	StreamingHeartRateData __value_;
} compressed_pair<CMMsl::StreamingHeartRateData *, std::__1::default_delete<CMMsl::StreamingHeartRateData> >;

typedef struct unique_ptr<CMMsl::StreamingHeartRateData, std::__1::default_delete<CMMsl::StreamingHeartRateData> > {
	compressed_pair<CMMsl::StreamingHeartRateData *, std::__1::default_delete<CMMsl::StreamingHeartRateData> > __ptr_;
} unique_ptr<CMMsl::StreamingHeartRateData, std::__1::default_delete<CMMsl::StreamingHeartRateData> >;

typedef struct _compressed_pair<CMMsl::StepCountEntry *, std::__1::default_delete<CMMsl::StepCountEntry> > {
	StepCountEntry __value_;
} compressed_pair<CMMsl::StepCountEntry *, std::__1::default_delete<CMMsl::StepCountEntry> >;

typedef struct unique_ptr<CMMsl::StepCountEntry, std::__1::default_delete<CMMsl::StepCountEntry> > {
	compressed_pair<CMMsl::StepCountEntry *, std::__1::default_delete<CMMsl::StepCountEntry> > __ptr_;
} unique_ptr<CMMsl::StepCountEntry, std::__1::default_delete<CMMsl::StepCountEntry> >;

typedef struct _compressed_pair<CMMsl::StepCadenceToStrideLengthBin *, std::__1::default_delete<CMMsl::StepCadenceToStrideLengthBin> > {
	StepCadenceToStrideLengthBin __value_;
} compressed_pair<CMMsl::StepCadenceToStrideLengthBin *, std::__1::default_delete<CMMsl::StepCadenceToStrideLengthBin> >;

typedef struct unique_ptr<CMMsl::StepCadenceToStrideLengthBin, std::__1::default_delete<CMMsl::StepCadenceToStrideLengthBin> > {
	compressed_pair<CMMsl::StepCadenceToStrideLengthBin *, std::__1::default_delete<CMMsl::StepCadenceToStrideLengthBin> > __ptr_;
} unique_ptr<CMMsl::StepCadenceToStrideLengthBin, std::__1::default_delete<CMMsl::StepCadenceToStrideLengthBin> >;

typedef struct _compressed_pair<CMMsl::SPUPlaybackExampleMotionStateUpdate *, std::__1::default_delete<CMMsl::SPUPlaybackExampleMotionStateUpdate> > {
	SPUPlaybackExampleMotionStateUpdate __value_;
} compressed_pair<CMMsl::SPUPlaybackExampleMotionStateUpdate *, std::__1::default_delete<CMMsl::SPUPlaybackExampleMotionStateUpdate> >;

typedef struct unique_ptr<CMMsl::SPUPlaybackExampleMotionStateUpdate, std::__1::default_delete<CMMsl::SPUPlaybackExampleMotionStateUpdate> > {
	compressed_pair<CMMsl::SPUPlaybackExampleMotionStateUpdate *, std::__1::default_delete<CMMsl::SPUPlaybackExampleMotionStateUpdate> > __ptr_;
} unique_ptr<CMMsl::SPUPlaybackExampleMotionStateUpdate, std::__1::default_delete<CMMsl::SPUPlaybackExampleMotionStateUpdate> >;

typedef struct _compressed_pair<CMMsl::SPUPlaybackExampleDeviceMotion *, std::__1::default_delete<CMMsl::SPUPlaybackExampleDeviceMotion> > {
	SPUPlaybackExampleDeviceMotion __value_;
} compressed_pair<CMMsl::SPUPlaybackExampleDeviceMotion *, std::__1::default_delete<CMMsl::SPUPlaybackExampleDeviceMotion> >;

typedef struct unique_ptr<CMMsl::SPUPlaybackExampleDeviceMotion, std::__1::default_delete<CMMsl::SPUPlaybackExampleDeviceMotion> > {
	compressed_pair<CMMsl::SPUPlaybackExampleDeviceMotion *, std::__1::default_delete<CMMsl::SPUPlaybackExampleDeviceMotion> > __ptr_;
} unique_ptr<CMMsl::SPUPlaybackExampleDeviceMotion, std::__1::default_delete<CMMsl::SPUPlaybackExampleDeviceMotion> >;

typedef struct _compressed_pair<CMMsl::SignalEnvironment *, std::__1::default_delete<CMMsl::SignalEnvironment> > {
	SignalEnvironment __value_;
} compressed_pair<CMMsl::SignalEnvironment *, std::__1::default_delete<CMMsl::SignalEnvironment> >;

typedef struct unique_ptr<CMMsl::SignalEnvironment, std::__1::default_delete<CMMsl::SignalEnvironment> > {
	compressed_pair<CMMsl::SignalEnvironment *, std::__1::default_delete<CMMsl::SignalEnvironment> > __ptr_;
} unique_ptr<CMMsl::SignalEnvironment, std::__1::default_delete<CMMsl::SignalEnvironment> >;

typedef struct _compressed_pair<CMMsl::SessionOverride *, std::__1::default_delete<CMMsl::SessionOverride> > {
	SessionOverride __value_;
} compressed_pair<CMMsl::SessionOverride *, std::__1::default_delete<CMMsl::SessionOverride> >;

typedef struct unique_ptr<CMMsl::SessionOverride, std::__1::default_delete<CMMsl::SessionOverride> > {
	compressed_pair<CMMsl::SessionOverride *, std::__1::default_delete<CMMsl::SessionOverride> > __ptr_;
} unique_ptr<CMMsl::SessionOverride, std::__1::default_delete<CMMsl::SessionOverride> >;

typedef struct _compressed_pair<CMMsl::RotationRate *, std::__1::default_delete<CMMsl::RotationRate> > {
	RotationRate __value_;
} compressed_pair<CMMsl::RotationRate *, std::__1::default_delete<CMMsl::RotationRate> >;

typedef struct unique_ptr<CMMsl::RotationRate, std::__1::default_delete<CMMsl::RotationRate> > {
	compressed_pair<CMMsl::RotationRate *, std::__1::default_delete<CMMsl::RotationRate> > __ptr_;
} unique_ptr<CMMsl::RotationRate, std::__1::default_delete<CMMsl::RotationRate> >;

typedef struct _compressed_pair<CMMsl::RelativeGravityCorrection *, std::__1::default_delete<CMMsl::RelativeGravityCorrection> > {
	RelativeGravityCorrection __value_;
} compressed_pair<CMMsl::RelativeGravityCorrection *, std::__1::default_delete<CMMsl::RelativeGravityCorrection> >;

typedef struct unique_ptr<CMMsl::RelativeGravityCorrection, std::__1::default_delete<CMMsl::RelativeGravityCorrection> > {
	compressed_pair<CMMsl::RelativeGravityCorrection *, std::__1::default_delete<CMMsl::RelativeGravityCorrection> > __ptr_;
} unique_ptr<CMMsl::RelativeGravityCorrection, std::__1::default_delete<CMMsl::RelativeGravityCorrection> >;

typedef struct _compressed_pair<CMMsl::RelativeGravityConstraints *, std::__1::default_delete<CMMsl::RelativeGravityConstraints> > {
	RelativeGravityConstraints __value_;
} compressed_pair<CMMsl::RelativeGravityConstraints *, std::__1::default_delete<CMMsl::RelativeGravityConstraints> >;

typedef struct unique_ptr<CMMsl::RelativeGravityConstraints, std::__1::default_delete<CMMsl::RelativeGravityConstraints> > {
	compressed_pair<CMMsl::RelativeGravityConstraints *, std::__1::default_delete<CMMsl::RelativeGravityConstraints> > __ptr_;
} unique_ptr<CMMsl::RelativeGravityConstraints, std::__1::default_delete<CMMsl::RelativeGravityConstraints> >;

typedef struct _compressed_pair<CMMsl::RelativeDeviceMotionInternal *, std::__1::default_delete<CMMsl::RelativeDeviceMotionInternal> > {
	RelativeDeviceMotionInternal __value_;
} compressed_pair<CMMsl::RelativeDeviceMotionInternal *, std::__1::default_delete<CMMsl::RelativeDeviceMotionInternal> >;

typedef struct unique_ptr<CMMsl::RelativeDeviceMotionInternal, std::__1::default_delete<CMMsl::RelativeDeviceMotionInternal> > {
	compressed_pair<CMMsl::RelativeDeviceMotionInternal *, std::__1::default_delete<CMMsl::RelativeDeviceMotionInternal> > __ptr_;
} unique_ptr<CMMsl::RelativeDeviceMotionInternal, std::__1::default_delete<CMMsl::RelativeDeviceMotionInternal> >;

typedef struct _compressed_pair<CMMsl::RelativeDeviceMotionCorrelatedMotion *, std::__1::default_delete<CMMsl::RelativeDeviceMotionCorrelatedMotion> > {
	RelativeDeviceMotionCorrelatedMotion __value_;
} compressed_pair<CMMsl::RelativeDeviceMotionCorrelatedMotion *, std::__1::default_delete<CMMsl::RelativeDeviceMotionCorrelatedMotion> >;

typedef struct unique_ptr<CMMsl::RelativeDeviceMotionCorrelatedMotion, std::__1::default_delete<CMMsl::RelativeDeviceMotionCorrelatedMotion> > {
	compressed_pair<CMMsl::RelativeDeviceMotionCorrelatedMotion *, std::__1::default_delete<CMMsl::RelativeDeviceMotionCorrelatedMotion> > __ptr_;
} unique_ptr<CMMsl::RelativeDeviceMotionCorrelatedMotion, std::__1::default_delete<CMMsl::RelativeDeviceMotionCorrelatedMotion> >;

typedef struct _compressed_pair<CMMsl::Prox *, std::__1::default_delete<CMMsl::Prox> > {
	Prox __value_;
} compressed_pair<CMMsl::Prox *, std::__1::default_delete<CMMsl::Prox> >;

typedef struct unique_ptr<CMMsl::Prox, std::__1::default_delete<CMMsl::Prox> > {
	compressed_pair<CMMsl::Prox *, std::__1::default_delete<CMMsl::Prox> > __ptr_;
} unique_ptr<CMMsl::Prox, std::__1::default_delete<CMMsl::Prox> >;

typedef struct _compressed_pair<CMMsl::PressureOscarEmu *, std::__1::default_delete<CMMsl::PressureOscarEmu> > {
	PressureOscarEmu __value_;
} compressed_pair<CMMsl::PressureOscarEmu *, std::__1::default_delete<CMMsl::PressureOscarEmu> >;

typedef struct unique_ptr<CMMsl::PressureOscarEmu, std::__1::default_delete<CMMsl::PressureOscarEmu> > {
	compressed_pair<CMMsl::PressureOscarEmu *, std::__1::default_delete<CMMsl::PressureOscarEmu> > __ptr_;
} unique_ptr<CMMsl::PressureOscarEmu, std::__1::default_delete<CMMsl::PressureOscarEmu> >;

typedef struct _compressed_pair<CMMsl::PressureGps *, std::__1::default_delete<CMMsl::PressureGps> > {
	PressureGps __value_;
} compressed_pair<CMMsl::PressureGps *, std::__1::default_delete<CMMsl::PressureGps> >;

typedef struct unique_ptr<CMMsl::PressureGps, std::__1::default_delete<CMMsl::PressureGps> > {
	compressed_pair<CMMsl::PressureGps *, std::__1::default_delete<CMMsl::PressureGps> > __ptr_;
} unique_ptr<CMMsl::PressureGps, std::__1::default_delete<CMMsl::PressureGps> >;

typedef struct _compressed_pair<CMMsl::PressureFilteredNoTemperature *, std::__1::default_delete<CMMsl::PressureFilteredNoTemperature> > {
	PressureFilteredNoTemperature __value_;
} compressed_pair<CMMsl::PressureFilteredNoTemperature *, std::__1::default_delete<CMMsl::PressureFilteredNoTemperature> >;

typedef struct unique_ptr<CMMsl::PressureFilteredNoTemperature, std::__1::default_delete<CMMsl::PressureFilteredNoTemperature> > {
	compressed_pair<CMMsl::PressureFilteredNoTemperature *, std::__1::default_delete<CMMsl::PressureFilteredNoTemperature> > __ptr_;
} unique_ptr<CMMsl::PressureFilteredNoTemperature, std::__1::default_delete<CMMsl::PressureFilteredNoTemperature> >;

typedef struct _compressed_pair<CMMsl::PressureFiltered *, std::__1::default_delete<CMMsl::PressureFiltered> > {
	PressureFiltered __value_;
} compressed_pair<CMMsl::PressureFiltered *, std::__1::default_delete<CMMsl::PressureFiltered> >;

typedef struct unique_ptr<CMMsl::PressureFiltered, std::__1::default_delete<CMMsl::PressureFiltered> > {
	compressed_pair<CMMsl::PressureFiltered *, std::__1::default_delete<CMMsl::PressureFiltered> > __ptr_;
} unique_ptr<CMMsl::PressureFiltered, std::__1::default_delete<CMMsl::PressureFiltered> >;

typedef struct _compressed_pair<CMMsl::Pressure *, std::__1::default_delete<CMMsl::Pressure> > {
	Pressure __value_;
} compressed_pair<CMMsl::Pressure *, std::__1::default_delete<CMMsl::Pressure> >;

typedef struct unique_ptr<CMMsl::Pressure, std::__1::default_delete<CMMsl::Pressure> > {
	compressed_pair<CMMsl::Pressure *, std::__1::default_delete<CMMsl::Pressure> > __ptr_;
} unique_ptr<CMMsl::Pressure, std::__1::default_delete<CMMsl::Pressure> >;

typedef struct _compressed_pair<CMMsl::PredictedRelativeDeviceMotion *, std::__1::default_delete<CMMsl::PredictedRelativeDeviceMotion> > {
	PredictedRelativeDeviceMotion __value_;
} compressed_pair<CMMsl::PredictedRelativeDeviceMotion *, std::__1::default_delete<CMMsl::PredictedRelativeDeviceMotion> >;

typedef struct unique_ptr<CMMsl::PredictedRelativeDeviceMotion, std::__1::default_delete<CMMsl::PredictedRelativeDeviceMotion> > {
	compressed_pair<CMMsl::PredictedRelativeDeviceMotion *, std::__1::default_delete<CMMsl::PredictedRelativeDeviceMotion> > __ptr_;
} unique_ptr<CMMsl::PredictedRelativeDeviceMotion, std::__1::default_delete<CMMsl::PredictedRelativeDeviceMotion> >;

typedef struct _compressed_pair<CMMsl::PearlAttitude *, std::__1::default_delete<CMMsl::PearlAttitude> > {
	PearlAttitude __value_;
} compressed_pair<CMMsl::PearlAttitude *, std::__1::default_delete<CMMsl::PearlAttitude> >;

typedef struct unique_ptr<CMMsl::PearlAttitude, std::__1::default_delete<CMMsl::PearlAttitude> > {
	compressed_pair<CMMsl::PearlAttitude *, std::__1::default_delete<CMMsl::PearlAttitude> > __ptr_;
} unique_ptr<CMMsl::PearlAttitude, std::__1::default_delete<CMMsl::PearlAttitude> >;

typedef struct _compressed_pair<CMMsl::OnsetHeartRateData *, std::__1::default_delete<CMMsl::OnsetHeartRateData> > {
	OnsetHeartRateData __value_;
} compressed_pair<CMMsl::OnsetHeartRateData *, std::__1::default_delete<CMMsl::OnsetHeartRateData> >;

typedef struct unique_ptr<CMMsl::OnsetHeartRateData, std::__1::default_delete<CMMsl::OnsetHeartRateData> > {
	compressed_pair<CMMsl::OnsetHeartRateData *, std::__1::default_delete<CMMsl::OnsetHeartRateData> > __ptr_;
} unique_ptr<CMMsl::OnsetHeartRateData, std::__1::default_delete<CMMsl::OnsetHeartRateData> >;

typedef struct _compressed_pair<CMMsl::OdometerWithAltitude *, std::__1::default_delete<CMMsl::OdometerWithAltitude> > {
	OdometerWithAltitude __value_;
} compressed_pair<CMMsl::OdometerWithAltitude *, std::__1::default_delete<CMMsl::OdometerWithAltitude> >;

typedef struct unique_ptr<CMMsl::OdometerWithAltitude, std::__1::default_delete<CMMsl::OdometerWithAltitude> > {
	compressed_pair<CMMsl::OdometerWithAltitude *, std::__1::default_delete<CMMsl::OdometerWithAltitude> > __ptr_;
} unique_ptr<CMMsl::OdometerWithAltitude, std::__1::default_delete<CMMsl::OdometerWithAltitude> >;

typedef struct _compressed_pair<CMMsl::Odometer *, std::__1::default_delete<CMMsl::Odometer> > {
	Odometer __value_;
} compressed_pair<CMMsl::Odometer *, std::__1::default_delete<CMMsl::Odometer> >;

typedef struct unique_ptr<CMMsl::Odometer, std::__1::default_delete<CMMsl::Odometer> > {
	compressed_pair<CMMsl::Odometer *, std::__1::default_delete<CMMsl::Odometer> > __ptr_;
} unique_ptr<CMMsl::Odometer, std::__1::default_delete<CMMsl::Odometer> >;

typedef struct _compressed_pair<CMMsl::NonlinearBiasFit *, std::__1::default_delete<CMMsl::NonlinearBiasFit> > {
	NonlinearBiasFit __value_;
} compressed_pair<CMMsl::NonlinearBiasFit *, std::__1::default_delete<CMMsl::NonlinearBiasFit> >;

typedef struct unique_ptr<CMMsl::NonlinearBiasFit, std::__1::default_delete<CMMsl::NonlinearBiasFit> > {
	compressed_pair<CMMsl::NonlinearBiasFit *, std::__1::default_delete<CMMsl::NonlinearBiasFit> > __ptr_;
} unique_ptr<CMMsl::NonlinearBiasFit, std::__1::default_delete<CMMsl::NonlinearBiasFit> >;

typedef struct _compressed_pair<CMMsl::NatalieData *, std::__1::default_delete<CMMsl::NatalieData> > {
	NatalieData __value_;
} compressed_pair<CMMsl::NatalieData *, std::__1::default_delete<CMMsl::NatalieData> >;

typedef struct unique_ptr<CMMsl::NatalieData, std::__1::default_delete<CMMsl::NatalieData> > {
	compressed_pair<CMMsl::NatalieData *, std::__1::default_delete<CMMsl::NatalieData> > __ptr_;
} unique_ptr<CMMsl::NatalieData, std::__1::default_delete<CMMsl::NatalieData> >;

typedef struct _compressed_pair<CMMsl::MovementStatsSignal *, std::__1::default_delete<CMMsl::MovementStatsSignal> > {
	MovementStatsSignal __value_;
} compressed_pair<CMMsl::MovementStatsSignal *, std::__1::default_delete<CMMsl::MovementStatsSignal> >;

typedef struct unique_ptr<CMMsl::MovementStatsSignal, std::__1::default_delete<CMMsl::MovementStatsSignal> > {
	compressed_pair<CMMsl::MovementStatsSignal *, std::__1::default_delete<CMMsl::MovementStatsSignal> > __ptr_;
} unique_ptr<CMMsl::MovementStatsSignal, std::__1::default_delete<CMMsl::MovementStatsSignal> >;

typedef struct _compressed_pair<CMMsl::MovementStatsGravityProjection *, std::__1::default_delete<CMMsl::MovementStatsGravityProjection> > {
	MovementStatsGravityProjection __value_;
} compressed_pair<CMMsl::MovementStatsGravityProjection *, std::__1::default_delete<CMMsl::MovementStatsGravityProjection> >;

typedef struct unique_ptr<CMMsl::MovementStatsGravityProjection, std::__1::default_delete<CMMsl::MovementStatsGravityProjection> > {
	compressed_pair<CMMsl::MovementStatsGravityProjection *, std::__1::default_delete<CMMsl::MovementStatsGravityProjection> > __ptr_;
} unique_ptr<CMMsl::MovementStatsGravityProjection, std::__1::default_delete<CMMsl::MovementStatsGravityProjection> >;

typedef struct _compressed_pair<CMMsl::MovementStats *, std::__1::default_delete<CMMsl::MovementStats> > {
	MovementStats __value_;
} compressed_pair<CMMsl::MovementStats *, std::__1::default_delete<CMMsl::MovementStats> >;

typedef struct unique_ptr<CMMsl::MovementStats, std::__1::default_delete<CMMsl::MovementStats> > {
	compressed_pair<CMMsl::MovementStats *, std::__1::default_delete<CMMsl::MovementStats> > __ptr_;
} unique_ptr<CMMsl::MovementStats, std::__1::default_delete<CMMsl::MovementStats> >;

typedef struct _compressed_pair<CMMsl::MotionWifiLocation *, std::__1::default_delete<CMMsl::MotionWifiLocation> > {
	MotionWifiLocation __value_;
} compressed_pair<CMMsl::MotionWifiLocation *, std::__1::default_delete<CMMsl::MotionWifiLocation> >;

typedef struct unique_ptr<CMMsl::MotionWifiLocation, std::__1::default_delete<CMMsl::MotionWifiLocation> > {
	compressed_pair<CMMsl::MotionWifiLocation *, std::__1::default_delete<CMMsl::MotionWifiLocation> > __ptr_;
} unique_ptr<CMMsl::MotionWifiLocation, std::__1::default_delete<CMMsl::MotionWifiLocation> >;

typedef struct _compressed_pair<CMMsl::MotionWifiAssociation *, std::__1::default_delete<CMMsl::MotionWifiAssociation> > {
	MotionWifiAssociation __value_;
} compressed_pair<CMMsl::MotionWifiAssociation *, std::__1::default_delete<CMMsl::MotionWifiAssociation> >;

typedef struct unique_ptr<CMMsl::MotionWifiAssociation, std::__1::default_delete<CMMsl::MotionWifiAssociation> > {
	compressed_pair<CMMsl::MotionWifiAssociation *, std::__1::default_delete<CMMsl::MotionWifiAssociation> > __ptr_;
} unique_ptr<CMMsl::MotionWifiAssociation, std::__1::default_delete<CMMsl::MotionWifiAssociation> >;

typedef struct _compressed_pair<CMMsl::MotionStateUpdate *, std::__1::default_delete<CMMsl::MotionStateUpdate> > {
	MotionStateUpdate __value_;
} compressed_pair<CMMsl::MotionStateUpdate *, std::__1::default_delete<CMMsl::MotionStateUpdate> >;

typedef struct unique_ptr<CMMsl::MotionStateUpdate, std::__1::default_delete<CMMsl::MotionStateUpdate> > {
	compressed_pair<CMMsl::MotionStateUpdate *, std::__1::default_delete<CMMsl::MotionStateUpdate> > __ptr_;
} unique_ptr<CMMsl::MotionStateUpdate, std::__1::default_delete<CMMsl::MotionStateUpdate> >;

typedef struct _compressed_pair<CMMsl::MotionLoiData *, std::__1::default_delete<CMMsl::MotionLoiData> > {
	MotionLoiData __value_;
} compressed_pair<CMMsl::MotionLoiData *, std::__1::default_delete<CMMsl::MotionLoiData> >;

typedef struct unique_ptr<CMMsl::MotionLoiData, std::__1::default_delete<CMMsl::MotionLoiData> > {
	compressed_pair<CMMsl::MotionLoiData *, std::__1::default_delete<CMMsl::MotionLoiData> > __ptr_;
} unique_ptr<CMMsl::MotionLoiData, std::__1::default_delete<CMMsl::MotionLoiData> >;

typedef struct _compressed_pair<CMMsl::MotionHint *, std::__1::default_delete<CMMsl::MotionHint> > {
	MotionHint __value_;
} compressed_pair<CMMsl::MotionHint *, std::__1::default_delete<CMMsl::MotionHint> >;

typedef struct unique_ptr<CMMsl::MotionHint, std::__1::default_delete<CMMsl::MotionHint> > {
	compressed_pair<CMMsl::MotionHint *, std::__1::default_delete<CMMsl::MotionHint> > __ptr_;
} unique_ptr<CMMsl::MotionHint, std::__1::default_delete<CMMsl::MotionHint> >;

typedef struct _compressed_pair<CMMsl::MotionGPSLocation *, std::__1::default_delete<CMMsl::MotionGPSLocation> > {
	MotionGPSLocation __value_;
} compressed_pair<CMMsl::MotionGPSLocation *, std::__1::default_delete<CMMsl::MotionGPSLocation> >;

typedef struct unique_ptr<CMMsl::MotionGPSLocation, std::__1::default_delete<CMMsl::MotionGPSLocation> > {
	compressed_pair<CMMsl::MotionGPSLocation *, std::__1::default_delete<CMMsl::MotionGPSLocation> > __ptr_;
} unique_ptr<CMMsl::MotionGPSLocation, std::__1::default_delete<CMMsl::MotionGPSLocation> >;

typedef struct _compressed_pair<CMMsl::MetsInfo *, std::__1::default_delete<CMMsl::MetsInfo> > {
	MetsInfo __value_;
} compressed_pair<CMMsl::MetsInfo *, std::__1::default_delete<CMMsl::MetsInfo> >;

typedef struct unique_ptr<CMMsl::MetsInfo, std::__1::default_delete<CMMsl::MetsInfo> > {
	compressed_pair<CMMsl::MetsInfo *, std::__1::default_delete<CMMsl::MetsInfo> > __ptr_;
} unique_ptr<CMMsl::MetsInfo, std::__1::default_delete<CMMsl::MetsInfo> >;

typedef struct _compressed_pair<CMMsl::Magnetometer *, std::__1::default_delete<CMMsl::Magnetometer> > {
	Magnetometer __value_;
} compressed_pair<CMMsl::Magnetometer *, std::__1::default_delete<CMMsl::Magnetometer> >;

typedef struct unique_ptr<CMMsl::Magnetometer, std::__1::default_delete<CMMsl::Magnetometer> > {
	compressed_pair<CMMsl::Magnetometer *, std::__1::default_delete<CMMsl::Magnetometer> > __ptr_;
} unique_ptr<CMMsl::Magnetometer, std::__1::default_delete<CMMsl::Magnetometer> >;

typedef struct _compressed_pair<CMMsl::LSLHeadingEstimation *, std::__1::default_delete<CMMsl::LSLHeadingEstimation> > {
	LSLHeadingEstimation __value_;
} compressed_pair<CMMsl::LSLHeadingEstimation *, std::__1::default_delete<CMMsl::LSLHeadingEstimation> >;

typedef struct unique_ptr<CMMsl::LSLHeadingEstimation, std::__1::default_delete<CMMsl::LSLHeadingEstimation> > {
	compressed_pair<CMMsl::LSLHeadingEstimation *, std::__1::default_delete<CMMsl::LSLHeadingEstimation> > __ptr_;
} unique_ptr<CMMsl::LSLHeadingEstimation, std::__1::default_delete<CMMsl::LSLHeadingEstimation> >;

typedef struct _compressed_pair<CMMsl::LocationOscarEmu *, std::__1::default_delete<CMMsl::LocationOscarEmu> > {
	LocationOscarEmu __value_;
} compressed_pair<CMMsl::LocationOscarEmu *, std::__1::default_delete<CMMsl::LocationOscarEmu> >;

typedef struct unique_ptr<CMMsl::LocationOscarEmu, std::__1::default_delete<CMMsl::LocationOscarEmu> > {
	compressed_pair<CMMsl::LocationOscarEmu *, std::__1::default_delete<CMMsl::LocationOscarEmu> > __ptr_;
} unique_ptr<CMMsl::LocationOscarEmu, std::__1::default_delete<CMMsl::LocationOscarEmu> >;

typedef struct _compressed_pair<CMMsl::IntersiloNSCodingData *, std::__1::default_delete<CMMsl::IntersiloNSCodingData> > {
	IntersiloNSCodingData __value_;
} compressed_pair<CMMsl::IntersiloNSCodingData *, std::__1::default_delete<CMMsl::IntersiloNSCodingData> >;

typedef struct unique_ptr<CMMsl::IntersiloNSCodingData, std::__1::default_delete<CMMsl::IntersiloNSCodingData> > {
	compressed_pair<CMMsl::IntersiloNSCodingData *, std::__1::default_delete<CMMsl::IntersiloNSCodingData> > __ptr_;
} unique_ptr<CMMsl::IntersiloNSCodingData, std::__1::default_delete<CMMsl::IntersiloNSCodingData> >;

typedef struct _compressed_pair<CMMsl::InterpolatedAccessoryAccel *, std::__1::default_delete<CMMsl::InterpolatedAccessoryAccel> > {
	InterpolatedAccessoryAccel __value_;
} compressed_pair<CMMsl::InterpolatedAccessoryAccel *, std::__1::default_delete<CMMsl::InterpolatedAccessoryAccel> >;

typedef struct unique_ptr<CMMsl::InterpolatedAccessoryAccel, std::__1::default_delete<CMMsl::InterpolatedAccessoryAccel> > {
	compressed_pair<CMMsl::InterpolatedAccessoryAccel *, std::__1::default_delete<CMMsl::InterpolatedAccessoryAccel> > __ptr_;
} unique_ptr<CMMsl::InterpolatedAccessoryAccel, std::__1::default_delete<CMMsl::InterpolatedAccessoryAccel> >;

typedef struct _compressed_pair<CMMsl::InEarTransitionEntry *, std::__1::default_delete<CMMsl::InEarTransitionEntry> > {
	InEarTransitionEntry __value_;
} compressed_pair<CMMsl::InEarTransitionEntry *, std::__1::default_delete<CMMsl::InEarTransitionEntry> >;

typedef struct unique_ptr<CMMsl::InEarTransitionEntry, std::__1::default_delete<CMMsl::InEarTransitionEntry> > {
	compressed_pair<CMMsl::InEarTransitionEntry *, std::__1::default_delete<CMMsl::InEarTransitionEntry> > __ptr_;
} unique_ptr<CMMsl::InEarTransitionEntry, std::__1::default_delete<CMMsl::InEarTransitionEntry> >;

typedef struct _compressed_pair<CMMsl::InEarTransition *, std::__1::default_delete<CMMsl::InEarTransition> > {
	InEarTransition __value_;
} compressed_pair<CMMsl::InEarTransition *, std::__1::default_delete<CMMsl::InEarTransition> >;

typedef struct unique_ptr<CMMsl::InEarTransition, std::__1::default_delete<CMMsl::InEarTransition> > {
	compressed_pair<CMMsl::InEarTransition *, std::__1::default_delete<CMMsl::InEarTransition> > __ptr_;
} unique_ptr<CMMsl::InEarTransition, std::__1::default_delete<CMMsl::InEarTransition> >;

typedef struct _compressed_pair<CMMsl::InEarSession *, std::__1::default_delete<CMMsl::InEarSession> > {
	InEarSession __value_;
} compressed_pair<CMMsl::InEarSession *, std::__1::default_delete<CMMsl::InEarSession> >;

typedef struct unique_ptr<CMMsl::InEarSession, std::__1::default_delete<CMMsl::InEarSession> > {
	compressed_pair<CMMsl::InEarSession *, std::__1::default_delete<CMMsl::InEarSession> > __ptr_;
} unique_ptr<CMMsl::InEarSession, std::__1::default_delete<CMMsl::InEarSession> >;

typedef struct _compressed_pair<CMMsl::InEarOptical *, std::__1::default_delete<CMMsl::InEarOptical> > {
	InEarOptical __value_;
} compressed_pair<CMMsl::InEarOptical *, std::__1::default_delete<CMMsl::InEarOptical> >;

typedef struct unique_ptr<CMMsl::InEarOptical, std::__1::default_delete<CMMsl::InEarOptical> > {
	compressed_pair<CMMsl::InEarOptical *, std::__1::default_delete<CMMsl::InEarOptical> > __ptr_;
} unique_ptr<CMMsl::InEarOptical, std::__1::default_delete<CMMsl::InEarOptical> >;

typedef struct _compressed_pair<CMMsl::InEarOpenLid *, std::__1::default_delete<CMMsl::InEarOpenLid> > {
	InEarOpenLid __value_;
} compressed_pair<CMMsl::InEarOpenLid *, std::__1::default_delete<CMMsl::InEarOpenLid> >;

typedef struct unique_ptr<CMMsl::InEarOpenLid, std::__1::default_delete<CMMsl::InEarOpenLid> > {
	compressed_pair<CMMsl::InEarOpenLid *, std::__1::default_delete<CMMsl::InEarOpenLid> > __ptr_;
} unique_ptr<CMMsl::InEarOpenLid, std::__1::default_delete<CMMsl::InEarOpenLid> >;

typedef struct _compressed_pair<CMMsl::InEarConstraints *, std::__1::default_delete<CMMsl::InEarConstraints> > {
	InEarConstraints __value_;
} compressed_pair<CMMsl::InEarConstraints *, std::__1::default_delete<CMMsl::InEarConstraints> >;

typedef struct unique_ptr<CMMsl::InEarConstraints, std::__1::default_delete<CMMsl::InEarConstraints> > {
	compressed_pair<CMMsl::InEarConstraints *, std::__1::default_delete<CMMsl::InEarConstraints> > __ptr_;
} unique_ptr<CMMsl::InEarConstraints, std::__1::default_delete<CMMsl::InEarConstraints> >;

typedef struct _compressed_pair<CMMsl::InEarBaselining *, std::__1::default_delete<CMMsl::InEarBaselining> > {
	InEarBaselining __value_;
} compressed_pair<CMMsl::InEarBaselining *, std::__1::default_delete<CMMsl::InEarBaselining> >;

typedef struct unique_ptr<CMMsl::InEarBaselining, std::__1::default_delete<CMMsl::InEarBaselining> > {
	compressed_pair<CMMsl::InEarBaselining *, std::__1::default_delete<CMMsl::InEarBaselining> > __ptr_;
} unique_ptr<CMMsl::InEarBaselining, std::__1::default_delete<CMMsl::InEarBaselining> >;

typedef struct _compressed_pair<CMMsl::InEarBaseline *, std::__1::default_delete<CMMsl::InEarBaseline> > {
	InEarBaseline __value_;
} compressed_pair<CMMsl::InEarBaseline *, std::__1::default_delete<CMMsl::InEarBaseline> >;

typedef struct unique_ptr<CMMsl::InEarBaseline, std::__1::default_delete<CMMsl::InEarBaseline> > {
	compressed_pair<CMMsl::InEarBaseline *, std::__1::default_delete<CMMsl::InEarBaseline> > __ptr_;
} unique_ptr<CMMsl::InEarBaseline, std::__1::default_delete<CMMsl::InEarBaseline> >;

typedef struct _compressed_pair<CMMsl::InEarAdditionalState *, std::__1::default_delete<CMMsl::InEarAdditionalState> > {
	InEarAdditionalState __value_;
} compressed_pair<CMMsl::InEarAdditionalState *, std::__1::default_delete<CMMsl::InEarAdditionalState> >;

typedef struct unique_ptr<CMMsl::InEarAdditionalState, std::__1::default_delete<CMMsl::InEarAdditionalState> > {
	compressed_pair<CMMsl::InEarAdditionalState *, std::__1::default_delete<CMMsl::InEarAdditionalState> > __ptr_;
} unique_ptr<CMMsl::InEarAdditionalState, std::__1::default_delete<CMMsl::InEarAdditionalState> >;

typedef struct _compressed_pair<CMMsl::GyroTemperature *, std::__1::default_delete<CMMsl::GyroTemperature> > {
	GyroTemperature __value_;
} compressed_pair<CMMsl::GyroTemperature *, std::__1::default_delete<CMMsl::GyroTemperature> >;

typedef struct unique_ptr<CMMsl::GyroTemperature, std::__1::default_delete<CMMsl::GyroTemperature> > {
	compressed_pair<CMMsl::GyroTemperature *, std::__1::default_delete<CMMsl::GyroTemperature> > __ptr_;
} unique_ptr<CMMsl::GyroTemperature, std::__1::default_delete<CMMsl::GyroTemperature> >;

typedef struct _compressed_pair<CMMsl::GyroOscarEmu *, std::__1::default_delete<CMMsl::GyroOscarEmu> > {
	GyroOscarEmu __value_;
} compressed_pair<CMMsl::GyroOscarEmu *, std::__1::default_delete<CMMsl::GyroOscarEmu> >;

typedef struct unique_ptr<CMMsl::GyroOscarEmu, std::__1::default_delete<CMMsl::GyroOscarEmu> > {
	compressed_pair<CMMsl::GyroOscarEmu *, std::__1::default_delete<CMMsl::GyroOscarEmu> > __ptr_;
} unique_ptr<CMMsl::GyroOscarEmu, std::__1::default_delete<CMMsl::GyroOscarEmu> >;

typedef struct _compressed_pair<CMMsl::GyroGps *, std::__1::default_delete<CMMsl::GyroGps> > {
	GyroGps __value_;
} compressed_pair<CMMsl::GyroGps *, std::__1::default_delete<CMMsl::GyroGps> >;

typedef struct unique_ptr<CMMsl::GyroGps, std::__1::default_delete<CMMsl::GyroGps> > {
	compressed_pair<CMMsl::GyroGps *, std::__1::default_delete<CMMsl::GyroGps> > __ptr_;
} unique_ptr<CMMsl::GyroGps, std::__1::default_delete<CMMsl::GyroGps> >;

typedef struct _compressed_pair<CMMsl::GyroDt *, std::__1::default_delete<CMMsl::GyroDt> > {
	GyroDt __value_;
} compressed_pair<CMMsl::GyroDt *, std::__1::default_delete<CMMsl::GyroDt> >;

typedef struct unique_ptr<CMMsl::GyroDt, std::__1::default_delete<CMMsl::GyroDt> > {
	compressed_pair<CMMsl::GyroDt *, std::__1::default_delete<CMMsl::GyroDt> > __ptr_;
} unique_ptr<CMMsl::GyroDt, std::__1::default_delete<CMMsl::GyroDt> >;

typedef struct _compressed_pair<CMMsl::GyroCompass *, std::__1::default_delete<CMMsl::GyroCompass> > {
	GyroCompass __value_;
} compressed_pair<CMMsl::GyroCompass *, std::__1::default_delete<CMMsl::GyroCompass> >;

typedef struct unique_ptr<CMMsl::GyroCompass, std::__1::default_delete<CMMsl::GyroCompass> > {
	compressed_pair<CMMsl::GyroCompass *, std::__1::default_delete<CMMsl::GyroCompass> > __ptr_;
} unique_ptr<CMMsl::GyroCompass, std::__1::default_delete<CMMsl::GyroCompass> >;

typedef struct _compressed_pair<CMMsl::GyroBiasFit *, std::__1::default_delete<CMMsl::GyroBiasFit> > {
	GyroBiasFit __value_;
} compressed_pair<CMMsl::GyroBiasFit *, std::__1::default_delete<CMMsl::GyroBiasFit> >;

typedef struct unique_ptr<CMMsl::GyroBiasFit, std::__1::default_delete<CMMsl::GyroBiasFit> > {
	compressed_pair<CMMsl::GyroBiasFit *, std::__1::default_delete<CMMsl::GyroBiasFit> > __ptr_;
} unique_ptr<CMMsl::GyroBiasFit, std::__1::default_delete<CMMsl::GyroBiasFit> >;

typedef struct _compressed_pair<CMMsl::GyroBiasCorrection *, std::__1::default_delete<CMMsl::GyroBiasCorrection> > {
	GyroBiasCorrection __value_;
} compressed_pair<CMMsl::GyroBiasCorrection *, std::__1::default_delete<CMMsl::GyroBiasCorrection> >;

typedef struct unique_ptr<CMMsl::GyroBiasCorrection, std::__1::default_delete<CMMsl::GyroBiasCorrection> > {
	compressed_pair<CMMsl::GyroBiasCorrection *, std::__1::default_delete<CMMsl::GyroBiasCorrection> > __ptr_;
} unique_ptr<CMMsl::GyroBiasCorrection, std::__1::default_delete<CMMsl::GyroBiasCorrection> >;

typedef struct _compressed_pair<CMMsl::GyroBiasConstraints *, std::__1::default_delete<CMMsl::GyroBiasConstraints> > {
	GyroBiasConstraints __value_;
} compressed_pair<CMMsl::GyroBiasConstraints *, std::__1::default_delete<CMMsl::GyroBiasConstraints> >;

typedef struct unique_ptr<CMMsl::GyroBiasConstraints, std::__1::default_delete<CMMsl::GyroBiasConstraints> > {
	compressed_pair<CMMsl::GyroBiasConstraints *, std::__1::default_delete<CMMsl::GyroBiasConstraints> > __ptr_;
} unique_ptr<CMMsl::GyroBiasConstraints, std::__1::default_delete<CMMsl::GyroBiasConstraints> >;

typedef struct _compressed_pair<CMMsl::GyroBiasAndVariance *, std::__1::default_delete<CMMsl::GyroBiasAndVariance> > {
	GyroBiasAndVariance __value_;
} compressed_pair<CMMsl::GyroBiasAndVariance *, std::__1::default_delete<CMMsl::GyroBiasAndVariance> >;

typedef struct unique_ptr<CMMsl::GyroBiasAndVariance, std::__1::default_delete<CMMsl::GyroBiasAndVariance> > {
	compressed_pair<CMMsl::GyroBiasAndVariance *, std::__1::default_delete<CMMsl::GyroBiasAndVariance> > __ptr_;
} unique_ptr<CMMsl::GyroBiasAndVariance, std::__1::default_delete<CMMsl::GyroBiasAndVariance> >;

typedef struct _compressed_pair<CMMsl::Gyro *, std::__1::default_delete<CMMsl::Gyro> > {
	Gyro __value_;
} compressed_pair<CMMsl::Gyro *, std::__1::default_delete<CMMsl::Gyro> >;

typedef struct unique_ptr<CMMsl::Gyro, std::__1::default_delete<CMMsl::Gyro> > {
	compressed_pair<CMMsl::Gyro *, std::__1::default_delete<CMMsl::Gyro> > __ptr_;
} unique_ptr<CMMsl::Gyro, std::__1::default_delete<CMMsl::Gyro> >;

typedef struct _compressed_pair<CMMsl::GravityCorrection *, std::__1::default_delete<CMMsl::GravityCorrection> > {
	GravityCorrection __value_;
} compressed_pair<CMMsl::GravityCorrection *, std::__1::default_delete<CMMsl::GravityCorrection> >;

typedef struct unique_ptr<CMMsl::GravityCorrection, std::__1::default_delete<CMMsl::GravityCorrection> > {
	compressed_pair<CMMsl::GravityCorrection *, std::__1::default_delete<CMMsl::GravityCorrection> > __ptr_;
} unique_ptr<CMMsl::GravityCorrection, std::__1::default_delete<CMMsl::GravityCorrection> >;

typedef struct _compressed_pair<CMMsl::GravityConstraints *, std::__1::default_delete<CMMsl::GravityConstraints> > {
	GravityConstraints __value_;
} compressed_pair<CMMsl::GravityConstraints *, std::__1::default_delete<CMMsl::GravityConstraints> >;

typedef struct unique_ptr<CMMsl::GravityConstraints, std::__1::default_delete<CMMsl::GravityConstraints> > {
	compressed_pair<CMMsl::GravityConstraints *, std::__1::default_delete<CMMsl::GravityConstraints> > __ptr_;
} unique_ptr<CMMsl::GravityConstraints, std::__1::default_delete<CMMsl::GravityConstraints> >;

typedef struct _compressed_pair<CMMsl::GeomagneticData *, std::__1::default_delete<CMMsl::GeomagneticData> > {
	GeomagneticData __value_;
} compressed_pair<CMMsl::GeomagneticData *, std::__1::default_delete<CMMsl::GeomagneticData> >;

typedef struct unique_ptr<CMMsl::GeomagneticData, std::__1::default_delete<CMMsl::GeomagneticData> > {
	compressed_pair<CMMsl::GeomagneticData *, std::__1::default_delete<CMMsl::GeomagneticData> > __ptr_;
} unique_ptr<CMMsl::GeomagneticData, std::__1::default_delete<CMMsl::GeomagneticData> >;

typedef struct _compressed_pair<CMMsl::FallStats *, std::__1::default_delete<CMMsl::FallStats> > {
	FallStats __value_;
} compressed_pair<CMMsl::FallStats *, std::__1::default_delete<CMMsl::FallStats> >;

typedef struct unique_ptr<CMMsl::FallStats, std::__1::default_delete<CMMsl::FallStats> > {
	compressed_pair<CMMsl::FallStats *, std::__1::default_delete<CMMsl::FallStats> > __ptr_;
} unique_ptr<CMMsl::FallStats, std::__1::default_delete<CMMsl::FallStats> >;

typedef struct _compressed_pair<CMMsl::FallSnippet *, std::__1::default_delete<CMMsl::FallSnippet> > {
	FallSnippet __value_;
} compressed_pair<CMMsl::FallSnippet *, std::__1::default_delete<CMMsl::FallSnippet> >;

typedef struct unique_ptr<CMMsl::FallSnippet, std::__1::default_delete<CMMsl::FallSnippet> > {
	compressed_pair<CMMsl::FallSnippet *, std::__1::default_delete<CMMsl::FallSnippet> > __ptr_;
} unique_ptr<CMMsl::FallSnippet, std::__1::default_delete<CMMsl::FallSnippet> >;

typedef struct _compressed_pair<CMMsl::FallFalsePositiveSuppressionFeatures *, std::__1::default_delete<CMMsl::FallFalsePositiveSuppressionFeatures> > {
	FallFalsePositiveSuppressionFeatures __value_;
} compressed_pair<CMMsl::FallFalsePositiveSuppressionFeatures *, std::__1::default_delete<CMMsl::FallFalsePositiveSuppressionFeatures> >;

typedef struct unique_ptr<CMMsl::FallFalsePositiveSuppressionFeatures, std::__1::default_delete<CMMsl::FallFalsePositiveSuppressionFeatures> > {
	compressed_pair<CMMsl::FallFalsePositiveSuppressionFeatures *, std::__1::default_delete<CMMsl::FallFalsePositiveSuppressionFeatures> > __ptr_;
} unique_ptr<CMMsl::FallFalsePositiveSuppressionFeatures, std::__1::default_delete<CMMsl::FallFalsePositiveSuppressionFeatures> >;

typedef struct _compressed_pair<CMMsl::FallDetectionStateMachine *, std::__1::default_delete<CMMsl::FallDetectionStateMachine> > {
	FallDetectionStateMachine __value_;
} compressed_pair<CMMsl::FallDetectionStateMachine *, std::__1::default_delete<CMMsl::FallDetectionStateMachine> >;

typedef struct unique_ptr<CMMsl::FallDetectionStateMachine, std::__1::default_delete<CMMsl::FallDetectionStateMachine> > {
	compressed_pair<CMMsl::FallDetectionStateMachine *, std::__1::default_delete<CMMsl::FallDetectionStateMachine> > __ptr_;
} unique_ptr<CMMsl::FallDetectionStateMachine, std::__1::default_delete<CMMsl::FallDetectionStateMachine> >;

typedef struct _compressed_pair<CMMsl::FallDetectionReplay *, std::__1::default_delete<CMMsl::FallDetectionReplay> > {
	FallDetectionReplay __value_;
} compressed_pair<CMMsl::FallDetectionReplay *, std::__1::default_delete<CMMsl::FallDetectionReplay> >;

typedef struct unique_ptr<CMMsl::FallDetectionReplay, std::__1::default_delete<CMMsl::FallDetectionReplay> > {
	compressed_pair<CMMsl::FallDetectionReplay *, std::__1::default_delete<CMMsl::FallDetectionReplay> > __ptr_;
} unique_ptr<CMMsl::FallDetectionReplay, std::__1::default_delete<CMMsl::FallDetectionReplay> >;

typedef struct _compressed_pair<CMMsl::FallDetectionDetector *, std::__1::default_delete<CMMsl::FallDetectionDetector> > {
	FallDetectionDetector __value_;
} compressed_pair<CMMsl::FallDetectionDetector *, std::__1::default_delete<CMMsl::FallDetectionDetector> >;

typedef struct unique_ptr<CMMsl::FallDetectionDetector, std::__1::default_delete<CMMsl::FallDetectionDetector> > {
	compressed_pair<CMMsl::FallDetectionDetector *, std::__1::default_delete<CMMsl::FallDetectionDetector> > __ptr_;
} unique_ptr<CMMsl::FallDetectionDetector, std::__1::default_delete<CMMsl::FallDetectionDetector> >;

typedef struct _compressed_pair<CMMsl::FacePose *, std::__1::default_delete<CMMsl::FacePose> > {
	FacePose __value_;
} compressed_pair<CMMsl::FacePose *, std::__1::default_delete<CMMsl::FacePose> >;

typedef struct unique_ptr<CMMsl::FacePose, std::__1::default_delete<CMMsl::FacePose> > {
	compressed_pair<CMMsl::FacePose *, std::__1::default_delete<CMMsl::FacePose> > __ptr_;
} unique_ptr<CMMsl::FacePose, std::__1::default_delete<CMMsl::FacePose> >;

typedef struct _compressed_pair<CMMsl::EnhancedDeviceMotion *, std::__1::default_delete<CMMsl::EnhancedDeviceMotion> > {
	EnhancedDeviceMotion __value_;
} compressed_pair<CMMsl::EnhancedDeviceMotion *, std::__1::default_delete<CMMsl::EnhancedDeviceMotion> >;

typedef struct unique_ptr<CMMsl::EnhancedDeviceMotion, std::__1::default_delete<CMMsl::EnhancedDeviceMotion> > {
	compressed_pair<CMMsl::EnhancedDeviceMotion *, std::__1::default_delete<CMMsl::EnhancedDeviceMotion> > __ptr_;
} unique_ptr<CMMsl::EnhancedDeviceMotion, std::__1::default_delete<CMMsl::EnhancedDeviceMotion> >;

typedef struct _compressed_pair<CMMsl::ElevationChange *, std::__1::default_delete<CMMsl::ElevationChange> > {
	ElevationChange __value_;
} compressed_pair<CMMsl::ElevationChange *, std::__1::default_delete<CMMsl::ElevationChange> >;

typedef struct unique_ptr<CMMsl::ElevationChange, std::__1::default_delete<CMMsl::ElevationChange> > {
	compressed_pair<CMMsl::ElevationChange *, std::__1::default_delete<CMMsl::ElevationChange> > __ptr_;
} unique_ptr<CMMsl::ElevationChange, std::__1::default_delete<CMMsl::ElevationChange> >;

typedef struct _compressed_pair<CMMsl::DoubleTap *, std::__1::default_delete<CMMsl::DoubleTap> > {
	DoubleTap __value_;
} compressed_pair<CMMsl::DoubleTap *, std::__1::default_delete<CMMsl::DoubleTap> >;

typedef struct unique_ptr<CMMsl::DoubleTap, std::__1::default_delete<CMMsl::DoubleTap> > {
	compressed_pair<CMMsl::DoubleTap *, std::__1::default_delete<CMMsl::DoubleTap> > __ptr_;
} unique_ptr<CMMsl::DoubleTap, std::__1::default_delete<CMMsl::DoubleTap> >;

typedef struct _compressed_pair<CMMsl::DeviceMotionCovariance *, std::__1::default_delete<CMMsl::DeviceMotionCovariance> > {
	DeviceMotionCovariance __value_;
} compressed_pair<CMMsl::DeviceMotionCovariance *, std::__1::default_delete<CMMsl::DeviceMotionCovariance> >;

typedef struct unique_ptr<CMMsl::DeviceMotionCovariance, std::__1::default_delete<CMMsl::DeviceMotionCovariance> > {
	compressed_pair<CMMsl::DeviceMotionCovariance *, std::__1::default_delete<CMMsl::DeviceMotionCovariance> > __ptr_;
} unique_ptr<CMMsl::DeviceMotionCovariance, std::__1::default_delete<CMMsl::DeviceMotionCovariance> >;

typedef struct _compressed_pair<CMMsl::DeviceMotion *, std::__1::default_delete<CMMsl::DeviceMotion> > {
	DeviceMotion __value_;
} compressed_pair<CMMsl::DeviceMotion *, std::__1::default_delete<CMMsl::DeviceMotion> >;

typedef struct unique_ptr<CMMsl::DeviceMotion, std::__1::default_delete<CMMsl::DeviceMotion> > {
	compressed_pair<CMMsl::DeviceMotion *, std::__1::default_delete<CMMsl::DeviceMotion> > __ptr_;
} unique_ptr<CMMsl::DeviceMotion, std::__1::default_delete<CMMsl::DeviceMotion> >;

typedef struct _compressed_pair<CMMsl::CourseCorrection *, std::__1::default_delete<CMMsl::CourseCorrection> > {
	CourseCorrection __value_;
} compressed_pair<CMMsl::CourseCorrection *, std::__1::default_delete<CMMsl::CourseCorrection> >;

typedef struct unique_ptr<CMMsl::CourseCorrection, std::__1::default_delete<CMMsl::CourseCorrection> > {
	compressed_pair<CMMsl::CourseCorrection *, std::__1::default_delete<CMMsl::CourseCorrection> > __ptr_;
} unique_ptr<CMMsl::CourseCorrection, std::__1::default_delete<CMMsl::CourseCorrection> >;

typedef struct _compressed_pair<CMMsl::CourseConstraints *, std::__1::default_delete<CMMsl::CourseConstraints> > {
	CourseConstraints __value_;
} compressed_pair<CMMsl::CourseConstraints *, std::__1::default_delete<CMMsl::CourseConstraints> >;

typedef struct unique_ptr<CMMsl::CourseConstraints, std::__1::default_delete<CMMsl::CourseConstraints> > {
	compressed_pair<CMMsl::CourseConstraints *, std::__1::default_delete<CMMsl::CourseConstraints> > __ptr_;
} unique_ptr<CMMsl::CourseConstraints, std::__1::default_delete<CMMsl::CourseConstraints> >;

typedef struct _compressed_pair<CMMsl::CompassCorrection *, std::__1::default_delete<CMMsl::CompassCorrection> > {
	CompassCorrection __value_;
} compressed_pair<CMMsl::CompassCorrection *, std::__1::default_delete<CMMsl::CompassCorrection> >;

typedef struct unique_ptr<CMMsl::CompassCorrection, std::__1::default_delete<CMMsl::CompassCorrection> > {
	compressed_pair<CMMsl::CompassCorrection *, std::__1::default_delete<CMMsl::CompassCorrection> > __ptr_;
} unique_ptr<CMMsl::CompassCorrection, std::__1::default_delete<CMMsl::CompassCorrection> >;

typedef struct _compressed_pair<CMMsl::CompassConstraints *, std::__1::default_delete<CMMsl::CompassConstraints> > {
	CompassConstraints __value_;
} compressed_pair<CMMsl::CompassConstraints *, std::__1::default_delete<CMMsl::CompassConstraints> >;

typedef struct unique_ptr<CMMsl::CompassConstraints, std::__1::default_delete<CMMsl::CompassConstraints> > {
	compressed_pair<CMMsl::CompassConstraints *, std::__1::default_delete<CMMsl::CompassConstraints> > __ptr_;
} unique_ptr<CMMsl::CompassConstraints, std::__1::default_delete<CMMsl::CompassConstraints> >;

typedef struct _compressed_pair<CMMsl::CompassCalibrationAttempt *, std::__1::default_delete<CMMsl::CompassCalibrationAttempt> > {
	CompassCalibrationAttempt __value_;
} compressed_pair<CMMsl::CompassCalibrationAttempt *, std::__1::default_delete<CMMsl::CompassCalibrationAttempt> >;

typedef struct unique_ptr<CMMsl::CompassCalibrationAttempt, std::__1::default_delete<CMMsl::CompassCalibrationAttempt> > {
	compressed_pair<CMMsl::CompassCalibrationAttempt *, std::__1::default_delete<CMMsl::CompassCalibrationAttempt> > __ptr_;
} unique_ptr<CMMsl::CompassCalibrationAttempt, std::__1::default_delete<CMMsl::CompassCalibrationAttempt> >;

typedef struct _compressed_pair<CMMsl::CompassCalibration *, std::__1::default_delete<CMMsl::CompassCalibration> > {
	CompassCalibration __value_;
} compressed_pair<CMMsl::CompassCalibration *, std::__1::default_delete<CMMsl::CompassCalibration> >;

typedef struct unique_ptr<CMMsl::CompassCalibration, std::__1::default_delete<CMMsl::CompassCalibration> > {
	compressed_pair<CMMsl::CompassCalibration *, std::__1::default_delete<CMMsl::CompassCalibration> > __ptr_;
} unique_ptr<CMMsl::CompassCalibration, std::__1::default_delete<CMMsl::CompassCalibration> >;

typedef struct _compressed_pair<CMMsl::CompassAlignment *, std::__1::default_delete<CMMsl::CompassAlignment> > {
	CompassAlignment __value_;
} compressed_pair<CMMsl::CompassAlignment *, std::__1::default_delete<CMMsl::CompassAlignment> >;

typedef struct unique_ptr<CMMsl::CompassAlignment, std::__1::default_delete<CMMsl::CompassAlignment> > {
	compressed_pair<CMMsl::CompassAlignment *, std::__1::default_delete<CMMsl::CompassAlignment> > __ptr_;
} unique_ptr<CMMsl::CompassAlignment, std::__1::default_delete<CMMsl::CompassAlignment> >;

typedef struct _compressed_pair<CMMsl::Compass *, std::__1::default_delete<CMMsl::Compass> > {
	Compass __value_;
} compressed_pair<CMMsl::Compass *, std::__1::default_delete<CMMsl::Compass> >;

typedef struct unique_ptr<CMMsl::Compass, std::__1::default_delete<CMMsl::Compass> > {
	compressed_pair<CMMsl::Compass *, std::__1::default_delete<CMMsl::Compass> > __ptr_;
} unique_ptr<CMMsl::Compass, std::__1::default_delete<CMMsl::Compass> >;

typedef struct _compressed_pair<CMMsl::CoarseElevationChange *, std::__1::default_delete<CMMsl::CoarseElevationChange> > {
	CoarseElevationChange __value_;
} compressed_pair<CMMsl::CoarseElevationChange *, std::__1::default_delete<CMMsl::CoarseElevationChange> >;

typedef struct unique_ptr<CMMsl::CoarseElevationChange, std::__1::default_delete<CMMsl::CoarseElevationChange> > {
	compressed_pair<CMMsl::CoarseElevationChange *, std::__1::default_delete<CMMsl::CoarseElevationChange> > __ptr_;
} unique_ptr<CMMsl::CoarseElevationChange, std::__1::default_delete<CMMsl::CoarseElevationChange> >;

typedef struct _compressed_pair<CMMsl::ClefCalibration *, std::__1::default_delete<CMMsl::ClefCalibration> > {
	ClefCalibration __value_;
} compressed_pair<CMMsl::ClefCalibration *, std::__1::default_delete<CMMsl::ClefCalibration> >;

typedef struct unique_ptr<CMMsl::ClefCalibration, std::__1::default_delete<CMMsl::ClefCalibration> > {
	compressed_pair<CMMsl::ClefCalibration *, std::__1::default_delete<CMMsl::ClefCalibration> > __ptr_;
} unique_ptr<CMMsl::ClefCalibration, std::__1::default_delete<CMMsl::ClefCalibration> >;

typedef struct _compressed_pair<CMMsl::CatherineHealthKitData *, std::__1::default_delete<CMMsl::CatherineHealthKitData> > {
	CatherineHealthKitData __value_;
} compressed_pair<CMMsl::CatherineHealthKitData *, std::__1::default_delete<CMMsl::CatherineHealthKitData> >;

typedef struct unique_ptr<CMMsl::CatherineHealthKitData, std::__1::default_delete<CMMsl::CatherineHealthKitData> > {
	compressed_pair<CMMsl::CatherineHealthKitData *, std::__1::default_delete<CMMsl::CatherineHealthKitData> > __ptr_;
} unique_ptr<CMMsl::CatherineHealthKitData, std::__1::default_delete<CMMsl::CatherineHealthKitData> >;

typedef struct _compressed_pair<CMMsl::CalorimetryPauseEvent *, std::__1::default_delete<CMMsl::CalorimetryPauseEvent> > {
	CalorimetryPauseEvent __value_;
} compressed_pair<CMMsl::CalorimetryPauseEvent *, std::__1::default_delete<CMMsl::CalorimetryPauseEvent> >;

typedef struct unique_ptr<CMMsl::CalorimetryPauseEvent, std::__1::default_delete<CMMsl::CalorimetryPauseEvent> > {
	compressed_pair<CMMsl::CalorimetryPauseEvent *, std::__1::default_delete<CMMsl::CalorimetryPauseEvent> > __ptr_;
} unique_ptr<CMMsl::CalorimetryPauseEvent, std::__1::default_delete<CMMsl::CalorimetryPauseEvent> >;

typedef struct _compressed_pair<CMMsl::BraveHeartWorkoutEvent *, std::__1::default_delete<CMMsl::BraveHeartWorkoutEvent> > {
	BraveHeartWorkoutEvent __value_;
} compressed_pair<CMMsl::BraveHeartWorkoutEvent *, std::__1::default_delete<CMMsl::BraveHeartWorkoutEvent> >;

typedef struct unique_ptr<CMMsl::BraveHeartWorkoutEvent, std::__1::default_delete<CMMsl::BraveHeartWorkoutEvent> > {
	compressed_pair<CMMsl::BraveHeartWorkoutEvent *, std::__1::default_delete<CMMsl::BraveHeartWorkoutEvent> > __ptr_;
} unique_ptr<CMMsl::BraveHeartWorkoutEvent, std::__1::default_delete<CMMsl::BraveHeartWorkoutEvent> >;

typedef struct _compressed_pair<CMMsl::BraveHeartVO2MaxInput *, std::__1::default_delete<CMMsl::BraveHeartVO2MaxInput> > {
	BraveHeartVO2MaxInput __value_;
} compressed_pair<CMMsl::BraveHeartVO2MaxInput *, std::__1::default_delete<CMMsl::BraveHeartVO2MaxInput> >;

typedef struct unique_ptr<CMMsl::BraveHeartVO2MaxInput, std::__1::default_delete<CMMsl::BraveHeartVO2MaxInput> > {
	compressed_pair<CMMsl::BraveHeartVO2MaxInput *, std::__1::default_delete<CMMsl::BraveHeartVO2MaxInput> > __ptr_;
} unique_ptr<CMMsl::BraveHeartVO2MaxInput, std::__1::default_delete<CMMsl::BraveHeartVO2MaxInput> >;

typedef struct _compressed_pair<CMMsl::BraveHeartNatalieData *, std::__1::default_delete<CMMsl::BraveHeartNatalieData> > {
	BraveHeartNatalieData __value_;
} compressed_pair<CMMsl::BraveHeartNatalieData *, std::__1::default_delete<CMMsl::BraveHeartNatalieData> >;

typedef struct unique_ptr<CMMsl::BraveHeartNatalieData, std::__1::default_delete<CMMsl::BraveHeartNatalieData> > {
	compressed_pair<CMMsl::BraveHeartNatalieData *, std::__1::default_delete<CMMsl::BraveHeartNatalieData> > __ptr_;
} unique_ptr<CMMsl::BraveHeartNatalieData, std::__1::default_delete<CMMsl::BraveHeartNatalieData> >;

typedef struct _compressed_pair<CMMsl::BraveHeartDeviceMotion *, std::__1::default_delete<CMMsl::BraveHeartDeviceMotion> > {
	BraveHeartDeviceMotion __value_;
} compressed_pair<CMMsl::BraveHeartDeviceMotion *, std::__1::default_delete<CMMsl::BraveHeartDeviceMotion> >;

typedef struct unique_ptr<CMMsl::BraveHeartDeviceMotion, std::__1::default_delete<CMMsl::BraveHeartDeviceMotion> > {
	compressed_pair<CMMsl::BraveHeartDeviceMotion *, std::__1::default_delete<CMMsl::BraveHeartDeviceMotion> > __ptr_;
} unique_ptr<CMMsl::BraveHeartDeviceMotion, std::__1::default_delete<CMMsl::BraveHeartDeviceMotion> >;

typedef struct _compressed_pair<CMMsl::BraveHeartAccel *, std::__1::default_delete<CMMsl::BraveHeartAccel> > {
	BraveHeartAccel __value_;
} compressed_pair<CMMsl::BraveHeartAccel *, std::__1::default_delete<CMMsl::BraveHeartAccel> >;

typedef struct unique_ptr<CMMsl::BraveHeartAccel, std::__1::default_delete<CMMsl::BraveHeartAccel> > {
	compressed_pair<CMMsl::BraveHeartAccel *, std::__1::default_delete<CMMsl::BraveHeartAccel> > __ptr_;
} unique_ptr<CMMsl::BraveHeartAccel, std::__1::default_delete<CMMsl::BraveHeartAccel> >;

typedef struct _compressed_pair<CMMsl::BodyMetrics *, std::__1::default_delete<CMMsl::BodyMetrics> > {
	BodyMetrics __value_;
} compressed_pair<CMMsl::BodyMetrics *, std::__1::default_delete<CMMsl::BodyMetrics> >;

typedef struct unique_ptr<CMMsl::BodyMetrics, std::__1::default_delete<CMMsl::BodyMetrics> > {
	compressed_pair<CMMsl::BodyMetrics *, std::__1::default_delete<CMMsl::BodyMetrics> > __ptr_;
} unique_ptr<CMMsl::BodyMetrics, std::__1::default_delete<CMMsl::BodyMetrics> >;

typedef struct _compressed_pair<CMMsl::BleedToZeroCorrection *, std::__1::default_delete<CMMsl::BleedToZeroCorrection> > {
	BleedToZeroCorrection __value_;
} compressed_pair<CMMsl::BleedToZeroCorrection *, std::__1::default_delete<CMMsl::BleedToZeroCorrection> >;

typedef struct unique_ptr<CMMsl::BleedToZeroCorrection, std::__1::default_delete<CMMsl::BleedToZeroCorrection> > {
	compressed_pair<CMMsl::BleedToZeroCorrection *, std::__1::default_delete<CMMsl::BleedToZeroCorrection> > __ptr_;
} unique_ptr<CMMsl::BleedToZeroCorrection, std::__1::default_delete<CMMsl::BleedToZeroCorrection> >;

typedef struct _compressed_pair<CMMsl::BasebandSpeed *, std::__1::default_delete<CMMsl::BasebandSpeed> > {
	BasebandSpeed __value_;
} compressed_pair<CMMsl::BasebandSpeed *, std::__1::default_delete<CMMsl::BasebandSpeed> >;

typedef struct unique_ptr<CMMsl::BasebandSpeed, std::__1::default_delete<CMMsl::BasebandSpeed> > {
	compressed_pair<CMMsl::BasebandSpeed *, std::__1::default_delete<CMMsl::BasebandSpeed> > __ptr_;
} unique_ptr<CMMsl::BasebandSpeed, std::__1::default_delete<CMMsl::BasebandSpeed> >;

typedef struct _compressed_pair<CMMsl::BTConnection *, std::__1::default_delete<CMMsl::BTConnection> > {
	BTConnection __value_;
} compressed_pair<CMMsl::BTConnection *, std::__1::default_delete<CMMsl::BTConnection> >;

typedef struct unique_ptr<CMMsl::BTConnection, std::__1::default_delete<CMMsl::BTConnection> > {
	compressed_pair<CMMsl::BTConnection *, std::__1::default_delete<CMMsl::BTConnection> > __ptr_;
} unique_ptr<CMMsl::BTConnection, std::__1::default_delete<CMMsl::BTConnection> >;

typedef struct _compressed_pair<CMMsl::AuxiliaryDeviceMotion *, std::__1::default_delete<CMMsl::AuxiliaryDeviceMotion> > {
	AuxiliaryDeviceMotion __value_;
} compressed_pair<CMMsl::AuxiliaryDeviceMotion *, std::__1::default_delete<CMMsl::AuxiliaryDeviceMotion> >;

typedef struct unique_ptr<CMMsl::AuxiliaryDeviceMotion, std::__1::default_delete<CMMsl::AuxiliaryDeviceMotion> > {
	compressed_pair<CMMsl::AuxiliaryDeviceMotion *, std::__1::default_delete<CMMsl::AuxiliaryDeviceMotion> > __ptr_;
} unique_ptr<CMMsl::AuxiliaryDeviceMotion, std::__1::default_delete<CMMsl::AuxiliaryDeviceMotion> >;

typedef struct _compressed_pair<CMMsl::AudioAccessoryDeviceMotion *, std::__1::default_delete<CMMsl::AudioAccessoryDeviceMotion> > {
	AudioAccessoryDeviceMotion __value_;
} compressed_pair<CMMsl::AudioAccessoryDeviceMotion *, std::__1::default_delete<CMMsl::AudioAccessoryDeviceMotion> >;

typedef struct unique_ptr<CMMsl::AudioAccessoryDeviceMotion, std::__1::default_delete<CMMsl::AudioAccessoryDeviceMotion> > {
	compressed_pair<CMMsl::AudioAccessoryDeviceMotion *, std::__1::default_delete<CMMsl::AudioAccessoryDeviceMotion> > __ptr_;
} unique_ptr<CMMsl::AudioAccessoryDeviceMotion, std::__1::default_delete<CMMsl::AudioAccessoryDeviceMotion> >;

typedef struct _compressed_pair<CMMsl::ARSessionState *, std::__1::default_delete<CMMsl::ARSessionState> > {
	ARSessionState __value_;
} compressed_pair<CMMsl::ARSessionState *, std::__1::default_delete<CMMsl::ARSessionState> >;

typedef struct unique_ptr<CMMsl::ARSessionState, std::__1::default_delete<CMMsl::ARSessionState> > {
	compressed_pair<CMMsl::ARSessionState *, std::__1::default_delete<CMMsl::ARSessionState> > __ptr_;
} unique_ptr<CMMsl::ARSessionState, std::__1::default_delete<CMMsl::ARSessionState> >;

typedef struct _compressed_pair<CMMsl::AnchorCorrection *, std::__1::default_delete<CMMsl::AnchorCorrection> > {
	AnchorCorrection __value_;
} compressed_pair<CMMsl::AnchorCorrection *, std::__1::default_delete<CMMsl::AnchorCorrection> >;

typedef struct unique_ptr<CMMsl::AnchorCorrection, std::__1::default_delete<CMMsl::AnchorCorrection> > {
	compressed_pair<CMMsl::AnchorCorrection *, std::__1::default_delete<CMMsl::AnchorCorrection> > __ptr_;
} unique_ptr<CMMsl::AnchorCorrection, std::__1::default_delete<CMMsl::AnchorCorrection> >;

typedef struct _compressed_pair<CMMsl::ALSData *, std::__1::default_delete<CMMsl::ALSData> > {
	ALSData __value_;
} compressed_pair<CMMsl::ALSData *, std::__1::default_delete<CMMsl::ALSData> >;

typedef struct unique_ptr<CMMsl::ALSData, std::__1::default_delete<CMMsl::ALSData> > {
	compressed_pair<CMMsl::ALSData *, std::__1::default_delete<CMMsl::ALSData> > __ptr_;
} unique_ptr<CMMsl::ALSData, std::__1::default_delete<CMMsl::ALSData> >;

typedef struct _compressed_pair<CMMsl::AirpodEvent *, std::__1::default_delete<CMMsl::AirpodEvent> > {
	AirpodEvent __value_;
} compressed_pair<CMMsl::AirpodEvent *, std::__1::default_delete<CMMsl::AirpodEvent> >;

typedef struct unique_ptr<CMMsl::AirpodEvent, std::__1::default_delete<CMMsl::AirpodEvent> > {
	compressed_pair<CMMsl::AirpodEvent *, std::__1::default_delete<CMMsl::AirpodEvent> > __ptr_;
} unique_ptr<CMMsl::AirpodEvent, std::__1::default_delete<CMMsl::AirpodEvent> >;

typedef struct _compressed_pair<CMMsl::AccessoryWakeDebug *, std::__1::default_delete<CMMsl::AccessoryWakeDebug> > {
	AccessoryWakeDebug __value_;
} compressed_pair<CMMsl::AccessoryWakeDebug *, std::__1::default_delete<CMMsl::AccessoryWakeDebug> >;

typedef struct unique_ptr<CMMsl::AccessoryWakeDebug, std::__1::default_delete<CMMsl::AccessoryWakeDebug> > {
	compressed_pair<CMMsl::AccessoryWakeDebug *, std::__1::default_delete<CMMsl::AccessoryWakeDebug> > __ptr_;
} unique_ptr<CMMsl::AccessoryWakeDebug, std::__1::default_delete<CMMsl::AccessoryWakeDebug> >;

typedef struct _compressed_pair<CMMsl::AccessoryWake *, std::__1::default_delete<CMMsl::AccessoryWake> > {
	AccessoryWake __value_;
} compressed_pair<CMMsl::AccessoryWake *, std::__1::default_delete<CMMsl::AccessoryWake> >;

typedef struct unique_ptr<CMMsl::AccessoryWake, std::__1::default_delete<CMMsl::AccessoryWake> > {
	compressed_pair<CMMsl::AccessoryWake *, std::__1::default_delete<CMMsl::AccessoryWake> > __ptr_;
} unique_ptr<CMMsl::AccessoryWake, std::__1::default_delete<CMMsl::AccessoryWake> >;

typedef struct _compressed_pair<CMMsl::AccessoryProximityConfig *, std::__1::default_delete<CMMsl::AccessoryProximityConfig> > {
	AccessoryProximityConfig __value_;
} compressed_pair<CMMsl::AccessoryProximityConfig *, std::__1::default_delete<CMMsl::AccessoryProximityConfig> >;

typedef struct unique_ptr<CMMsl::AccessoryProximityConfig, std::__1::default_delete<CMMsl::AccessoryProximityConfig> > {
	compressed_pair<CMMsl::AccessoryProximityConfig *, std::__1::default_delete<CMMsl::AccessoryProximityConfig> > __ptr_;
} unique_ptr<CMMsl::AccessoryProximityConfig, std::__1::default_delete<CMMsl::AccessoryProximityConfig> >;

typedef struct _compressed_pair<CMMsl::AccessoryProxTempComp *, std::__1::default_delete<CMMsl::AccessoryProxTempComp> > {
	AccessoryProxTempComp __value_;
} compressed_pair<CMMsl::AccessoryProxTempComp *, std::__1::default_delete<CMMsl::AccessoryProxTempComp> >;

typedef struct unique_ptr<CMMsl::AccessoryProxTempComp, std::__1::default_delete<CMMsl::AccessoryProxTempComp> > {
	compressed_pair<CMMsl::AccessoryProxTempComp *, std::__1::default_delete<CMMsl::AccessoryProxTempComp> > __ptr_;
} unique_ptr<CMMsl::AccessoryProxTempComp, std::__1::default_delete<CMMsl::AccessoryProxTempComp> >;

typedef struct _compressed_pair<CMMsl::AccessoryProxSensorDrop *, std::__1::default_delete<CMMsl::AccessoryProxSensorDrop> > {
	AccessoryProxSensorDrop __value_;
} compressed_pair<CMMsl::AccessoryProxSensorDrop *, std::__1::default_delete<CMMsl::AccessoryProxSensorDrop> >;

typedef struct unique_ptr<CMMsl::AccessoryProxSensorDrop, std::__1::default_delete<CMMsl::AccessoryProxSensorDrop> > {
	compressed_pair<CMMsl::AccessoryProxSensorDrop *, std::__1::default_delete<CMMsl::AccessoryProxSensorDrop> > __ptr_;
} unique_ptr<CMMsl::AccessoryProxSensorDrop, std::__1::default_delete<CMMsl::AccessoryProxSensorDrop> >;

typedef struct _compressed_pair<CMMsl::AccessoryProx *, std::__1::default_delete<CMMsl::AccessoryProx> > {
	AccessoryProx __value_;
} compressed_pair<CMMsl::AccessoryProx *, std::__1::default_delete<CMMsl::AccessoryProx> >;

typedef struct unique_ptr<CMMsl::AccessoryProx, std::__1::default_delete<CMMsl::AccessoryProx> > {
	compressed_pair<CMMsl::AccessoryProx *, std::__1::default_delete<CMMsl::AccessoryProx> > __ptr_;
} unique_ptr<CMMsl::AccessoryProx, std::__1::default_delete<CMMsl::AccessoryProx> >;

typedef struct _compressed_pair<CMMsl::AccessoryGyroGYTT *, std::__1::default_delete<CMMsl::AccessoryGyroGYTT> > {
	AccessoryGyroGYTT __value_;
} compressed_pair<CMMsl::AccessoryGyroGYTT *, std::__1::default_delete<CMMsl::AccessoryGyroGYTT> >;

typedef struct unique_ptr<CMMsl::AccessoryGyroGYTT, std::__1::default_delete<CMMsl::AccessoryGyroGYTT> > {
	compressed_pair<CMMsl::AccessoryGyroGYTT *, std::__1::default_delete<CMMsl::AccessoryGyroGYTT> > __ptr_;
} unique_ptr<CMMsl::AccessoryGyroGYTT, std::__1::default_delete<CMMsl::AccessoryGyroGYTT> >;

typedef struct _compressed_pair<CMMsl::AccessoryGyroConfig *, std::__1::default_delete<CMMsl::AccessoryGyroConfig> > {
	AccessoryGyroConfig __value_;
} compressed_pair<CMMsl::AccessoryGyroConfig *, std::__1::default_delete<CMMsl::AccessoryGyroConfig> >;

typedef struct unique_ptr<CMMsl::AccessoryGyroConfig, std::__1::default_delete<CMMsl::AccessoryGyroConfig> > {
	compressed_pair<CMMsl::AccessoryGyroConfig *, std::__1::default_delete<CMMsl::AccessoryGyroConfig> > __ptr_;
} unique_ptr<CMMsl::AccessoryGyroConfig, std::__1::default_delete<CMMsl::AccessoryGyroConfig> >;

typedef struct _compressed_pair<CMMsl::AccessoryGyroCachedBias *, std::__1::default_delete<CMMsl::AccessoryGyroCachedBias> > {
	AccessoryGyroCachedBias __value_;
} compressed_pair<CMMsl::AccessoryGyroCachedBias *, std::__1::default_delete<CMMsl::AccessoryGyroCachedBias> >;

typedef struct unique_ptr<CMMsl::AccessoryGyroCachedBias, std::__1::default_delete<CMMsl::AccessoryGyroCachedBias> > {
	compressed_pair<CMMsl::AccessoryGyroCachedBias *, std::__1::default_delete<CMMsl::AccessoryGyroCachedBias> > __ptr_;
} unique_ptr<CMMsl::AccessoryGyroCachedBias, std::__1::default_delete<CMMsl::AccessoryGyroCachedBias> >;

typedef struct _compressed_pair<CMMsl::AccessoryGyro *, std::__1::default_delete<CMMsl::AccessoryGyro> > {
	AccessoryGyro __value_;
} compressed_pair<CMMsl::AccessoryGyro *, std::__1::default_delete<CMMsl::AccessoryGyro> >;

typedef struct unique_ptr<CMMsl::AccessoryGyro, std::__1::default_delete<CMMsl::AccessoryGyro> > {
	compressed_pair<CMMsl::AccessoryGyro *, std::__1::default_delete<CMMsl::AccessoryGyro> > __ptr_;
} unique_ptr<CMMsl::AccessoryGyro, std::__1::default_delete<CMMsl::AccessoryGyro> >;

typedef struct _compressed_pair<CMMsl::AccessoryDeviceMotionConfig *, std::__1::default_delete<CMMsl::AccessoryDeviceMotionConfig> > {
	AccessoryDeviceMotionConfig __value_;
} compressed_pair<CMMsl::AccessoryDeviceMotionConfig *, std::__1::default_delete<CMMsl::AccessoryDeviceMotionConfig> >;

typedef struct unique_ptr<CMMsl::AccessoryDeviceMotionConfig, std::__1::default_delete<CMMsl::AccessoryDeviceMotionConfig> > {
	compressed_pair<CMMsl::AccessoryDeviceMotionConfig *, std::__1::default_delete<CMMsl::AccessoryDeviceMotionConfig> > __ptr_;
} unique_ptr<CMMsl::AccessoryDeviceMotionConfig, std::__1::default_delete<CMMsl::AccessoryDeviceMotionConfig> >;

typedef struct _compressed_pair<CMMsl::AccessoryDeviceMotion *, std::__1::default_delete<CMMsl::AccessoryDeviceMotion> > {
	AccessoryDeviceMotion __value_;
} compressed_pair<CMMsl::AccessoryDeviceMotion *, std::__1::default_delete<CMMsl::AccessoryDeviceMotion> >;

typedef struct unique_ptr<CMMsl::AccessoryDeviceMotion, std::__1::default_delete<CMMsl::AccessoryDeviceMotion> > {
	compressed_pair<CMMsl::AccessoryDeviceMotion *, std::__1::default_delete<CMMsl::AccessoryDeviceMotion> > __ptr_;
} unique_ptr<CMMsl::AccessoryDeviceMotion, std::__1::default_delete<CMMsl::AccessoryDeviceMotion> >;

typedef struct _compressed_pair<CMMsl::AccessoryConfig *, std::__1::default_delete<CMMsl::AccessoryConfig> > {
	AccessoryConfig __value_;
} compressed_pair<CMMsl::AccessoryConfig *, std::__1::default_delete<CMMsl::AccessoryConfig> >;

typedef struct unique_ptr<CMMsl::AccessoryConfig, std::__1::default_delete<CMMsl::AccessoryConfig> > {
	compressed_pair<CMMsl::AccessoryConfig *, std::__1::default_delete<CMMsl::AccessoryConfig> > __ptr_;
} unique_ptr<CMMsl::AccessoryConfig, std::__1::default_delete<CMMsl::AccessoryConfig> >;

typedef struct _compressed_pair<CMMsl::AccessoryAccelConfig *, std::__1::default_delete<CMMsl::AccessoryAccelConfig> > {
	AccessoryAccelConfig __value_;
} compressed_pair<CMMsl::AccessoryAccelConfig *, std::__1::default_delete<CMMsl::AccessoryAccelConfig> >;

typedef struct unique_ptr<CMMsl::AccessoryAccelConfig, std::__1::default_delete<CMMsl::AccessoryAccelConfig> > {
	compressed_pair<CMMsl::AccessoryAccelConfig *, std::__1::default_delete<CMMsl::AccessoryAccelConfig> > __ptr_;
} unique_ptr<CMMsl::AccessoryAccelConfig, std::__1::default_delete<CMMsl::AccessoryAccelConfig> >;

typedef struct _compressed_pair<CMMsl::AccessoryAccel *, std::__1::default_delete<CMMsl::AccessoryAccel> > {
	AccessoryAccel __value_;
} compressed_pair<CMMsl::AccessoryAccel *, std::__1::default_delete<CMMsl::AccessoryAccel> >;

typedef struct unique_ptr<CMMsl::AccessoryAccel, std::__1::default_delete<CMMsl::AccessoryAccel> > {
	compressed_pair<CMMsl::AccessoryAccel *, std::__1::default_delete<CMMsl::AccessoryAccel> > __ptr_;
} unique_ptr<CMMsl::AccessoryAccel, std::__1::default_delete<CMMsl::AccessoryAccel> >;

typedef struct _compressed_pair<CMMsl::AccelerometerPace *, std::__1::default_delete<CMMsl::AccelerometerPace> > {
	AccelerometerPace __value_;
} compressed_pair<CMMsl::AccelerometerPace *, std::__1::default_delete<CMMsl::AccelerometerPace> >;

typedef struct unique_ptr<CMMsl::AccelerometerPace, std::__1::default_delete<CMMsl::AccelerometerPace> > {
	compressed_pair<CMMsl::AccelerometerPace *, std::__1::default_delete<CMMsl::AccelerometerPace> > __ptr_;
} unique_ptr<CMMsl::AccelerometerPace, std::__1::default_delete<CMMsl::AccelerometerPace> >;

typedef struct _compressed_pair<CMMsl::AccelOscarEmu *, std::__1::default_delete<CMMsl::AccelOscarEmu> > {
	AccelOscarEmu __value_;
} compressed_pair<CMMsl::AccelOscarEmu *, std::__1::default_delete<CMMsl::AccelOscarEmu> >;

typedef struct unique_ptr<CMMsl::AccelOscarEmu, std::__1::default_delete<CMMsl::AccelOscarEmu> > {
	compressed_pair<CMMsl::AccelOscarEmu *, std::__1::default_delete<CMMsl::AccelOscarEmu> > __ptr_;
} unique_ptr<CMMsl::AccelOscarEmu, std::__1::default_delete<CMMsl::AccelOscarEmu> >;

typedef struct _compressed_pair<CMMsl::AccelGps *, std::__1::default_delete<CMMsl::AccelGps> > {
	AccelGps __value_;
} compressed_pair<CMMsl::AccelGps *, std::__1::default_delete<CMMsl::AccelGps> >;

typedef struct unique_ptr<CMMsl::AccelGps, std::__1::default_delete<CMMsl::AccelGps> > {
	compressed_pair<CMMsl::AccelGps *, std::__1::default_delete<CMMsl::AccelGps> > __ptr_;
} unique_ptr<CMMsl::AccelGps, std::__1::default_delete<CMMsl::AccelGps> >;

typedef struct _compressed_pair<CMMsl::AccelGesture *, std::__1::default_delete<CMMsl::AccelGesture> > {
	AccelGesture __value_;
} compressed_pair<CMMsl::AccelGesture *, std::__1::default_delete<CMMsl::AccelGesture> >;

typedef struct unique_ptr<CMMsl::AccelGesture, std::__1::default_delete<CMMsl::AccelGesture> > {
	compressed_pair<CMMsl::AccelGesture *, std::__1::default_delete<CMMsl::AccelGesture> > __ptr_;
} unique_ptr<CMMsl::AccelGesture, std::__1::default_delete<CMMsl::AccelGesture> >;

typedef struct _compressed_pair<CMMsl::AccelBatch *, std::__1::default_delete<CMMsl::AccelBatch> > {
	AccelBatch __value_;
} compressed_pair<CMMsl::AccelBatch *, std::__1::default_delete<CMMsl::AccelBatch> >;

typedef struct unique_ptr<CMMsl::AccelBatch, std::__1::default_delete<CMMsl::AccelBatch> > {
	compressed_pair<CMMsl::AccelBatch *, std::__1::default_delete<CMMsl::AccelBatch> > __ptr_;
} unique_ptr<CMMsl::AccelBatch, std::__1::default_delete<CMMsl::AccelBatch> >;

typedef struct _compressed_pair<CMMsl::Accel *, std::__1::default_delete<CMMsl::Accel> > {
	Accel __value_;
} compressed_pair<CMMsl::Accel *, std::__1::default_delete<CMMsl::Accel> >;

typedef struct unique_ptr<CMMsl::Accel, std::__1::default_delete<CMMsl::Accel> > {
	compressed_pair<CMMsl::Accel *, std::__1::default_delete<CMMsl::Accel> > __ptr_;
} unique_ptr<CMMsl::Accel, std::__1::default_delete<CMMsl::Accel> >;

typedef struct Item {
	/*function pointer*/void* _vptr$Base;
	unique_ptr<CMMsl::Accel, std::__1::default_delete<CMMsl::Accel> > _accel;
	unique_ptr<CMMsl::AccelBatch, std::__1::default_delete<CMMsl::AccelBatch> > _accelBatch;
	unique_ptr<CMMsl::AccelGesture, std::__1::default_delete<CMMsl::AccelGesture> > _accelGesture;
	unique_ptr<CMMsl::AccelGps, std::__1::default_delete<CMMsl::AccelGps> > _accelGps;
	unique_ptr<CMMsl::AccelOscarEmu, std::__1::default_delete<CMMsl::AccelOscarEmu> > _accelOscarEmu;
	unique_ptr<CMMsl::AccelerometerPace, std::__1::default_delete<CMMsl::AccelerometerPace> > _accelerometerPace;
	unique_ptr<CMMsl::AccessoryAccel, std::__1::default_delete<CMMsl::AccessoryAccel> > _accessoryAccel;
	unique_ptr<CMMsl::AccessoryAccelConfig, std::__1::default_delete<CMMsl::AccessoryAccelConfig> > _accessoryAccelConfig;
	unique_ptr<CMMsl::AccessoryConfig, std::__1::default_delete<CMMsl::AccessoryConfig> > _accessoryConfig;
	unique_ptr<CMMsl::AccessoryDeviceMotion, std::__1::default_delete<CMMsl::AccessoryDeviceMotion> > _accessoryDeviceMotion;
	unique_ptr<CMMsl::AccessoryDeviceMotionConfig, std::__1::default_delete<CMMsl::AccessoryDeviceMotionConfig> > _accessoryDeviceMotionConfig;
	unique_ptr<CMMsl::AccessoryGyro, std::__1::default_delete<CMMsl::AccessoryGyro> > _accessoryGyro;
	unique_ptr<CMMsl::AccessoryGyroCachedBias, std::__1::default_delete<CMMsl::AccessoryGyroCachedBias> > _accessoryGyroCachedBias;
	unique_ptr<CMMsl::AccessoryGyroConfig, std::__1::default_delete<CMMsl::AccessoryGyroConfig> > _accessoryGyroConfig;
	unique_ptr<CMMsl::AccessoryGyroGYTT, std::__1::default_delete<CMMsl::AccessoryGyroGYTT> > _accessoryGyroGYTT;
	unique_ptr<CMMsl::AccessoryProx, std::__1::default_delete<CMMsl::AccessoryProx> > _accessoryProx;
	unique_ptr<CMMsl::AccessoryProxSensorDrop, std::__1::default_delete<CMMsl::AccessoryProxSensorDrop> > _accessoryProxSensorDrop;
	unique_ptr<CMMsl::AccessoryProxTempComp, std::__1::default_delete<CMMsl::AccessoryProxTempComp> > _accessoryProxTempComp;
	unique_ptr<CMMsl::AccessoryProximityConfig, std::__1::default_delete<CMMsl::AccessoryProximityConfig> > _accessoryProximityConfig;
	unique_ptr<CMMsl::AccessoryWake, std::__1::default_delete<CMMsl::AccessoryWake> > _accessoryWake;
	unique_ptr<CMMsl::AccessoryWakeDebug, std::__1::default_delete<CMMsl::AccessoryWakeDebug> > _accessoryWakeDebug;
	unique_ptr<CMMsl::AirpodEvent, std::__1::default_delete<CMMsl::AirpodEvent> > _airpodEvent;
	unique_ptr<CMMsl::ALSData, std::__1::default_delete<CMMsl::ALSData> > _alsData;
	unique_ptr<CMMsl::AnchorCorrection, std::__1::default_delete<CMMsl::AnchorCorrection> > _anchorCorrection;
	unique_ptr<CMMsl::ARSessionState, std::__1::default_delete<CMMsl::ARSessionState> > _arSessionState;
	unique_ptr<CMMsl::AudioAccessoryDeviceMotion, std::__1::default_delete<CMMsl::AudioAccessoryDeviceMotion> > _audioAccessoryDeviceMotion;
	unique_ptr<CMMsl::AuxiliaryDeviceMotion, std::__1::default_delete<CMMsl::AuxiliaryDeviceMotion> > _auxiliaryDeviceMotion;
	unique_ptr<CMMsl::BTConnection, std::__1::default_delete<CMMsl::BTConnection> > _bTConnection;
	unique_ptr<CMMsl::BasebandSpeed, std::__1::default_delete<CMMsl::BasebandSpeed> > _basebandSpeed;
	unique_ptr<CMMsl::BleedToZeroCorrection, std::__1::default_delete<CMMsl::BleedToZeroCorrection> > _bleedToZeroCorrection;
	unique_ptr<CMMsl::BodyMetrics, std::__1::default_delete<CMMsl::BodyMetrics> > _bodyMetrics;
	unique_ptr<CMMsl::BraveHeartAccel, std::__1::default_delete<CMMsl::BraveHeartAccel> > _braveHeartAccel;
	unique_ptr<CMMsl::BraveHeartDeviceMotion, std::__1::default_delete<CMMsl::BraveHeartDeviceMotion> > _braveHeartDeviceMotion;
	unique_ptr<CMMsl::BraveHeartNatalieData, std::__1::default_delete<CMMsl::BraveHeartNatalieData> > _braveHeartNatalieData;
	unique_ptr<CMMsl::BraveHeartVO2MaxInput, std::__1::default_delete<CMMsl::BraveHeartVO2MaxInput> > _braveHeartVO2MaxInput;
	unique_ptr<CMMsl::BraveHeartWorkoutEvent, std::__1::default_delete<CMMsl::BraveHeartWorkoutEvent> > _braveHeartWorkoutEvent;
	unique_ptr<CMMsl::CalorimetryPauseEvent, std::__1::default_delete<CMMsl::CalorimetryPauseEvent> > _calorimetryPauseEvent;
	unique_ptr<CMMsl::CatherineHealthKitData, std::__1::default_delete<CMMsl::CatherineHealthKitData> > _catherineHealthKitData;
	double _cftime;
	unique_ptr<CMMsl::ClefCalibration, std::__1::default_delete<CMMsl::ClefCalibration> > _clefCalibration;
	unique_ptr<CMMsl::CoarseElevationChange, std::__1::default_delete<CMMsl::CoarseElevationChange> > _coarseElevationChange;
	unique_ptr<CMMsl::Compass, std::__1::default_delete<CMMsl::Compass> > _compass;
	unique_ptr<CMMsl::CompassAlignment, std::__1::default_delete<CMMsl::CompassAlignment> > _compassAlignment;
	unique_ptr<CMMsl::CompassCalibration, std::__1::default_delete<CMMsl::CompassCalibration> > _compassCalibration;
	unique_ptr<CMMsl::CompassCalibrationAttempt, std::__1::default_delete<CMMsl::CompassCalibrationAttempt> > _compassCalibrationAttempt;
	unique_ptr<CMMsl::CompassConstraints, std::__1::default_delete<CMMsl::CompassConstraints> > _compassConstraints;
	unique_ptr<CMMsl::CompassCorrection, std::__1::default_delete<CMMsl::CompassCorrection> > _compassCorrection;
	unique_ptr<CMMsl::CourseConstraints, std::__1::default_delete<CMMsl::CourseConstraints> > _courseConstraints;
	unique_ptr<CMMsl::CourseCorrection, std::__1::default_delete<CMMsl::CourseCorrection> > _courseCorrection;
	unique_ptr<CMMsl::DeviceMotion, std::__1::default_delete<CMMsl::DeviceMotion> > _deviceMotion;
	unique_ptr<CMMsl::DeviceMotionCovariance, std::__1::default_delete<CMMsl::DeviceMotionCovariance> > _deviceMotionCovariance;
	unique_ptr<CMMsl::DoubleTap, std::__1::default_delete<CMMsl::DoubleTap> > _doubleTap;
	unique_ptr<CMMsl::ElevationChange, std::__1::default_delete<CMMsl::ElevationChange> > _elevationChange;
	unique_ptr<CMMsl::EnhancedDeviceMotion, std::__1::default_delete<CMMsl::EnhancedDeviceMotion> > _enhancedDeviceMotion;
	unique_ptr<CMMsl::FacePose, std::__1::default_delete<CMMsl::FacePose> > _facePose;
	unique_ptr<CMMsl::FallDetectionDetector, std::__1::default_delete<CMMsl::FallDetectionDetector> > _fallDetectionDetector;
	unique_ptr<CMMsl::FallDetectionReplay, std::__1::default_delete<CMMsl::FallDetectionReplay> > _fallDetectionReplay;
	unique_ptr<CMMsl::FallDetectionStateMachine, std::__1::default_delete<CMMsl::FallDetectionStateMachine> > _fallDetectionStateMachine;
	unique_ptr<CMMsl::FallFalsePositiveSuppressionFeatures, std::__1::default_delete<CMMsl::FallFalsePositiveSuppressionFeatures> > _fallFalsePositiveSuppressionFeatures;
	unique_ptr<CMMsl::FallSnippet, std::__1::default_delete<CMMsl::FallSnippet> > _fallSnippet;
	unique_ptr<CMMsl::FallStats, std::__1::default_delete<CMMsl::FallStats> > _fallStats;
	unique_ptr<CMMsl::GeomagneticData, std::__1::default_delete<CMMsl::GeomagneticData> > _geomagneticData;
	unique_ptr<CMMsl::GravityConstraints, std::__1::default_delete<CMMsl::GravityConstraints> > _gravityConstraints;
	unique_ptr<CMMsl::GravityCorrection, std::__1::default_delete<CMMsl::GravityCorrection> > _gravityCorrection;
	unique_ptr<CMMsl::Gyro, std::__1::default_delete<CMMsl::Gyro> > _gyro;
	unique_ptr<CMMsl::GyroBiasAndVariance, std::__1::default_delete<CMMsl::GyroBiasAndVariance> > _gyroBiasAndVariance;
	unique_ptr<CMMsl::GyroBiasConstraints, std::__1::default_delete<CMMsl::GyroBiasConstraints> > _gyroBiasConstraints;
	unique_ptr<CMMsl::GyroBiasCorrection, std::__1::default_delete<CMMsl::GyroBiasCorrection> > _gyroBiasCorrection;
	unique_ptr<CMMsl::GyroBiasFit, std::__1::default_delete<CMMsl::GyroBiasFit> > _gyroBiasFit;
	unique_ptr<CMMsl::GyroCompass, std::__1::default_delete<CMMsl::GyroCompass> > _gyroCompass;
	unique_ptr<CMMsl::GyroDt, std::__1::default_delete<CMMsl::GyroDt> > _gyroDt;
	unique_ptr<CMMsl::GyroGps, std::__1::default_delete<CMMsl::GyroGps> > _gyroGps;
	unique_ptr<CMMsl::GyroOscarEmu, std::__1::default_delete<CMMsl::GyroOscarEmu> > _gyroOscarEmu;
	unique_ptr<CMMsl::GyroTemperature, std::__1::default_delete<CMMsl::GyroTemperature> > _gyroTemperature;
	unique_ptr<CMMsl::InEarAdditionalState, std::__1::default_delete<CMMsl::InEarAdditionalState> > _inEarAdditionalState;
	unique_ptr<CMMsl::InEarBaseline, std::__1::default_delete<CMMsl::InEarBaseline> > _inEarBaseline;
	unique_ptr<CMMsl::InEarBaselining, std::__1::default_delete<CMMsl::InEarBaselining> > _inEarBaselining;
	unique_ptr<CMMsl::InEarConstraints, std::__1::default_delete<CMMsl::InEarConstraints> > _inEarConstraints;
	unique_ptr<CMMsl::InEarOpenLid, std::__1::default_delete<CMMsl::InEarOpenLid> > _inEarOpenLid;
	unique_ptr<CMMsl::InEarOptical, std::__1::default_delete<CMMsl::InEarOptical> > _inEarOptical;
	unique_ptr<CMMsl::InEarSession, std::__1::default_delete<CMMsl::InEarSession> > _inEarSession;
	unique_ptr<CMMsl::InEarTransition, std::__1::default_delete<CMMsl::InEarTransition> > _inEarTransition;
	unique_ptr<CMMsl::InEarTransitionEntry, std::__1::default_delete<CMMsl::InEarTransitionEntry> > _inEarTransitionEntry;
	unique_ptr<CMMsl::InterpolatedAccessoryAccel, std::__1::default_delete<CMMsl::InterpolatedAccessoryAccel> > _interpolatedAccessoryAccel;
	unique_ptr<CMMsl::IntersiloNSCodingData, std::__1::default_delete<CMMsl::IntersiloNSCodingData> > _intersiloNSCodingData;
	unique_ptr<CMMsl::LocationOscarEmu, std::__1::default_delete<CMMsl::LocationOscarEmu> > _locationOscarEmu;
	unique_ptr<CMMsl::LSLHeadingEstimation, std::__1::default_delete<CMMsl::LSLHeadingEstimation> > _lslHeadingEstimation;
	unique_ptr<CMMsl::Magnetometer, std::__1::default_delete<CMMsl::Magnetometer> > _magnetometer;
	unique_ptr<CMMsl::MetsInfo, std::__1::default_delete<CMMsl::MetsInfo> > _metsInfo;
	unique_ptr<CMMsl::MotionGPSLocation, std::__1::default_delete<CMMsl::MotionGPSLocation> > _motionGPSLocation;
	unique_ptr<CMMsl::MotionHint, std::__1::default_delete<CMMsl::MotionHint> > _motionHint;
	unique_ptr<CMMsl::MotionLoiData, std::__1::default_delete<CMMsl::MotionLoiData> > _motionLoiData;
	unique_ptr<CMMsl::MotionStateUpdate, std::__1::default_delete<CMMsl::MotionStateUpdate> > _motionStateUpdate;
	unique_ptr<CMMsl::MotionWifiAssociation, std::__1::default_delete<CMMsl::MotionWifiAssociation> > _motionWifiAssociation;
	unique_ptr<CMMsl::MotionWifiLocation, std::__1::default_delete<CMMsl::MotionWifiLocation> > _motionWifiLocation;
	unique_ptr<CMMsl::MovementStats, std::__1::default_delete<CMMsl::MovementStats> > _movementStats;
	unique_ptr<CMMsl::MovementStatsGravityProjection, std::__1::default_delete<CMMsl::MovementStatsGravityProjection> > _movementStatsGravityProjection;
	unique_ptr<CMMsl::MovementStatsSignal, std::__1::default_delete<CMMsl::MovementStatsSignal> > _movementStatsSignal;
	unique_ptr<CMMsl::NatalieData, std::__1::default_delete<CMMsl::NatalieData> > _natalieData;
	unique_ptr<CMMsl::NonlinearBiasFit, std::__1::default_delete<CMMsl::NonlinearBiasFit> > _nonlinearBiasFit;
	unique_ptr<CMMsl::Odometer, std::__1::default_delete<CMMsl::Odometer> > _odometer;
	unique_ptr<CMMsl::OdometerWithAltitude, std::__1::default_delete<CMMsl::OdometerWithAltitude> > _odometerWithAltitude;
	unique_ptr<CMMsl::OnsetHeartRateData, std::__1::default_delete<CMMsl::OnsetHeartRateData> > _onsetHeartRateData;
	unique_ptr<CMMsl::PearlAttitude, std::__1::default_delete<CMMsl::PearlAttitude> > _pearlAttitude;
	unique_ptr<CMMsl::PredictedRelativeDeviceMotion, std::__1::default_delete<CMMsl::PredictedRelativeDeviceMotion> > _predictedRelativeDeviceMotion;
	unique_ptr<CMMsl::Pressure, std::__1::default_delete<CMMsl::Pressure> > _pressure;
	unique_ptr<CMMsl::PressureFiltered, std::__1::default_delete<CMMsl::PressureFiltered> > _pressureFiltered;
	unique_ptr<CMMsl::PressureFilteredNoTemperature, std::__1::default_delete<CMMsl::PressureFilteredNoTemperature> > _pressureFilteredNoTemperature;
	unique_ptr<CMMsl::PressureGps, std::__1::default_delete<CMMsl::PressureGps> > _pressureGps;
	unique_ptr<CMMsl::PressureOscarEmu, std::__1::default_delete<CMMsl::PressureOscarEmu> > _pressureOscarEmu;
	unique_ptr<CMMsl::Prox, std::__1::default_delete<CMMsl::Prox> > _prox;
	unique_ptr<CMMsl::RelativeDeviceMotionCorrelatedMotion, std::__1::default_delete<CMMsl::RelativeDeviceMotionCorrelatedMotion> > _relativeDeviceMotionCorrelatedMotion;
	unique_ptr<CMMsl::RelativeDeviceMotionInternal, std::__1::default_delete<CMMsl::RelativeDeviceMotionInternal> > _relativeDeviceMotionInternal;
	unique_ptr<CMMsl::RelativeGravityConstraints, std::__1::default_delete<CMMsl::RelativeGravityConstraints> > _relativeGravityConstraints;
	unique_ptr<CMMsl::RelativeGravityCorrection, std::__1::default_delete<CMMsl::RelativeGravityCorrection> > _relativeGravityCorrection;
	unique_ptr<CMMsl::RotationRate, std::__1::default_delete<CMMsl::RotationRate> > _rotationRate;
	unique_ptr<CMMsl::SessionOverride, std::__1::default_delete<CMMsl::SessionOverride> > _sessionOverride;
	unique_ptr<CMMsl::SignalEnvironment, std::__1::default_delete<CMMsl::SignalEnvironment> > _signalEnvironment;
	unique_ptr<CMMsl::SPUPlaybackExampleDeviceMotion, std::__1::default_delete<CMMsl::SPUPlaybackExampleDeviceMotion> > _spuPlaybackExampleDeviceMotion;
	unique_ptr<CMMsl::SPUPlaybackExampleMotionStateUpdate, std::__1::default_delete<CMMsl::SPUPlaybackExampleMotionStateUpdate> > _spuPlaybackExampleMotionStateUpdate;
	unique_ptr<CMMsl::StepCadenceToStrideLengthBin, std::__1::default_delete<CMMsl::StepCadenceToStrideLengthBin> > _stepCadenceToStrideLengthBin;
	unique_ptr<CMMsl::StepCountEntry, std::__1::default_delete<CMMsl::StepCountEntry> > _stepCountEntry;
	unique_ptr<CMMsl::StreamingHeartRateData, std::__1::default_delete<CMMsl::StreamingHeartRateData> > _streamingHeartRateData;
	unique_ptr<CMMsl::StrideCalBin, std::__1::default_delete<CMMsl::StrideCalBin> > _strideCalBin;
	unique_ptr<CMMsl::TapAccept, std::__1::default_delete<CMMsl::TapAccept> > _tapAccept;
	unique_ptr<CMMsl::TapDetect, std::__1::default_delete<CMMsl::TapDetect> > _tapDetect;
	unique_ptr<CMMsl::TempestPoCAuxiliaryDeviceMotion, std::__1::default_delete<CMMsl::TempestPoCAuxiliaryDeviceMotion> > _tempestPoCAuxiliaryDeviceMotion;
	unique_ptr<CMMsl::TempestPoCListenerOrientation, std::__1::default_delete<CMMsl::TempestPoCListenerOrientation> > _tempestPoCListenerOrientation;
	unique_ptr<CMMsl::TouchOscarEmu, std::__1::default_delete<CMMsl::TouchOscarEmu> > _touchOscarEmu;
	unique_ptr<CMMsl::UserStudyEvent, std::__1::default_delete<CMMsl::UserStudyEvent> > _userStudyEvent;
	unique_ptr<CMMsl::VibrationEvent, std::__1::default_delete<CMMsl::VibrationEvent> > _vibrationEvent;
	unique_ptr<CMMsl::VIOEstimation, std::__1::default_delete<CMMsl::VIOEstimation> > _vioEstimation;
	unique_ptr<CMMsl::VIOPose, std::__1::default_delete<CMMsl::VIOPose> > _vioPose;
	unique_ptr<CMMsl::VisionCompassBias, std::__1::default_delete<CMMsl::VisionCompassBias> > _visionCompassBias;
	unique_ptr<CMMsl::VO2MaxInput, std::__1::default_delete<CMMsl::VO2MaxInput> > _vo2MaxInput;
	unique_ptr<CMMsl::WatchOnWristState, std::__1::default_delete<CMMsl::WatchOnWristState> > _watchOnWristState;
	unique_ptr<CMMsl::WatchOrientationSettings, std::__1::default_delete<CMMsl::WatchOrientationSettings> > _watchOrientationSettings;
	unique_ptr<CMMsl::WifiScanResults, std::__1::default_delete<CMMsl::WifiScanResults> > _wifiScanResults;
	unique_ptr<CMMsl::WorkoutEvent, std::__1::default_delete<CMMsl::WorkoutEvent> > _workoutEvent;
	unique_ptr<CMMsl::WorkoutRecorderALSData, std::__1::default_delete<CMMsl::WorkoutRecorderALSData> > _workoutRecorderALSData;
	unique_ptr<CMMsl::WorkoutRecorderAccel, std::__1::default_delete<CMMsl::WorkoutRecorderAccel> > _workoutRecorderAccel;
	unique_ptr<CMMsl::WorkoutRecorderAccel800, std::__1::default_delete<CMMsl::WorkoutRecorderAccel800> > _workoutRecorderAccel800;
	unique_ptr<CMMsl::WorkoutRecorderBodyMetrics, std::__1::default_delete<CMMsl::WorkoutRecorderBodyMetrics> > _workoutRecorderBodyMetrics;
	unique_ptr<CMMsl::WorkoutRecorderElevation, std::__1::default_delete<CMMsl::WorkoutRecorderElevation> > _workoutRecorderElevation;
	unique_ptr<CMMsl::WorkoutRecorderHealthKitInfo, std::__1::default_delete<CMMsl::WorkoutRecorderHealthKitInfo> > _workoutRecorderHealthKitInfo;
	unique_ptr<CMMsl::WorkoutRecorderHeartRate, std::__1::default_delete<CMMsl::WorkoutRecorderHeartRate> > _workoutRecorderHeartRate;
	unique_ptr<CMMsl::WorkoutRecorderOdometer, std::__1::default_delete<CMMsl::WorkoutRecorderOdometer> > _workoutRecorderOdometer;
	unique_ptr<CMMsl::WorkoutRecorderPressure, std::__1::default_delete<CMMsl::WorkoutRecorderPressure> > _workoutRecorderPressure;
	unique_ptr<CMMsl::WorkoutRecorderRotationRate, std::__1::default_delete<CMMsl::WorkoutRecorderRotationRate> > _workoutRecorderRotationRate;
	unique_ptr<CMMsl::WorkoutRecorderWatchOrientationSettings, std::__1::default_delete<CMMsl::WorkoutRecorderWatchOrientationSettings> > _workoutRecorderWatchOrientationSettings;
	unique_ptr<CMMsl::WorkoutRecorderWifiScanResults, std::__1::default_delete<CMMsl::WorkoutRecorderWifiScanResults> > _workoutRecorderWifiScanResults;
	unique_ptr<CMMsl::WorkoutRecorderWorkoutEvent, std::__1::default_delete<CMMsl::WorkoutRecorderWorkoutEvent> > _workoutRecorderWorkoutEvent;
	unique_ptr<CMMsl::ZeroVelocityCorrection, std::__1::default_delete<CMMsl::ZeroVelocityCorrection> > _zeroVelocityCorrection;
	SCD_Struct_CM9 _has;
} Item;

typedef struct ReaderIterator {
	Reader fReader;
	Item fItem;
} ReaderIterator;

typedef struct {
	double x;
	double y;
	double z;
} SCD_Struct_CM316;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
} SCD_Struct_CM317;

typedef struct {
	SCD_Struct_CM1 field1;
	1 field2;
	7 field3;
	SCD_Struct_CM1 field4;
	SCD_Struct_CM1 field5;
	SCD_Struct_CM3 field6;
	int field7;
	BOOL field8;
	BOOL field9;
	BOOL field10;
	float field11;
} SCD_Struct_CM318;

typedef struct {
	float field1;
} SCD_Struct_CM319;

typedef struct {
	SCD_Struct_CM3 field1;
	1 field2;
	6 field3;
	int field4;
} SCD_Struct_CM320;

typedef struct {
	double w;
	double x;
	double y;
	double z;
} SCD_Struct_CM321;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
	double field5;
	double field6;
	double field7;
	double field8;
	double field9;
} SCD_Struct_CM322;

typedef struct {
	float pressure;
	float temperature;
} SCD_Struct_CM323;

typedef struct {
	double field1;
	double field2;
} SCD_Struct_CM324;

typedef struct AccelUnpacker {
	char* fData;
	unsigned fBitsLeft;
	unsigned char fPartial;
	unsigned long long fTimestampLast;
	long long fTimestampLastDelta;
	int fSampleLast[3];
} AccelUnpacker;

typedef struct GyroUnpacker {
	char* fData;
	unsigned fBitsLeft;
	unsigned char fPartial;
	unsigned long long fTimestampLast;
	long long fTimestampLastDelta;
	int fSampleLast[4];
} GyroUnpacker;

typedef struct PressureUnpacker {
	char* fData;
	unsigned fBitsLeft;
	unsigned char fPartial;
	unsigned long long fTimestampLast;
	long long fTimestampLastDelta;
	int fSampleLast[2];
} PressureUnpacker;

typedef struct _compressed_pair<CMWakeGestureVisitor *, std::__1::default_delete<CMWakeGestureVisitor> > {
	CMWakeGestureVisitor __value_;
} compressed_pair<CMWakeGestureVisitor *, std::__1::default_delete<CMWakeGestureVisitor> >;

typedef struct unique_ptr<CMWakeGestureVisitor, std::__1::default_delete<CMWakeGestureVisitor> > {
	compressed_pair<CMWakeGestureVisitor *, std::__1::default_delete<CMWakeGestureVisitor> > __ptr_;
} unique_ptr<CMWakeGestureVisitor, std::__1::default_delete<CMWakeGestureVisitor> >;

typedef struct IONotificationPort* IONotificationPortRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct Sample {
	double timestamp;
	SCD_Struct_CM1 acceleration;
	unsigned long long sensorTime;
	unsigned short sequenceNumber;
} Sample;

typedef struct _compressed_pair<CLGeomagneticModelProvider_Type::Client *, std::__1::default_delete<CLGeomagneticModelProvider_Type::Client> > {
	Client __value_;
} compressed_pair<CLGeomagneticModelProvider_Type::Client *, std::__1::default_delete<CLGeomagneticModelProvider_Type::Client> >;

typedef struct unique_ptr<CLGeomagneticModelProvider_Type::Client, std::__1::default_delete<CLGeomagneticModelProvider_Type::Client> > {
	compressed_pair<CLGeomagneticModelProvider_Type::Client *, std::__1::default_delete<CLGeomagneticModelProvider_Type::Client> > __ptr_;
} unique_ptr<CLGeomagneticModelProvider_Type::Client, std::__1::default_delete<CLGeomagneticModelProvider_Type::Client> >;

typedef struct {
	double x;
	double y;
	double z;
	double magnitude;
	double horizontal;
	double declination;
	double inclination;
	double timestamp;
} SCD_Struct_CM335;

typedef struct _compressed_pair<CLIspDataVisitor *, std::__1::default_delete<CLIspDataVisitor> > {
	CLIspDataVisitor __value_;
} compressed_pair<CLIspDataVisitor *, std::__1::default_delete<CLIspDataVisitor> >;

typedef struct unique_ptr<CLIspDataVisitor, std::__1::default_delete<CLIspDataVisitor> > {
	compressed_pair<CLIspDataVisitor *, std::__1::default_delete<CLIspDataVisitor> > __ptr_;
} unique_ptr<CLIspDataVisitor, std::__1::default_delete<CLIspDataVisitor> >;

typedef struct _compressed_pair<CLDeviceMotionLiteService *, std::__1::default_delete<CLDeviceMotionLiteService> > {
	CLDeviceMotionLiteService __value_;
} compressed_pair<CLDeviceMotionLiteService *, std::__1::default_delete<CLDeviceMotionLiteService> >;

typedef struct unique_ptr<CLDeviceMotionLiteService, std::__1::default_delete<CLDeviceMotionLiteService> > {
	compressed_pair<CLDeviceMotionLiteService *, std::__1::default_delete<CLDeviceMotionLiteService> > __ptr_;
} unique_ptr<CLDeviceMotionLiteService, std::__1::default_delete<CLDeviceMotionLiteService> >;

typedef struct _compressed_pair<CMMotionManagerStatsCollector *, std::__1::default_delete<CMMotionManagerStatsCollector> > {
	CMMotionManagerStatsCollector __value_;
} compressed_pair<CMMotionManagerStatsCollector *, std::__1::default_delete<CMMotionManagerStatsCollector> >;

typedef struct unique_ptr<CMMotionManagerStatsCollector, std::__1::default_delete<CMMotionManagerStatsCollector> > {
	compressed_pair<CMMotionManagerStatsCollector *, std::__1::default_delete<CMMotionManagerStatsCollector> > __ptr_;
} unique_ptr<CMMotionManagerStatsCollector, std::__1::default_delete<CMMotionManagerStatsCollector> >;

typedef struct {
	BOOL field1;
	char field2[246];
} SCD_Struct_CM342;

typedef struct {
	SCD_Struct_CM1 field1;
	SCD_Struct_CM1 field2;
} SCD_Struct_CM343;

typedef struct {
	int field1;
	double( field2;
	/*function pointer*/void* field3;
	= field4;
	SCD_Struct_CM3 field5;
	4 field6;
	3 field7;
	SCD_Struct_CM3 field8;
	4 field9;
	2) field10;
} SCD_Struct_CM344;

typedef struct {
	int field1;
} SCD_Struct_CM345;

typedef struct {
	unsigned motionHint : 1;
	unsigned gpsHint : 1;
	unsigned basebandHint : 1;
	unsigned wifiHint : 1;
	unsigned btHint : 1;
} SCD_Struct_CM346;

typedef struct CLMotionActivity {
	int type;
	int confidence;
	int mountedState;
	int mountedConfidence;
	BOOL isStanding;
	float tilt;
	double timestamp;
	BOOL isVehicleConnected;
	int exitState;
	double estExitTime;
	double startTime;
	int rawType;
	int rawConfidence;
	SCD_Struct_CM346 vehicularFlags;
	int vehicularConfidence;
	float drivingStowedLikelihoodSum;
	float drivingArmLikelihoodSum;
	float ssLikelihoodSum;
	int workoutDetectionType;
	double workoutDetectionTime;
	unsigned long long workoutEscalationTime;
} CLMotionActivity;

typedef const struct __CFString* CFStringRef;

typedef const struct __CFDictionary* CFDictionaryRef;

typedef const struct __CFArray* CFArrayRef;

typedef struct {
	int field1;
	SCD_Struct_CM3 field2;
	2 field3;
	4 field4;
	double field5;
	double field6;
	double field7;
	double field8;
	double field9;
	double field10;
	double field11;
	double field12;
	int field13;
	double field14;
	int field15;
	SCD_Struct_CM3 field16;
	2 field17;
	4 field18;
	double field19;
	int field20;
	unsigned field21;
	int field22;
	int field23;
	int field24;
} SCD_Struct_CL351;

typedef struct {
	unsigned long long field1;
	double field2;
	double field3;
	double field4;
	double field5;
} SCD_Struct_CL352;

typedef struct {
	SCD_Struct_CM1 field1;
	int field2;
} SCD_Struct_CL353;

typedef struct {
	BOOL field1;
	BOOL field2;
	BOOL field3;
	BOOL field4;
	BOOL field5;
	BOOL field6;
	unsigned char field7;
	float field8;
	char field9;
	unsigned short field10;
} SCD_Struct_CL354;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct {
	SCD_Struct_CM1 field1;
	2 field2;
	1 field3;
	SCD_Struct_CM1 field4;
	SCD_Struct_CM1 field5;
	SCD_Struct_CM1 field6;
	SCD_Struct_CM1 field7;
	unsigned long long field8;
	BOOL field9;
	float field10;
	float field11;
	SCD_Struct_CM3 field12;
	unsigned char field13[3];
} SCD_Struct_CM356;

typedef struct _compressed_pair<float **, std::__1::allocator<float *> > {
	float __value_;
} compressed_pair<float **, std::__1::allocator<float *> >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<float> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<float> >;

typedef struct _split_buffer<float *, std::__1::allocator<float *> > {
	float __first_;
	float __begin_;
	float __end_;
	compressed_pair<float **, std::__1::allocator<float *> > __end_cap_;
} split_buffer<float *, std::__1::allocator<float *> >;

typedef struct deque<float, std::__1::allocator<float> > {
	split_buffer<float *, std::__1::allocator<float *> > __map_;
	unsigned long long __start_;
	compressed_pair<unsigned long, std::__1::allocator<float> > __size_;
} deque<float, std::__1::allocator<float> >;

typedef struct {
	int recordId;
	double startTime;
	unsigned pacebin;
	double kvalue;
	double kvalueTrack;
	double score;
	double endTime;
	double distance;
	int steps;
	int session;
	double speed;
	double percentGrade;
	int gpsSource;
	double timestamp;
} SCD_Struct_CM361;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, int>, std::__1::less<unsigned long>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, int>, std::__1::less<unsigned long>, true> >;

typedef struct _tree_end_node<std::__1::__tree_node_base<void *> *> {
	__tree_node_base<void *> __left_;
} tree_end_node<std::__1::__tree_node_base<void *> *>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, int>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __value_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, int>, void *> > >;

typedef struct _tree<std::__1::__value_type<unsigned long, int>, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, int>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, int> > > {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, int>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, int>, std::__1::less<unsigned long>, true> > __pair3_;
} tree<std::__1::__value_type<unsigned long, int>, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, int>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, int> > >;

typedef struct map<unsigned long, int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, int> > > {
	tree<std::__1::__value_type<unsigned long, int>, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, int>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, int> > > __tree_;
} map<unsigned long, int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, int> > >;

