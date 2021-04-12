/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	double x;
	double y;
	double z;
} SCD_Struct_CM9;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
} SCD_Struct_CM10;

typedef struct {
	SCD_Struct_CM1 field1;
	0 field2;
	SCD_Struct_CM1 field3;
	SCD_Struct_CM1 field4;
	SCD_Struct_CM1 field5;
	int field6;
	BOOL field7;
	BOOL field8;
	BOOL field9;
	float field10;
	int field11;
} SCD_Struct_CM11;

typedef struct {
	float field1;
} SCD_Struct_CM12;

typedef struct {
	SCD_Struct_CM9 field1;
	int field2;
} SCD_Struct_CM13;

typedef struct {
	double w;
	double x;
	double y;
	double z;
} SCD_Struct_CM14;

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
} SCD_Struct_CM15;

typedef struct {
	float pressure;
	float temperature;
} SCD_Struct_CM16;

typedef struct {
	double field1;
	double field2;
} SCD_Struct_CM17;

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
} Sample;

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
	char field2[282];
} SCD_Struct_CM32;

typedef struct {
	SCD_Struct_CM1 field1;
	SCD_Struct_CM1 field2;
} SCD_Struct_CM33;

typedef struct {
	int field1;
	double field2;
	double( field3;
	/*function pointer*/void* field4;
	= field5;
	SCD_Struct_CM3 field6;
	3 field7;
	SCD_Struct_CM3 field8;
	2) field9;
} SCD_Struct_CM34;

typedef struct {
	int field1;
} SCD_Struct_CM35;

typedef struct _compressed_pair<CMHeadTrackingService *, std::__1::default_delete<CMHeadTrackingService> > {
	CMHeadTrackingService __value_;
} compressed_pair<CMHeadTrackingService *, std::__1::default_delete<CMHeadTrackingService> >;

typedef struct unique_ptr<CMHeadTrackingService, std::__1::default_delete<CMHeadTrackingService> > {
	compressed_pair<CMHeadTrackingService *, std::__1::default_delete<CMHeadTrackingService> > __ptr_;
} unique_ptr<CMHeadTrackingService, std::__1::default_delete<CMHeadTrackingService> >;

typedef struct CMOQuaternion {
	float elements[4];
} CMOQuaternion;

typedef struct {
	unsigned short fHead;
	unsigned short fSize;
} SCD_Struct_CM39;

typedef struct CMQueueStorage<double, 10> {
	char buffer[72];
} CMQueueStorage<double, 10>;

typedef struct CMFixedSizeQueue<double, 10> {
	SCD_Struct_CM39 fHeadAndSize;
	unsigned fCapacity;
	char fBuffer[8];
	CMQueueStorage<double, 10> fStorage;
} CMFixedSizeQueue<double, 10>;

typedef struct UnTimesyncedAuxSampleHelper {
	unsigned totalUnsyncedSamples;
	unsigned totalUnsyncedOutlierSamples;
	double auxAndSrcSensorTimeOffset;
	CMFixedSizeQueue<double, 10> auxAndSrcSensorTimeOffsetBuffer;
} UnTimesyncedAuxSampleHelper;

typedef struct _compressed_pair<CMMediaSessionAnalyticsTracker *, std::__1::default_delete<CMMediaSessionAnalyticsTracker> > {
	CMMediaSessionAnalyticsTracker __value_;
} compressed_pair<CMMediaSessionAnalyticsTracker *, std::__1::default_delete<CMMediaSessionAnalyticsTracker> >;

typedef struct unique_ptr<CMMediaSessionAnalyticsTracker, std::__1::default_delete<CMMediaSessionAnalyticsTracker> > {
	compressed_pair<CMMediaSessionAnalyticsTracker *, std::__1::default_delete<CMMediaSessionAnalyticsTracker> > __ptr_;
} unique_ptr<CMMediaSessionAnalyticsTracker, std::__1::default_delete<CMMediaSessionAnalyticsTracker> >;

typedef struct CMVector<float, 3> {
	float elements[3];
} CMVector<float, 3>;

typedef struct Status {
	unsigned short bits;
} Status;

typedef struct {
	CMOQuaternion quaternion;
	CMVector<float, 3> rotationRate;
	CMVector<float, 3> biasCovariance;
	CMVector<float, 3> userAcceleration;
	Status status;
} SCD_Struct_CM47;

typedef struct AudioAccessorySample {
	SCD_Struct_CM47 auxDM;
	unsigned long long sensorTime;
	double timestamp;
	double arrivalTimestamp;
	CMVector<float, 3> filteredAcceleration;
	float quiescentNoise;
	int quiescentMode;
	unsigned sequenceNumber;
	int sensorLocation;
	int timeSyncStatus;
	unsigned long long btcTimestamp;
	double sampleLatency;
} AudioAccessorySample;

typedef struct shared_ptr<CLIoHidInterface::Device> {
	Device __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<CLIoHidInterface::Device>;

typedef struct _compressed_pair<CLSettings *, std::__1::default_delete<CLSettings> > {
	CLSettings __value_;
} compressed_pair<CLSettings *, std::__1::default_delete<CLSettings> >;

typedef struct unique_ptr<CLSettings, std::__1::default_delete<CLSettings> > {
	compressed_pair<CLSettings *, std::__1::default_delete<CLSettings> > __ptr_;
} unique_ptr<CLSettings, std::__1::default_delete<CLSettings> >;

typedef struct _compressed_pair<CMSpatialLogger *, std::__1::default_delete<CMSpatialLogger> > {
	CMSpatialLogger __value_;
} compressed_pair<CMSpatialLogger *, std::__1::default_delete<CMSpatialLogger> >;

typedef struct unique_ptr<CMSpatialLogger, std::__1::default_delete<CMSpatialLogger> > {
	compressed_pair<CMSpatialLogger *, std::__1::default_delete<CMSpatialLogger> > __ptr_;
} unique_ptr<CMSpatialLogger, std::__1::default_delete<CMSpatialLogger> >;

typedef struct {
	float field1;
	BOOL field2;
	BOOL field3;
	int field4;
	double field5;
} SCD_Struct_CM54;

typedef struct {
	unsigned motionHint : 1;
	unsigned gpsHint : 1;
	unsigned basebandHint : 1;
	unsigned wifiHint : 1;
	unsigned btHint : 1;
} SCD_Struct_CM55;

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
	SCD_Struct_CM55 vehicularFlags;
	int vehicularConfidence;
	float drivingStowedLikelihoodSum;
	float drivingArmLikelihoodSum;
	float ssLikelihoodSum;
	int workoutDetectionType;
	double workoutDetectionTime;
	unsigned long long workoutEscalationTime;
	int typeYouth;
} CLMotionActivity;

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
} SCD_Struct_CL57;

typedef const struct __CFString* CFStringRef;

typedef const struct __CFDictionary* CFDictionaryRef;

typedef const struct __CFArray* CFArrayRef;

typedef struct {
	int field1;
	SCD_Struct_CM1 field2;
	7 field3;
	double field4;
	double field5;
	double field6;
	double field7;
	double field8;
	double field9;
	double field10;
	double field11;
	int field12;
	double field13;
	int field14;
	SCD_Struct_CM1 field15;
	7 field16;
	double field17;
	int field18;
	unsigned field19;
	int field20;
	int field21;
	int field22;
} SCD_Struct_CL61;

typedef struct {
	SCD_Struct_CM1 field1;
	int field2;
} SCD_Struct_CL62;

typedef struct {
	unsigned long long field1;
	double field2;
	double field3;
	double field4;
	double field5;
} SCD_Struct_CL63;

typedef struct {
	double field1;
	double field2;
	double field3;
	int field4;
} SCD_Struct_CL64;

typedef struct {
	SCD_Struct_CM1 field1;
	4 field2;
	SCD_Struct_CM9 field3;
	double field4;
	double field5;
	double field6;
} SCD_Struct_CM65;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct {
	SCD_Struct_CM1 field1;
	4 field2;
	SCD_Struct_CM1 field3;
	SCD_Struct_CM1 field4;
	SCD_Struct_CM1 field5;
	SCD_Struct_CM1 field6;
	unsigned long long field7;
	BOOL field8;
	float field9;
	float field10;
	SCD_Struct_CM1 field11;
	unsigned char field12[3];
} SCD_Struct_CM67;

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
} SCD_Struct_CM72;

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

