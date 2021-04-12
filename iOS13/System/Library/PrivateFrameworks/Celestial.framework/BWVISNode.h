/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>
#import <libobjc.A.dylib/BWNodeBackPressureSource.h>

@protocol OS_dispatch_semaphore;
@class NSMutableDictionary, NSArray, NSDictionary, BWVideoFormatRequirements, NSObject, BWIrisStillImageMovieMetadataCache, NSNumber, NSString, BWLimitedGMErrorLogger, NSMutableArray, BWStats;

@interface BWVISNode : BWNode <BWNodeBackPressureSource> {

	int _stabilizationMethod;
	int _stabilizationType;
	OpaqueFigSampleBufferProcessorRef _sampleBufferProcessor;
	NSMutableDictionary* _optionsDict;
	BOOL _flushingSBP;
	OpaqueFigCaptureISPProcessingSessionRef _ispProcessingSession;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	NSArray* _supportedOutputPixelFormats;
	BOOL _logStripProcessingTiming;
	unsigned long long _outputWidth;
	unsigned long long _outputHeight;
	BOOL _sphereVideoEnabled;
	BOOL _onlyGeneratingTransforms;
	int _pipelineTraceID;
	BOOL _fillExtendedRowsOfOutputBuffer;
	BOOL _usingExtendedCVISLivePhotoStabilization;
	BOOL _stabilizeForLongPressVideo;
	int _visExecutionMode;
	NSDictionary* _offlineCameraInfoByPortType;
	BOOL _overCaptureVideoStitchingEnabled;
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
	NSMutableArray* _sbufsBeingProcessed;
	os_unfair_lock_s _sbufsBeingProcessedLock;
	BWStats* _ioSurfaceCompressionRatioStats;
	int _pixelBufferCompressionType;
	unsigned long long _totalCompressedDataSize;
	unsigned long long _totalUncompressedDataSize;
	SCD_Struct_BW2 _lastEmittedPTS;

}

@property (readonly) int cinematicLookAheadFrameCount;                                                //@synthesize cinematicLookAheadFrameCount=_cinematicLookAheadFrameCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> emitSampleBufferSemaphore; 
+(void)initialize;
-(void)dealloc;
-(id)nodeType;
-(void)setOutputWidth:(unsigned long long)arg1 ;
-(void)setOutputHeight:(unsigned long long)arg1 ;
-(unsigned long long)outputWidth;
-(unsigned long long)outputHeight;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(BOOL)sphereVideoEnabled;
-(void)setSphereVideoEnabled:(BOOL)arg1 ;
-(id)initWithSensorIDDict:(id)arg1 stabilizationMethod:(int)arg2 stabilizationType:(int)arg3 ispProcessingSession:(OpaqueFigCaptureISPProcessingSessionRef)arg4 maxSupportedFrameRate:(float)arg5 activeMaxFrameRate:(float)arg6 motionAttachmentsSource:(int)arg7 fillExtendedRowsOfOutputBuffer:(BOOL)arg8 overCaptureEnabled:(BOOL)arg9 overCaptureVideoStitchingEnabled:(BOOL)arg10 videoStabilizationOverscanOverride:(float)arg11 motionMetadataPreloadingEnabled:(BOOL)arg12 visExecutionMode:(int)arg13 livePhotoCleanOutputRect:(CGRect)arg14 cameraInfoByPortType:(id)arg15 cvisExtendedLookAheadDuration:(float)arg16 ;
-(void)setPipelineTraceID:(int)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)emitSampleBufferSemaphore;
-(void)setEmitSampleBufferSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(int)_setupSampleBufferProcessor;
-(id)irisStillImageMovieMetadataCache;
-(void)_updateOutputRequirements;
-(int)cinematicLookAheadFrameCount;
-(void)setGeneratesDroppedSampleMarkerBuffers:(BOOL)arg1 ;
-(void)setIrisStillImageMovieMetadataCache:(id)arg1 ;
-(int)pipelineTraceID;
-(void)_ensureSemaphoreIsBalanced;
-(void)_prepareISPProcessingSession;
-(void)_flushBuffers;
-(void)_reportIOSurfaceCompressionCoreAnalyticsData;
-(void)_handleIrisKeyFrameCachingForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_addVISDigitalZoomToMetadata:(CFDictionaryRef)arg1 sampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)_tallyAndEmitSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_tallyAndEmitDroppedSample:(id)arg1 ;
-(void)_logAndEmitDropsForSampleBuffersStuckInISPProcessingSession;
-(void)_tallyCompressedIOSurfaceStatsForSBuf:(opaqueCMSampleBufferRef)arg1 ;
-(int)_addStabilizedFacesToSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(CVBufferRef)_newOutputPixelBuffer;
-(void)_willStripProcessSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_didStripProcessSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_addTransformToRingBuffer:(float*)arg1 pts:(SCD_Struct_BW2)arg2 ;
-(unsigned)_findBestTransformForPTS:(SCD_Struct_BW2)arg1 ;
-(BOOL)generatesDroppedSampleMarkerBuffers;
-(SCD_Struct_BW2)_droppedSamplePTSFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(int)_asynchronouslyStripProcessSampleBuffer:(opaqueCMSampleBufferRef)arg1 withStabilizationParameters:(id)arg2 ;
@end

