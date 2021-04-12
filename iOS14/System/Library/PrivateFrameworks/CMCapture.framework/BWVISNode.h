/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>
#import <libobjc.A.dylib/BWNodeBackPressureSource.h>

@protocol OS_dispatch_semaphore;
@class NSMutableDictionary, BWFigCaptureISPProcessingSession, NSArray, NSDictionary, BWVideoFormatRequirements, NSObject, BWIrisStillImageMovieMetadataCache, NSNumber, NSString, BWLimitedGMErrorLogger, NSMutableArray, BWStats;

@interface BWVISNode : BWNode <BWNodeBackPressureSource> {

	int _stabilizationMethod;
	int _stabilizationType;
	OpaqueFigSampleBufferProcessorRef _sampleBufferProcessor;
	NSMutableDictionary* _optionsDict;
	BOOL _flushingSBP;
	BWFigCaptureISPProcessingSession* _ispProcessingSession;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	NSArray* _supportedInputPixelFormats;
	NSArray* _supportedOutputPixelFormats;
	BOOL _logStripProcessingTiming;
	SCD_Struct_BW2 _outputDimensions;
	BOOL _sphereVideoEnabled;
	BOOL _onlyGeneratingTransforms;
	BOOL _stabilizeMetadata;
	BOOL _flipHorizontalExcludingIris;
	BOOL _liveFlipHorizontal;
	int _pipelineTraceID;
	BOOL _fillExtendedRowsOfOutputBuffer;
	BOOL _usingExtendedCVISLivePhotoStabilization;
	BOOL _stabilizeForLongPressVideo;
	int _visExecutionMode;
	NSDictionary* _offlineCameraInfoByPortType;
	float _videoStabilizationOverscanOverride;
	BOOL _generatesDroppedSampleMarkerBuffers;
	BWVideoFormatRequirements* _visOutputFormatRequirements;
	NSObject*<OS_dispatch_semaphore> _emitSampleBufferSemaphore;
	int _numberOfTimesWaited;
	int _numberOfBuffersEmitted;
	int _cinematicLookAheadFrameCount;
	BWIrisStillImageMovieMetadataCache* _irisStillImageMovieMetadataCache;
	NSNumber* _cachedLivePhotoKeyFrame;
	NSString* _cachedStillImageKeyFrameSettingsID;
	BWLimitedGMErrorLogger* _limitedGMErrorLogger;
	BWVISCenterTransformAndPTS _transformsRingBuffer[10];
	unsigned _transformsRingBufferWriteIndex;
	int _outputColorSpaceProperties;
	NSMutableArray* _sbufsBeingProcessed;
	os_unfair_lock_s _sbufsBeingProcessedLock;
	BWStats* _ioSurfaceCompressionRatioStats;
	int _pixelBufferCompressionType;
	unsigned long long _totalCompressedDataSize;
	unsigned long long _totalUncompressedDataSize;
	SCD_Struct_BW8 _lastEmittedPTS;
	BOOL _frameRateConversionEnabled;

}

@property (readonly) int cinematicLookAheadFrameCount;                                                //@synthesize cinematicLookAheadFrameCount=_cinematicLookAheadFrameCount - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> emitSampleBufferSemaphore; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(int)_setupSampleBufferProcessor;
-(void)setEmitSampleBufferSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(BOOL)generatesDroppedSampleMarkerBuffers;
-(id)nodeType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(id)nodeSubType;
-(void)_tallyAndEmitDroppedSample:(id)arg1 ;
-(void)setFrameRateConversionEnabled:(BOOL)arg1 ;
-(int)cinematicLookAheadFrameCount;
-(void)_updateSupportedPixelFormats;
-(void)_didStripProcessSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_logAndEmitDropsForSampleBuffersStuckInISPProcessingSession;
-(void)_willStripProcessSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_updateOutputRequirements;
-(NSObject*<OS_dispatch_semaphore>)emitSampleBufferSemaphore;
-(BOOL)flipHorizontalExcludingIris;
-(void)_prepareISPProcessingSession;
-(int)outputColorSpaceProperties;
-(void)_tallyAndEmitSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)setOutputDimensions:(SCD_Struct_BW2)arg1 ;
-(id)initWithSensorIDDict:(id)arg1 stabilizationMethod:(int)arg2 stabilizationType:(int)arg3 ispProcessingSession:(id)arg4 maxSupportedFrameRate:(float)arg5 activeMaxFrameRate:(float)arg6 motionAttachmentsSource:(int)arg7 fillExtendedRowsOfOutputBuffer:(BOOL)arg8 overCaptureEnabled:(BOOL)arg9 videoStabilizationOverscanOverride:(float)arg10 motionMetadataPreloadingEnabled:(BOOL)arg11 visExecutionMode:(int)arg12 livePhotoCleanOutputRect:(CGRect)arg13 cameraInfoByPortType:(id)arg14 cvisExtendedLookAheadDuration:(float)arg15 ;
-(void)_handleIrisKeyFrameCachingForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(SCD_Struct_BW2)outputDimensions;
-(void)_flushBuffers;
-(int)_tranformRectanglesInMetadata:(id)arg1 pts:(SCD_Struct_BW8)arg2 ;
-(void)_tallyCompressedIOSurfaceStatsForSBuf:(opaqueCMSampleBufferRef)arg1 ;
-(void)setSphereVideoEnabled:(BOOL)arg1 ;
-(int)_asynchronouslyStripProcessSampleBuffer:(opaqueCMSampleBufferRef)arg1 withStabilizationParameters:(id)arg2 ;
-(int)pipelineTraceID;
-(void)_ensureSemaphoreIsBalanced;
-(unsigned)_findBestTransformForPTS:(SCD_Struct_BW8)arg1 ;
-(BOOL)frameRateConversionEnabled;
-(id)irisStillImageMovieMetadataCache;
-(void)setPipelineTraceID:(int)arg1 ;
-(void)_addTransformToRingBuffer:(float*)arg1 pts:(SCD_Struct_BW8)arg2 ;
-(int)_stabilizeMetadataForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)setIrisStillImageMovieMetadataCache:(id)arg1 ;
-(CVBufferRef)_newOutputPixelBuffer;
-(void)_addVISDigitalZoomToMetadata:(CFDictionaryRef)arg1 sampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)_reportIOSurfaceCompressionCoreAnalyticsData;
-(BOOL)sphereVideoEnabled;
-(void)setOutputColorSpaceProperties:(int)arg1 ;
-(void)setFlipHorizontalExcludingIris:(BOOL)arg1 ;
-(void)dealloc;
-(void)setGeneratesDroppedSampleMarkerBuffers:(BOOL)arg1 ;
-(SCD_Struct_BW8)_droppedSamplePTSFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
@end

