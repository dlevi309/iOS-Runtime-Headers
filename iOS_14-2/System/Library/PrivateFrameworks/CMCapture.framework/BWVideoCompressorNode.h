/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSDictionary, NSObject, BWLimitedGMErrorLogger;

@interface BWVideoCompressorNode : BWNode {

	NSDictionary* _compressionSettings;
	NSDictionary* _compressionSettingsPreparedFor;
	BOOL _nextFrameEncodeAsKeyFrame;
	BOOL _prioritizeEncodingSpeedOverQuality;
	int _pipelineTraceID;
	OpaqueVTCompressionSessionRef _compressionSession;
	BOOL _didPrepareToEncode;
	BOOL _sourceIsHDResolution;
	unsigned _sourcePixelFormatType;
	NSObject*<OS_dispatch_queue> _emitterQueue;
	NSObject*<OS_dispatch_queue> _compressionSessionStateQueue;
	NSObject*<OS_dispatch_source> _reapCompressionSessionTimer;
	double _reapCompressionSessionTimerDurationInSeconds;
	BOOL _compressionSessionReuseEnabled;
	BOOL _compressionSessionCanBeReused;
	BOOL _resetCodec;
	BOOL _emittedFirstVideoBuffer;
	NSObject*<OS_dispatch_queue> _thermalAndPowerNotificationQueue;
	double _bFrameEncodingAllowedAtHigherPressureTimeLimit;
	double _bFrameEncodingAllowedAtHigherPressureStopTime;
	int _nonBFrameAverageBitRate;
	int _thermalPressureNotificationToken;
	int _thermalPressureLevel;
	int _powerPressureNotificationToken;
	int _powerPressureLevel;
	BOOL _bFrameEncodingRequested;
	BOOL _bFrameEncodingAllowed;
	BOOL _propagateStabilizedFacesToAVE;
	BOOL _overCaptureEnabled;
	BOOL _shouldAttachDebugSEI;
	BOOL _shouldPassSerializedDepthImageBuffers;
	BOOL _flushRequestReceived;
	float _maxVideoFrameRate;
	BOOL _attachThumbnailSourcePixelBuffer;
	CVBufferRef _thumbnailSourcePixelBuffer;
	BWLimitedGMErrorLogger* _limitedGMErrorLogger;
	BOOL _delayedCompressorCleanupEnabled;

}
+(void)initialize;
+(id)_formatRequirementsForCompressionSettings:(id)arg1 maxVideoFrameRate:(float)arg2 retainedBufferCountHint:(int*)arg3 ;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)makeCurrentConfigurationLive;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(id)nodeSubType;
-(void)_createCompressionSession;
-(void)insertKeyFrame;
-(OpaqueVTCompressionSessionRef)_createEncoderSessionWithWidth:(int)arg1 height:(int)arg2 inputPixelFormat:(unsigned)arg3 isHDResolution:(unsigned char)arg4 videoCodec:(unsigned)arg5 encoderSpecification:(id)arg6 compressionProperties:(id)arg7 compressorNodeRef:(void*)arg8 ;
-(OpaqueVTCompressionSessionRef)_compresessionSession;
-(void)_releaseCompressionSession;
-(void)_cleanCompressor:(BOOL)arg1 ;
-(void)setPrioritizeEncodingSpeedOverQuality:(BOOL)arg1 ;
-(id)initWithCompressionSettings:(id)arg1 overCaptureEnabled:(BOOL)arg2 maxVideoFrameRate:(float)arg3 delayedCompressorCleanupEnabled:(BOOL)arg4 ;
-(void)_validateBFrameEncodingAbility;
-(void)_updateThermalPressureLevel;
-(void)_updatePowerPressureLevel;
-(int)pipelineTraceID;
-(void)_prepareForVideoCompression;
-(void)setPipelineTraceID:(int)arg1 ;
-(int)_setEncoderCompressionPropertiesWithCompressionSession:(OpaqueVTCompressionSessionRef)arg1 compressionProperties:(id)arg2 sourcePixelType:(unsigned)arg3 isHDResolution:(unsigned char)arg4 ;
-(void)_registerForThermalAndPowerNotifications;
-(BOOL)prioritizeEncodingSpeedOverQuality;
-(id)_HDRImageStatisticsDictFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 metadata:(id)arg2 ;
-(void)dealloc;
-(void)setReapCompressionSessionTimerDurationInSeconds:(double)arg1 ;
@end

