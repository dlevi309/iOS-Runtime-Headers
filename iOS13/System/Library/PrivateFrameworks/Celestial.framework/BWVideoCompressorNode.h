/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@protocol OS_dispatch_queue;
@class NSDictionary, NSObject, BWLimitedGMErrorLogger;

@interface BWVideoCompressorNode : BWNode {

	NSDictionary* _compressionSettings;
	BOOL _nextFrameEncodeAsKeyFrame;
	BOOL _prioritizeEncodingSpeedOverQuality;
	int _pipelineTraceID;
	OpaqueVTCompressionSessionRef _compressionSession;
	BOOL _didPrepareToEncode;
	BOOL _sourceIsHDResolution;
	unsigned _sourcePixelFormatType;
	NSObject*<OS_dispatch_queue> _emitterQueue;
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

}
+(void)initialize;
+(id)_formatRequirementsForCompressionSettings:(id)arg1 maxVideoFrameRate:(float)arg2 retainedBufferCountHint:(int*)arg3 ;
-(void)dealloc;
-(id)nodeType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)setPipelineTraceID:(int)arg1 ;
-(void)setCompressionSettings:(id)arg1 ;
-(void)prepareForVideoCompression;
-(void)makeCurrentConfigurationLive;
-(id)initWithCompressionSettings:(id)arg1 overCaptureEnabled:(BOOL)arg2 maxVideoFrameRate:(float)arg3 ;
-(void)setPrioritizeEncodingSpeedOverQuality:(BOOL)arg1 ;
-(int)pipelineTraceID;
-(void)_cleanCompressor;
-(void)_registerForThermalAndPowerNotifications;
-(void)_validateBFrameEncodingAbility;
-(OpaqueVTCompressionSessionRef)_createEncoderSessionWithWidth:(int)arg1 height:(int)arg2 inputPixelFormat:(unsigned)arg3 isHDResolution:(unsigned char)arg4 videoCodec:(unsigned)arg5 encoderSpecification:(id)arg6 compressionProperties:(id)arg7 compressorNodeRef:(void*)arg8 ;
-(void)_updateThermalPressureLevel;
-(void)_updatePowerPressureLevel;
-(int)_setEncoderCompressionPropertiesWithCompressionSession:(OpaqueVTCompressionSessionRef)arg1 compressionProperties:(id)arg2 sourcePixelType:(unsigned)arg3 isHDResolution:(unsigned char)arg4 ;
-(void)insertKeyFrame;
-(id)compressionSettings;
-(BOOL)prioritizeEncodingSpeedOverQuality;
@end

