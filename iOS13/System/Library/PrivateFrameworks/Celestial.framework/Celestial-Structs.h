/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@class NSArray, <CVAPortraitGenericRequest>, BWNodeOutput, NSObject<OS_dispatch_queue>, BWPixelBufferPool, BWStats, BWRamp, NSMutableArray, BWNodeError;

typedef struct OpaqueFigFormatWriter* OpaqueFigFormatWriterRef;

typedef struct OpaqueCMByteStream* OpaqueCMByteStreamRef;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_BW2;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct OpaqueCMBlockBuffer* OpaqueCMBlockBufferRef;

typedef struct opaqueCMFormatDescription* opaqueCMFormatDescriptionRef;

typedef struct {
	int field1;
	int field2;
} SCD_Struct_BW10;

typedef struct {
	SCD_Struct_BW2 start;
	SCD_Struct_BW2 duration;
} SCD_Struct_BW11;

typedef struct OpaqueFigCaptureSynchronizedStreamsGroup* OpaqueFigCaptureSynchronizedStreamsGroupRef;

typedef struct OpaqueFigCaptureStream* OpaqueFigCaptureStreamRef;

typedef struct OpaqueFigCaptureDevice* OpaqueFigCaptureDeviceRef;

typedef struct __CFString* CFStringRef;

typedef struct {
	float x;
	float y;
	float z;
} SCD_Struct_Fi16;

typedef struct {
	double w;
	double x;
	double y;
	double z;
} SCD_Struct_Fi17;

typedef struct __CVBuffer* CVBufferRef;

typedef struct {
	int width;
	int height;
} SCD_Struct_BW19;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	float forwardOrders[8];
	float inverseOrders[8];
} SCD_Struct_BW21;

typedef struct {
	[3 columns];
} SCD_Struct_Fi22;

typedef struct {
	unsigned char numModels;
	char codeVersion[20];
	char name[3][20];
	char version[3][20];
	unsigned char rsvd[32];
} SCD_Struct_BW23;

typedef struct {
	float x;
	float y;
	float width;
	float height;
} SCD_Struct_BW24;

typedef struct {
	unsigned objectId;
	int category;
	SCD_Struct_BW24 bbox;
	unsigned confidence;
	unsigned yaw;
	unsigned roll;
	int smile;
	int blinkLeft;
	int blinkRight;
	SCD_Struct_BW24 eyeRectLeft;
	SCD_Struct_BW24 eyeRectRight;
	unsigned char hasPoseData;
	unsigned char hasEyeData;
	unsigned char hasBlinkData;
	unsigned char hasSmileData;
	int modality;
} SCD_Struct_BW25;

typedef struct {
	SCD_Struct_BW23 modelInfo;
	unsigned frameId;
	unsigned numObjects;
	SCD_Struct_BW25 objects[4];
} SCD_Struct_BW26;

typedef struct TtTrkRpnContext* TtTrkRpnContextRef;

typedef struct {
	unsigned originalImageWidth;
	unsigned originalImageHeight;
	unsigned char restart;
} SCD_Struct_BW28;

typedef struct {
	unsigned char doDaOnly;
} SCD_Struct_BW29;

typedef struct {
	unsigned char data[1864];
} SCD_Struct_BW30;

typedef struct {
	unsigned maxResultCount;
	unsigned maxTrackCount;
	unsigned scaleCount;
	unsigned instanceCropWidth;
	unsigned instanceCropHeight;
	unsigned instanceCropChannels;
	unsigned instanceCropBatchBytes;
	unsigned exemplarCropWidth;
	unsigned exemplarCropHeight;
	unsigned exemplarCropChannels;
	unsigned exemplarCropBatchBytes;
	unsigned xcorrNetOutWidths[2];
	unsigned xcorrNetOutHeights[2];
	unsigned xcorrNetOutChannels[2];
	unsigned xcorrNetOutBatchBytes[2];
	int xcorrNetOutPixelFormat;
	unsigned templateNetOutWidths[2];
	unsigned templateNetOutHeights[2];
	unsigned templateNetOutChannels[2];
	unsigned templateNetOutBatchBytes[2];
	int templateNetOutPixelFormat;
	char xcorrNetInputNames[3][32];
} SCD_Struct_BW31;

typedef struct {
	void instanceCrop;
	unsigned instanceCropBytes;
	void exemplarCrop;
	unsigned exemplarCropBytes;
	void* templateKernels[2];
	unsigned templateKernelsBytes[2];
	void* xcorrOutputs[2];
	unsigned xcorrOutputsBytes[2];
} SCD_Struct_BW32;

typedef struct {
	unsigned char isValid;
	unsigned char pyrIndex;
	unsigned inputWidth;
	unsigned inputHeight;
	unsigned inputStartOffsetY;
	unsigned inputStartOffsetC;
	unsigned short outWidth;
	unsigned short outHeight;
	unsigned short xInitY;
	unsigned short xInitC;
	unsigned short yInitY;
	unsigned short yInitC;
	unsigned short xStepY;
	unsigned short xStepC;
	unsigned short yStepY;
	unsigned short yStepC;
} SCD_Struct_BW33;

typedef struct {
	SCD_Struct_BW33 instanceNetControl;
	SCD_Struct_BW33 exemplarNetControl;
	unsigned char newInstanceNetControl;
	unsigned char newExemplarNetControl;
} SCD_Struct_BW34;

typedef struct {
	void data;
	unsigned height;
	unsigned width;
	unsigned rowBytes;
	unsigned pixelFormat;
} SCD_Struct_BW35;

typedef struct {
	SCD_Struct_BW35 instanceCrop;
	SCD_Struct_BW35 exemplarCrop;
	SCD_Struct_BW35 templateKernels[2];
	SCD_Struct_BW35 xcorrOutputs[2];
} SCD_Struct_BW36;

typedef struct {
	char* field1;
	unsigned field2;
} SCD_Struct_BW37;

typedef struct {
	void plan;
	int network_index;
} SCD_Struct_BW38;

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
} SCD_Struct_BW39;

typedef struct {
	float min;
	float max;
} SCD_Struct_Fi40;

typedef struct OpaqueVTPixelTransferSession* OpaqueVTPixelTransferSessionRef;

typedef struct OpaqueFigSimpleMutex* OpaqueFigSimpleMutexRef;

typedef struct FigCaptureVideoTransform {
	BOOL mirrored;
	int rotationDegrees;
	SCD_Struct_BW19 dimensions;
} FigCaptureVideoTransform;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	unsigned long long field3;
} SCD_Struct_CM44;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
	double field5;
	double field6;
} SCD_Struct_CM45;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	unsigned long long field3;
	unsigned long long field4;
} SCD_Struct_CM46;

typedef struct {
	unsigned field1;
	unsigned field2;
} SCD_Struct_CM47;

typedef struct OpaqueFigCaptureDeferredPhotoProcessor* OpaqueFigCaptureDeferredPhotoProcessorRef;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	float field5;
	double field6;
	unsigned field7;
	unsigned field8;
	unsigned field9;
	float field10;
	float field11;
	float field12;
	double field13;
	unsigned field14;
	unsigned field15;
	BOOL field16;
	BOOL field17;
	BOOL field18;
	int field19;
	BOOL field20;
	float field21;
	int field22;
	BOOL field23;
	int field24;
	int field25;
	int field26;
	int field27;
	float field28;
	float field29;
	unsigned field30;
	float field31;
	int field32;
} SCD_Struct_BW49;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_BW50;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct OpaqueFigSampleBufferProcessor* OpaqueFigSampleBufferProcessorRef;

typedef struct OpaqueFigCaptureISPProcessingSession* OpaqueFigCaptureISPProcessingSessionRef;

typedef struct OpaqueFigCaptureSource* OpaqueFigCaptureSourceRef;

typedef struct remoteQueueSenderOpaque* remoteQueueSenderOpaqueRef;

typedef struct localQueueOpaque* localQueueOpaqueRef;

typedef struct OpaqueFigCaptureSession* OpaqueFigCaptureSessionRef;

typedef struct {
	id field1;
	id field2;
	unsigned field3;
	unsigned char field4;
	unsigned char field5;
	A field6;
	unsigned char field7;
	A field8;
	unsigned char field9;
} SCD_Struct_BW58;

typedef struct opaqueCMSession* opaqueCMSessionRef;

typedef struct {
	unsigned val[8];
} SCD_Struct_BW60;

typedef struct OpaqueCMClock* OpaqueCMClockRef;

typedef struct OpaqueAudioComponentInstance* OpaqueAudioComponentInstanceRef;

typedef struct opaqueCMSimpleQueue* opaqueCMSimpleQueueRef;

typedef struct TimestampedAudioBufferList {
	__CFAllocator allocator;
	long long auRenderCount;
	unsigned dataBytesCapacity;
	unsigned numFrames;
	SCD_Struct_BW2 pts;
	AudioBufferList abl;
	unsigned numPrependedSilenceFrames;
} TimestampedAudioBufferList;

typedef struct OpaqueVTImageRotationSession* OpaqueVTImageRotationSessionRef;

typedef struct FigPhotoSurfacePool* FigPhotoSurfacePoolRef;

typedef struct FigPhotoCompressionSession* FigPhotoCompressionSessionRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct {
	[4 columns];
} SCD_Struct_BW69;

typedef struct FigPhotoScaleAndRotateSession* FigPhotoScaleAndRotateSessionRef;

typedef struct work_interval* work_intervalRef;

typedef struct {
	unsigned field1;
	float field2;
	float field3;
	unsigned field4;
	BOOL field5;
} SCD_Struct_BW72;

typedef struct {
	BOOL depthFilterEnabled;
	__CVBuffer mostRecentPostprocessedDisparityBuffer;
	float mostRecentFocusDisparity;
	float mostRecentDeltaDisparity;
	float mostRecentPortraitStability;
	int numberOfFramesSinceLastStableFocus;
	float clientSuppliedSimulatedAperture;
	float clientSuppliedPortraitLightingEffectStrength;
	BOOL mostRecentStructuredLightOcclusion;
	NSArray* mostRecentDetectedFaces;
	NSArray* mostRecentFilteredFaces;
	<CVAPortraitGenericRequest>* previousPortraitRequest;
	int previousStagePreviewStatus;
} SCD_Struct_BW73;

typedef struct {
	BOOL field1;
	double field2;
	SCD_Struct_Fi17 field3;
} SCD_Struct_BW74;

typedef struct {
	unsigned short field1;
	unsigned short field2;
	unsigned short field3;
} SCD_Struct_BW75;

typedef struct {
	unsigned char numModels;
	char codeVersion[20];
	char name[4][20];
	char version[4][20];
	unsigned char rsvd[32];
} SCD_Struct_BW76;

typedef struct {
	unsigned char data[4480];
	unsigned short width;
	unsigned short height;
	unsigned short rowBytes;
	unsigned char valid;
} SCD_Struct_BW77;

typedef struct {
	unsigned objectId;
	int category;
	SCD_Struct_BW24 bbox;
	unsigned confidence;
	int yaw;
	int roll;
	int smile;
	int blinkLeft;
	int blinkRight;
	SCD_Struct_BW24 eyeRectLeft;
	SCD_Struct_BW24 eyeRectRight;
	unsigned char hasPoseData;
	unsigned char hasEyeData;
	unsigned char hasBlinkData;
	unsigned char hasSmileData;
	unsigned char isFrontal;
	int modality;
} SCD_Struct_BW78;

typedef struct {
	unsigned objectId;
	int category;
	SCD_Struct_BW24 bbox;
	unsigned confidence;
	int modality;
} SCD_Struct_BW79;

typedef struct {
	SCD_Struct_BW76 modelInfo;
	unsigned frameId;
	unsigned numFaces;
	SCD_Struct_BW78 faces[10];
	unsigned numObjects;
	SCD_Struct_BW79 objects[10];
	unsigned numSaliencyObjects;
	SCD_Struct_BW79 saliencyObjects[1];
	SCD_Struct_BW77 saliencyHeatMap;
} SCD_Struct_BW80;

typedef struct {
	float minOverlap;
	float boxSmoothingLr;
	float overlapBoxThreshold;
	unsigned initNonmatchFrameCheckWindow;
	unsigned initMaxNonmatchFrameCount;
	unsigned maxNonmatchFrameCounts[3];
	BOOL isDetUsedToReinit;
} SCD_Struct_BW81;

typedef struct {
	unsigned objectId;
	unsigned age;
	unsigned unmatchedFrameCount;
	int killFlag;
	SCD_Struct_BW25 object;
} SCD_Struct_BW82;

typedef struct {
	unsigned nextObjectId;
	unsigned numObjects;
	SCD_Struct_BW82 objects[4];
} SCD_Struct_BW83;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	int field4;
	SCD_Struct_BW2 field5;
	5 field6;
} SCD_Struct_BW84;

typedef struct {
	SCD_Struct_BW2 field1;
	4 field2;
	unsigned field3;
	unsigned char field4;
} SCD_Struct_BW85;

typedef struct {
	SCD_Struct_BW2 field1;
	SCD_Struct_BW2 field2;
	SCD_Struct_BW2 field3;
	BOOL field4;
	BOOL field5;
} SCD_Struct_BW86;

typedef struct AcDetContext* AcDetContextRef;

typedef struct {
	unsigned char data[24];
} SCD_Struct_BW88;

typedef struct {
	unsigned height;
	unsigned width;
	unsigned channels;
	int pixelFormat;
	float scale;
	float bias;
} SCD_Struct_BW89;

typedef struct {
	SCD_Struct_BW89 netInputBufferDesc[3];
	SCD_Struct_BW89 netOutputBufferDescs[3][24];
	char netOutputNames[3][24][32];
} SCD_Struct_BW90;

typedef struct {
	unsigned originalImageWidth;
	unsigned originalImageHeight;
	int imageOrientation;
} SCD_Struct_BW91;

typedef struct {
	void data;
	void reserved;
	4Q dim;
	4Q stride;
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
} SCD_Struct_BW92;

typedef struct OpaqueFigReentrantMutex* OpaqueFigReentrantMutexRef;

typedef struct {
	unsigned short major;
	unsigned short minor;
	unsigned short patch;
} SCD_Struct_BW94;

typedef struct __CVPixelBufferPool* CVPixelBufferPoolRef;

typedef struct NoiseReductionCtx_s* NoiseReductionCtx_sRef;

typedef struct {
	float field1;
	int field2;
	BOOL field3;
} SCD_Struct_BW97;

typedef struct {
	double x;
	double y;
	double z;
} SCD_Struct_Fi98;

typedef struct {
	int attemptCount;
	double threshold;
} SCD_Struct_Fi99;

typedef struct _CAImageQueue* CAImageQueueRef;

typedef struct OpaqueBWPreviewSynchronizer* OpaqueBWPreviewSynchronizerRef;

typedef struct BWSmartCameraScene {
	BOOL enabled;
	BOOL confident;
	float confidenceFilterRatio;
	float filteredConfidence;
	float confidenceThreshold;
	float confidenceHysteresisValueLag;
	char confidenceHysteresisTemporalLagBeforeConfident;
	char confidenceHysteresisTemporalLagBeforeNotConfident;
	char currentTemporalHysteresis;
	char* name;
} BWSmartCameraScene;

typedef struct {
	int hTaps;
	int vTaps;
	int hPhases;
	int vPhases;
	int prePointBits;
	int postPointBits;
} SCD_Struct_Fi103;

typedef struct __IOSurfaceAccelerator* IOSurfaceAcceleratorRef;

typedef struct {
	unsigned field1;
	unsigned field2[384];
	unsigned field3;
	unsigned field4;
	unsigned field5;
} SCD_Struct_Fi105;

typedef struct BWStreamOutputStorage {
	int type;
	unsigned flags;
	BOOL ready;
	BOOL enabled;
	BWNodeOutput* nodeOutput;
	opaqueCMSimpleQueue simpleQueue;
	NSObject<OS_dispatch_queue>* bufferServicingQueue;
	/*function pointer*/void* bufferServicingQueueCallback;
	opaqueCMFormatDescription cachedFormatDescription;
	int frameCount;
	SCD_Struct_BW2 lastEmittedPTS;
	int retainedBufferCount;
	BWPixelBufferPool* internalPixelBufferPool;
	BOOL bufferPoolOwnedByAnotherNode;
	SCD_Struct_BW19 outputDimensions;
	CGRect cropRect;
	BWStats* ioSurfaceCompressionRatioStats;
	int pixelBufferCompressionType;
	unsigned long long totalCompressedDataSize;
	unsigned long long totalUncompressedDataSize;
} BWStreamOutputStorage;

typedef struct {
	SCD_Struct_Fi40 lastWideSpherePos;
	SCD_Struct_Fi40 lastTeleSpherePos;
	SCD_Struct_Fi40 currentTeleSpherePos;
	SCD_Struct_Fi40 previousTeleSpherePos;
	BOOL supportAverageSpherePositionKey;
} SCD_Struct_BW107;

typedef struct {
	double centerx;
	double centery;
	BOOL lensCoefficientsValid;
	float lensCoefficients[5];
	float gravityFactor;
	float pixelsPerMicron;
	BOOL isFrontCamera;
} SCD_Struct_BW108;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct OpaqueFigSemaphore* OpaqueFigSemaphoreRef;

typedef struct {
	double timestamp;
	float x;
	float y;
	float z;
} SCD_Struct_Fi111;

typedef struct {
	SCD_Struct_Fi16 field1;
	SCD_Struct_Fi16 field2;
	SCD_Struct_Fi16 field3;
	SCD_Struct_Fi17 field4;
	int field5;
	BOOL field6;
	BOOL field7;
	BOOL field8;
	float field9;
} SCD_Struct_Fi112;

typedef struct shmemPoolOpaque* shmemPoolOpaqueRef;

typedef struct __CFAllocator* CFAllocatorRef;

typedef struct OpaqueFigFlatDictionaryKeySpec* OpaqueFigFlatDictionaryKeySpecRef;

typedef struct OpaqueFigFormatReader* OpaqueFigFormatReaderRef;

typedef struct OpaqueFigAssetWriter* OpaqueFigAssetWriterRef;

typedef struct {
	double rowSums;
	double colSums;
	unsigned curIdx;
	unsigned count;
	unsigned size;
} SCD_Struct_Fi118;

typedef struct {
	float crossCorrelationMaximum[2];
	int maxCorrelationShift[2];
	int frameRingBufferCount;
	int frameRingBufferDistance;
	CGRect roi;
	BOOL isMotionDetected;
	BOOL valid;
} SCD_Struct_Fi119;

typedef struct {
	float field1[2];
	int field2[2];
	int field3;
	int field4;
	CGRect field5;
	BOOL field6;
	BOOL field7;
} SCD_Struct_Fi120;

typedef struct {
	float simulatedAperture;
} SCD_Struct_BW121;

typedef struct OpaqueFigCaptureDeferredContainerManager* OpaqueFigCaptureDeferredContainerManagerRef;

typedef struct CVAFaceKit* CVAFaceKitRef;

typedef struct BWDeferredMetadataCacheEntry {
	SCD_Struct_BW2 pts;
	__CFDictionary metadataDict;
	short useCount;
	short age;
} BWDeferredMetadataCacheEntry;

typedef struct BWPreviewStitcherShiftCorrection {
	CGPoint currentValue;
	CGPoint updatedValue;
	BOOL valueIsUpdated;
	BOOL lastRegistrationWasValid;
	int registeredFrameCaptureID;
	BWRamp* rampX;
	BWRamp* rampY;
} BWPreviewStitcherShiftCorrection;

typedef struct BWRenderListRendererList {
	BWRenderListRendererNode slh_first;
} BWRenderListRendererList;

typedef struct BWRenderListParameterList {
	BWRenderListParameterNode slh_first;
} BWRenderListParameterList;

typedef struct {
	int reason;
	float fromFR;
	float toFR;
	int lux;
	SCD_Struct_BW2 time;
} SCD_Struct_BW128;

typedef struct {
	NSMutableArray* bufferQueue;
	BWNodeError* mostRecentError;
	int mostRecentCaptureIdentifier;
	int numberOfWraparounds;
	BOOL inputIsLive;
} SCD_Struct_BW129;

typedef struct __CVDataBufferPool* CVDataBufferPoolRef;

typedef struct CGImageMetadata* CGImageMetadataRef;

typedef struct OpaqueFigEndpoint* OpaqueFigEndpointRef;

typedef struct OpaqueFigEndpointStream* OpaqueFigEndpointStreamRef;

typedef struct OpaqueFigVirtualDisplaySource* OpaqueFigVirtualDisplaySourceRef;

typedef struct AudioStreamBasicDescription {
	double mSampleRate;
	unsigned mFormatID;
	unsigned mFormatFlags;
	unsigned mBytesPerPacket;
	unsigned mFramesPerPacket;
	unsigned mBytesPerFrame;
	unsigned mChannelsPerFrame;
	unsigned mBitsPerChannel;
	unsigned mReserved;
} AudioStreamBasicDescription;

typedef struct BWCoreAnalyticsMovieRecordingSphereAFStatistics {
	float accelStandardDeviation;
	float gyroStandardDeviation;
	float sphereMaxTrackErrorWide;
	float sphereMaxTrackErrorTele;
	float sphereStdTrackErrorSumXXWide;
	float sphereStdTrackErrorSumXXTele;
	float afMaxTrackErrorWide;
	float afMaxTrackErrorTele;
	float afStdTrackErrorSumXXWide;
	float afStdTrackErrorSumXXTele;
	float sphereMinDistanceFromEndStopWide;
	float sphereMinDistanceFromEndStopTele;
	float spherePowerWide;
	float spherePowerTele;
	float afPowerWide;
	float afPowerTele;
	unsigned numberOfSamples;
	unsigned numberOfSamplesWide;
	unsigned numberOfSamplesTele;
	unsigned range_0_90umBinWide;
	unsigned range_90_110umBinWide;
	unsigned range_110_130umBinWide;
	unsigned range_130_150umBinWide;
	unsigned range_150_175umBinWide;
	unsigned range_175_infinityBinWide;
	unsigned range_0_90umBinTele;
	unsigned range_90_110umBinTele;
	unsigned range_110_130umBinTele;
	unsigned range_130_150umBinTele;
	unsigned range_150_175umBinTele;
	unsigned range_175_infinityBinTele;
} BWCoreAnalyticsMovieRecordingSphereAFStatistics;

typedef struct BWAPSStatistics {
	float stdDataFromAPSForWide;
	float maxDataFromAPSForWide;
	float minDataFromAPSForWide;
	float stdDataFromSphereForWide;
	float maxDataFromSphereForWide;
	float minDataFromSphereForWide;
	float stdDataFromAPSForTele;
	float maxDataFromAPSForTele;
	float minDataFromAPSForTele;
	float stdDataFromSphereForTele;
	float maxDataFromSphereForTele;
	float minDataFromSphereForTele;
	float stdDataFromAccel;
	float maxDataFromAccel;
	float minDataFromAccel;
	float stdDataFromGyro;
	float maxDataFromGyro;
	float minDataFromGyro;
} BWAPSStatistics;

typedef struct FigPhotoDecompressionSession* FigPhotoDecompressionSessionRef;

typedef struct OpaqueVTCompressionSession* OpaqueVTCompressionSessionRef;

typedef struct BWVISCenterTransformAndPTS {
	9f inverseTranform;
	SCD_Struct_BW2 framePTS;
	BOOL isValid;
} BWVISCenterTransformAndPTS;

