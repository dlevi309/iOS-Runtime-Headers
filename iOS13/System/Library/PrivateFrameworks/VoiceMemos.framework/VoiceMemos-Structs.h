/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

typedef struct OpaqueExtAudioFile* OpaqueExtAudioFileRef;

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

typedef struct {
	double field1;
	double field2;
} SCD_Struct_RC2;

typedef struct {
	double beginTime;
	double endTime;
} SCD_Struct_RC3;

typedef struct AudioUnitMeterClipping {
	float peakValueSinceLastCall;
	unsigned char sawInfinity;
	unsigned char sawNotANumber;
} AudioUnitMeterClipping;

typedef struct PowerMeter {
	double mSampleRate;
	double mPeakDecay1;
	double mPeakDecay;
	double mDecay1;
	double mDecay;
	int mPrevBlockSize;
	int mPeakHoldCount;
	double mMaxPeak;
	AudioUnitMeterClipping mClipping;
} PowerMeter;

typedef struct _compressed_pair<float *, std::__1::allocator<float> > {
	float __value_;
} compressed_pair<float *, std::__1::allocator<float> >;

typedef struct vector<float, std::__1::allocator<float> > {
	float __begin_;
	float __end_;
	compressed_pair<float *, std::__1::allocator<float> > __end_cap_;
} vector<float, std::__1::allocator<float> >;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct _NSZone* NSZoneRef;

typedef struct CGContext* CGContextRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct RCWaveformRendererState {
	BOOL recordDidSwitch;
	double lastRenderTime;
} RCWaveformRendererState;

typedef struct OpaqueAudioFileID* OpaqueAudioFileIDRef;

typedef struct {
	float scale;
	double vDeltaWaveformToTimeBaseline;
	double vDeltaTimeBaselineToTitleBaseline;
	double vDeltaTitleBaselineToDateBaseline;
	double vDeltaDateBaselineToControlsTop;
	double vDeltaControlsBottomToBottom;
	double vDeltaControlsTopToNavigationBottom;
	BOOL hIsWaveformFlushToEdges;
	double hDeltaAdditionalInsetFromWaveformEdge;
	double hDeltaControlButtonsSpacing;
	double hDeltaTrimProgressInset;
	double hTrimModeInset;
	double hDetailNavigationBarInset;
	double hPresentedRecordMemoHeight;
	double vDeltaLockAbsoluteTopToWaveformTop;
} SCD_Struct_RC14;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

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

