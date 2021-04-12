/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
*/

typedef struct __CVBuffer* CVBufferRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct {
	float backendRunTimeMinMsec;
	float backendRunTimeMaxMsec;
	float backendRunTimeAvgMsec;
	float backendRunTimeTotalMsec;
	float frontendRunTimeTotalMsec;
	unsigned numJasperPointsTotal;
	float numJasperPointsAvg;
	unsigned numOfFrames;
} SCD_Struct_JD2;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_JD3;

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

typedef struct _NSZone* NSZoneRef;

typedef struct {
	[3 field1];
} SCD_Struct_JD22;

typedef struct {
	[4 field1];
} SCD_Struct_JD23;

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
} SCD_Struct_Fr26;

typedef struct {
	float bins[104];
} SCD_Struct_JD27;

typedef struct {
	float bins[64];
	float tailParams[5];
} SCD_Struct_JD28;

typedef struct {
	unsigned char spotId;
	unsigned char tileId;
	unsigned char strayIntensity;
	unsigned char rsvd;
	float spotPower;
} SCD_Struct_JD29;

typedef struct {
	float x;
	float y;
} SCD_Struct_JD30;

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
} SCD_Struct_JD31;

typedef struct {
	char positions[400];
} SCD_Struct_JD32;

typedef struct {
	char positions[4];
} SCD_Struct_JD33;

typedef struct {
	char positions[140];
} SCD_Struct_JD34;

typedef struct {
	short spots[144];
} SCD_Struct_JD35;

typedef struct {
	float x;
	float y;
	float drQs;
} SCD_Struct_JD36;

typedef struct {
	double efl;
	double pixelSize;
	double principalPoint[2];
	double undistortLUT[256];
	double distortLUT[256];
	double distortionCenter[2];
	unsigned short calibResX;
	unsigned short calibResY;
} SCD_Struct_JD37;

typedef struct {
	double rotMatrix[3][3];
	double focalPoint[3];
} SCD_Struct_JD38;

typedef struct {
	double distortVendor[11];
	double tempSubstrate;
	double tempKirk;
	double tempPeriscope;
} SCD_Struct_JD39;

typedef struct {
	short freeRunningTDCTR1C;
	unsigned short T0Type;
} SCD_Struct_JD40;

typedef struct {
	SCD_Struct_JD40 banks[4];
} SCD_Struct_JD41;

typedef struct {
	SCD_Struct_JD39 jlin;
	unsigned char uuidFF[16];
	unsigned char uuidMPC[16];
} SCD_Struct_JD42;

typedef struct {
	SCD_Struct_JD36 spots[4][8];
} SCD_Struct_JD43;

typedef struct {
	SCD_Struct_JD35 banks[4];
} SCD_Struct_JD44;

typedef struct {
	SCD_Struct_JD44 stray;
	SCD_Struct_JD44 ref0;
	SCD_Struct_JD44 ref1;
} SCD_Struct_JD45;

typedef struct {
	SCD_Struct_JD45 widePulseShortRangeFreeRunning;
	SCD_Struct_JD45 narrowPulseShortRangeFreeRunning;
	SCD_Struct_JD45 widePulseSoftGating;
} SCD_Struct_JD46;

typedef struct {
	SCD_Struct_JD34 refs[2];
} SCD_Struct_JD47;

typedef struct {
	SCD_Struct_JD47 banks[4];
} SCD_Struct_JD48;

typedef struct {
	char refScale;
	unsigned char rsvd[3];
	SCD_Struct_JD48 widePulseShortRangeFreeRunning;
	SCD_Struct_JD48 narrowPulseShortRangeFreeRunning;
	SCD_Struct_JD48 widePulseSoftGating;
} SCD_Struct_JD49;

typedef struct {
	SCD_Struct_JD33 tdcs[144];
	SCD_Struct_JD33 refs[2];
	char tdcScale;
	unsigned char rsvd[3];
} SCD_Struct_JD50;

typedef struct {
	char pixelScale;
	BOOL isCompressed;
	BOOL centroids;
	unsigned char rsvd;
	SCD_Struct_JD32 tdcs[144];
} SCD_Struct_JD51;

typedef struct {
	SCD_Struct_JD51 pixel;
	SCD_Struct_JD50 tdc;
	SCD_Struct_JD49 ref;
	SCD_Struct_JD46 abs;
} SCD_Struct_JD52;

typedef struct {
	SCD_Struct_JD31 banks[4];
} SCD_Struct_JD53;

typedef struct {
	SCD_Struct_JD53 widePulseShortRangeFreeRunning;
	SCD_Struct_JD53 narrowPulseShortRangeFreeRunning;
	SCD_Struct_JD53 widePulseSoftGating;
} SCD_Struct_JD54;

typedef struct {
	SCD_Struct_JD30 spots[144];
} SCD_Struct_JD55;

typedef struct JasperCalibSpotLocations {
	SCD_Struct_JD55 banks[4];
	float calibDistance;
} JasperCalibSpotLocations;

typedef struct {
	SCD_Struct_JD29 spots[144];
} SCD_Struct_JD57;

typedef struct {
	SCD_Struct_JD57 banks[4];
} SCD_Struct_JD58;

typedef struct {
	SCD_Struct_JD58 spotsData;
	JasperCalibSpotLocations locations;
} SCD_Struct_JD59;

typedef struct {
	SCD_Struct_JD28 banks[4];
} SCD_Struct_JD60;

typedef struct {
	SCD_Struct_JD60 widePulseShortRange;
	SCD_Struct_JD60 narrowPulseShortRange;
} SCD_Struct_JD61;

typedef struct {
	SCD_Struct_JD27 tdcs[2];
} SCD_Struct_JD62;

typedef struct {
	SCD_Struct_JD27 tdcs[4];
} SCD_Struct_JD63;

typedef struct {
	SCD_Struct_JD62 ref[2];
	SCD_Struct_JD63 img[144];
} SCD_Struct_JD64;

typedef struct {
	SCD_Struct_JD64 shortRange;
	SCD_Struct_JD64 normalRange;
} SCD_Struct_JD65;

typedef struct JasperCalib {
	unsigned version;
	BOOL softGatingValid;
	BOOL nominalPdeFromNVM;
	unsigned char rsvd0[2];
	SCD_Struct_JD65 DNL_INL;
	char QE[140][180];
	SCD_Struct_JD61 pulseShape;
	SCD_Struct_JD59 spots;
	JasperCalibSpotLocations operationalSpotLocations;
	SCD_Struct_JD30 nominalPDE;
	SCD_Struct_JD54 nominalRef;
	SCD_Struct_JD52 skews;
	SCD_Struct_JD43 strayDirectReflection;
	SCD_Struct_JD37 irIntrinsics;
	SCD_Struct_JD37 superWideIntrinsics;
	SCD_Struct_JD38 factoryWideExtrinsics;
	SCD_Struct_JD38 factorySuperWideExtrinsics;
	SCD_Struct_JD38 operationalSuperWideExtrinsics;
	SCD_Struct_JD38 operationalWideExtrinsics;
	SCD_Struct_JD42 additionalParams;
	SCD_Struct_JD41 operationalT0;
} JasperCalib;

typedef struct {
	void plan;
	int network_index;
} SCD_Struct_DN67;

