/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
*/

typedef struct {
	float backendRunTimeMinMsec;
	float backendRunTimeMaxMsec;
	float backendRunTimeAvgMsec;
	float backendRunTimeTotalMsec;
	float frontendRunTimeTotalMsec;
	unsigned numJasperPointsTotal;
	float numJasperPointsAvg;
	unsigned numOfFrames;
} SCD_Struct_JD0;

typedef struct __CVBuffer* CVBufferRef;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_JD2;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<TimeSync::TimestampedObject<JDPointCloud *> > > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<TimeSync::TimestampedObject<JDPointCloud *> > >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<TimeSync::TimestampedObject<TimeSync::Image> > > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<TimeSync::TimestampedObject<TimeSync::Image> > >;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct _compressed_pair<TimeSync::TimestampedObject<TimeSync::Image> **, std::__1::allocator<TimeSync::TimestampedObject<TimeSync::Image> *> > {
	TimestampedObject<TimeSync::Image> __value_;
} compressed_pair<TimeSync::TimestampedObject<TimeSync::Image> **, std::__1::allocator<TimeSync::TimestampedObject<TimeSync::Image> *> >;

typedef struct _split_buffer<TimeSync::TimestampedObject<TimeSync::Image> *, std::__1::allocator<TimeSync::TimestampedObject<TimeSync::Image> *> > {
	TimestampedObject<TimeSync::Image> __first_;
	TimestampedObject<TimeSync::Image> __begin_;
	TimestampedObject<TimeSync::Image> __end_;
	compressed_pair<TimeSync::TimestampedObject<TimeSync::Image> **, std::__1::allocator<TimeSync::TimestampedObject<TimeSync::Image> *> > __end_cap_;
} split_buffer<TimeSync::TimestampedObject<TimeSync::Image> *, std::__1::allocator<TimeSync::TimestampedObject<TimeSync::Image> *> >;

typedef struct deque<TimeSync::TimestampedObject<TimeSync::Image>, std::__1::allocator<TimeSync::TimestampedObject<TimeSync::Image> > > {
	split_buffer<TimeSync::TimestampedObject<TimeSync::Image> *, std::__1::allocator<TimeSync::TimestampedObject<TimeSync::Image> *> > __map_;
	unsigned long long __start_;
	compressed_pair<unsigned long, std::__1::allocator<TimeSync::TimestampedObject<TimeSync::Image> > > __size_;
} deque<TimeSync::TimestampedObject<TimeSync::Image>, std::__1::allocator<TimeSync::TimestampedObject<TimeSync::Image> > >;

typedef struct _compressed_pair<TimeSync::TimestampedObject<JDPointCloud *> **, std::__1::allocator<TimeSync::TimestampedObject<JDPointCloud *> *> > {
	TimestampedObject<JDPointCloud *> __value_;
} compressed_pair<TimeSync::TimestampedObject<JDPointCloud *> **, std::__1::allocator<TimeSync::TimestampedObject<JDPointCloud *> *> >;

typedef struct _split_buffer<TimeSync::TimestampedObject<JDPointCloud *> *, std::__1::allocator<TimeSync::TimestampedObject<JDPointCloud *> *> > {
	TimestampedObject<JDPointCloud *> __first_;
	TimestampedObject<JDPointCloud *> __begin_;
	TimestampedObject<JDPointCloud *> __end_;
	compressed_pair<TimeSync::TimestampedObject<JDPointCloud *> **, std::__1::allocator<TimeSync::TimestampedObject<JDPointCloud *> *> > __end_cap_;
} split_buffer<TimeSync::TimestampedObject<JDPointCloud *> *, std::__1::allocator<TimeSync::TimestampedObject<JDPointCloud *> *> >;

typedef struct deque<TimeSync::TimestampedObject<JDPointCloud *>, std::__1::allocator<TimeSync::TimestampedObject<JDPointCloud *> > > {
	split_buffer<TimeSync::TimestampedObject<JDPointCloud *> *, std::__1::allocator<TimeSync::TimestampedObject<JDPointCloud *> *> > __map_;
	unsigned long long __start_;
	compressed_pair<unsigned long, std::__1::allocator<TimeSync::TimestampedObject<JDPointCloud *> > > __size_;
} deque<TimeSync::TimestampedObject<JDPointCloud *>, std::__1::allocator<TimeSync::TimestampedObject<JDPointCloud *> > >;

typedef struct TimeSync {
	deque<TimeSync::TimestampedObject<JDPointCloud *>, std::__1::allocator<TimeSync::TimestampedObject<JDPointCloud *> > > m_pointClouds;
	deque<TimeSync::TimestampedObject<TimeSync::Image>, std::__1::allocator<TimeSync::TimestampedObject<TimeSync::Image> > > m_images;
	opaque_pthread_mutex_t m_lock;
	int m_numberOfBanksToMatch;
} TimeSync;

typedef struct _compressed_pair<unsigned char *, std::__1::default_delete<unsigned char []> > {
	char* __value_;
} compressed_pair<unsigned char *, std::__1::default_delete<unsigned char []> >;

typedef struct shared_ptr<jasper::CameraCalibrationData> {
	CameraCalibrationData __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<jasper::CameraCalibrationData>;

typedef struct unique_ptr<unsigned char [], std::__1::default_delete<unsigned char []> > {
	compressed_pair<unsigned char *, std::__1::default_delete<unsigned char []> > __ptr_;
} unique_ptr<unsigned char [], std::__1::default_delete<unsigned char []> >;

typedef struct PointCloud {
	unique_ptr<unsigned char [], std::__1::default_delete<unsigned char []> > m_ownedStorage;
	PointCloudDataHeader m_header;
	shared_ptr<jasper::CameraCalibrationData> m_cameraCalib;
} PointCloud;

typedef struct _compressed_pair<JasperErrorSimulation *, std::__1::default_delete<JasperErrorSimulation> > {
	JasperErrorSimulation __value_;
} compressed_pair<JasperErrorSimulation *, std::__1::default_delete<JasperErrorSimulation> >;

typedef struct unique_ptr<JasperErrorSimulation, std::__1::default_delete<JasperErrorSimulation> > {
	compressed_pair<JasperErrorSimulation *, std::__1::default_delete<JasperErrorSimulation> > __ptr_;
} unique_ptr<JasperErrorSimulation, std::__1::default_delete<JasperErrorSimulation> >;

typedef struct _compressed_pair<JasperAlgo::Impl *, std::__1::default_delete<JasperAlgo::Impl> > {
	Impl __value_;
} compressed_pair<JasperAlgo::Impl *, std::__1::default_delete<JasperAlgo::Impl> >;

typedef struct unique_ptr<JasperAlgo::Impl, std::__1::default_delete<JasperAlgo::Impl> > {
	compressed_pair<JasperAlgo::Impl *, std::__1::default_delete<JasperAlgo::Impl> > __ptr_;
} unique_ptr<JasperAlgo::Impl, std::__1::default_delete<JasperAlgo::Impl> >;

typedef struct JasperAlgo {
	unique_ptr<JasperAlgo::Impl, std::__1::default_delete<JasperAlgo::Impl> > _impl;
} JasperAlgo;

typedef struct __CVDataBufferPool* CVDataBufferPoolRef;

typedef struct JasperHybridPresetSimulation {
	Impl m_impl;
} JasperHybridPresetSimulation;

typedef struct {
	[3 field1];
} SCD_Struct_JD24;

typedef struct {
	[4 field1];
} SCD_Struct_JD25;

typedef struct JDGDCPolynomials {
	float forwardOrders[8];
	float inverseOrders[8];
} JDGDCPolynomials;

typedef struct JasperBackGlassSimulation {
	Impl m_impl;
} JasperBackGlassSimulation;

typedef struct {
	void data;
	void reserved;
	unsigned long long dim[4];
	unsigned long long stride[4];
	unsigned long long width;
	unsigned long long height;
	unsigned long long channels;
	unsigned long long batch_number;
	unsigned long long sequence_length;
	unsigned long long stride_width;
	unsigned long long stride_height;
	unsigned long long stride_channels;
	unsigned long long stride_batch_number;
	unsigned long long stride_sequence_length;
	int storage_type;
} SCD_Struct_Fr28;

typedef struct {
	float bins[104];
} SCD_Struct_JD29;

typedef struct {
	float bins[64];
	float tailParams[5];
} SCD_Struct_JD30;

typedef struct {
	float x;
	float y;
	unsigned char spotId;
	unsigned char tileId;
	unsigned char confidence;
	unsigned char rsvd;
} SCD_Struct_JD31;

typedef struct {
	float mu;
	float sigma;
} SCD_Struct_JD32;

typedef struct {
	unsigned short nominalRef[2];
	short TRGOUTDLY;
	unsigned short TMINTOF;
	unsigned short SETPLSCG;
	unsigned short TGDDLY;
	unsigned short TDCTR1C;
	unsigned short gateDelay;
	unsigned short refStrayDelay;
	unsigned short imgStrayDelay;
	unsigned short rsvd;
} SCD_Struct_JD33;

typedef struct {
	char positions[400];
} SCD_Struct_JD34;

typedef struct {
	char positions[4];
} SCD_Struct_JD35;

typedef struct {
	char positions[140];
} SCD_Struct_JD36;

typedef struct {
	short spots[144];
} SCD_Struct_JD37;

typedef struct {
	double efl;
	double pixelSize;
	double principalPoint[2];
	double undistortLUT[256];
	double distortLUT[256];
	double distortionCenter[2];
	unsigned short calibResX;
	unsigned short calibResY;
} SCD_Struct_JD38;

typedef struct {
	double rotMatrix[3][3];
	double focalPoint[3];
} SCD_Struct_JD39;

typedef struct {
	double distortVendor[11];
	double tempSubstrate;
	double tempKirk;
	double tempPeriscope;
} SCD_Struct_JD40;

typedef struct {
	SCD_Struct_JD40 jlin;
	unsigned char uuidFF[16];
	unsigned char uuidMPC[16];
} SCD_Struct_JD41;

typedef struct {
	SCD_Struct_JD37 banks[4];
} SCD_Struct_JD42;

typedef struct {
	SCD_Struct_JD42 stray;
	SCD_Struct_JD42 ref0;
	SCD_Struct_JD42 ref1;
} SCD_Struct_JD43;

typedef struct {
	SCD_Struct_JD43 widePulseShortRangeFreeRunning;
	SCD_Struct_JD43 narrowPulseShortRangeFreeRunning;
	SCD_Struct_JD43 widePulseSoftGating;
} SCD_Struct_JD44;

typedef struct {
	SCD_Struct_JD36 refs[2];
} SCD_Struct_JD45;

typedef struct {
	SCD_Struct_JD45 banks[4];
} SCD_Struct_JD46;

typedef struct {
	char refScale;
	unsigned char rsvd[3];
	SCD_Struct_JD46 widePulseShortRangeFreeRunning;
	SCD_Struct_JD46 narrowPulseShortRangeFreeRunning;
	SCD_Struct_JD46 widePulseSoftGating;
} SCD_Struct_JD47;

typedef struct {
	SCD_Struct_JD35 tdcs[144];
	SCD_Struct_JD35 refs[2];
	char tdcScale;
	unsigned char rsvd[3];
} SCD_Struct_JD48;

typedef struct {
	char pixelScale;
	BOOL isCompressed;
	BOOL centroids;
	unsigned char rsvd;
	SCD_Struct_JD34 tdcs[144];
} SCD_Struct_JD49;

typedef struct {
	SCD_Struct_JD49 pixel;
	SCD_Struct_JD48 tdc;
	SCD_Struct_JD47 ref;
	SCD_Struct_JD44 abs;
} SCD_Struct_JD50;

typedef struct {
	SCD_Struct_JD33 banks[4];
} SCD_Struct_JD51;

typedef struct {
	SCD_Struct_JD51 widePulseShortRangeFreeRunning;
	SCD_Struct_JD51 narrowPulseShortRangeFreeRunning;
	SCD_Struct_JD51 widePulseSoftGating;
} SCD_Struct_JD52;

typedef struct {
	SCD_Struct_JD31 spots[144];
} SCD_Struct_JD53;

typedef struct JasperCalibSpotLocations {
	SCD_Struct_JD53 banks[4];
	float calibDistance;
} JasperCalibSpotLocations;

typedef struct {
	SCD_Struct_JD30 banks[4];
} SCD_Struct_JD55;

typedef struct {
	SCD_Struct_JD55 widePulseShortRange;
	SCD_Struct_JD55 narrowPulseShortRange;
} SCD_Struct_JD56;

typedef struct {
	SCD_Struct_JD29 tdcs[2];
} SCD_Struct_JD57;

typedef struct {
	SCD_Struct_JD29 tdcs[4];
} SCD_Struct_JD58;

typedef struct {
	SCD_Struct_JD57 ref[2];
	SCD_Struct_JD58 img[144];
} SCD_Struct_JD59;

typedef struct {
	SCD_Struct_JD59 shortRange;
	SCD_Struct_JD59 normalRange;
} SCD_Struct_JD60;

typedef struct JasperCalib {
	unsigned version;
	BOOL softGatingValid;
	BOOL nominalPdeFromNVM;
	unsigned char rsvd0[2];
	SCD_Struct_JD60 DNL_INL;
	char QE[140][180];
	SCD_Struct_JD56 pulseShape;
	JasperCalibSpotLocations nominalSpotLocations;
	JasperCalibSpotLocations operationalSpotLocations;
	SCD_Struct_JD32 nominalPDE;
	SCD_Struct_JD52 nominalRef;
	SCD_Struct_JD50 skews;
	SCD_Struct_JD38 irIntrinsics;
	SCD_Struct_JD38 superWideIntrinsics;
	SCD_Struct_JD39 factorySuperWideExtrinsics;
	SCD_Struct_JD39 operationalSuperWideExtrinsics;
	SCD_Struct_JD39 operationalWideExtrinsics;
	SCD_Struct_JD41 additionalParams;
} JasperCalib;

typedef struct {
	void plan;
	int network_index;
} SCD_Struct_DN62;

