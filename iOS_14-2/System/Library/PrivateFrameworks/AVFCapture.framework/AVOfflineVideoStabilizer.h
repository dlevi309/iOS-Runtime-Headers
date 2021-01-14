/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class AVWeakReference, NSMutableDictionary, NSMutableArray, NSSet;

@interface AVOfflineVideoStabilizer : NSObject {

	SCD_Struct_AV0 _targetFrameDuration;
	int _metadataPrimingCount;
	float _lookAheadTime;
	AVWeakReference* _dataProviderWeakReference;
	CVPixelBufferPoolRef _pixelBufferPool;
	BOOL _clientMarkedEndOfVideoData;
	long long _videoOutputFrameNumber;
	opaqueCMFormatDescriptionRef _cachedVideoFormatDescription;
	NSMutableDictionary* _cachedInputBufferAttributes;
	NSMutableArray* _outputSampleBuffers;
	BOOL _clientMarkedEndOfMetadata;
	long long _metadataOutputFrameNumber;
	NSMutableArray* _futureFrameMetadataDicts;
	NSSet* _requiredMetadataKeys;
	NSSet* _optionalMetadataKeys;
	OpaqueFigSampleBufferProcessorRef _gvsProcessor;
	BOOL _stabilizationEnabled;
	BOOL _isFirstFrame;

}

@property (nonatomic,readonly) NSMutableArray * outputSampleBuffers;                              //@synthesize outputSampleBuffers=_outputSampleBuffers - In the implementation block
@property (nonatomic,readonly) int preferredSourcePixelBufferPrimingFrameCount; 
@property (nonatomic,readonly) int preferredSourceStabilizationMetadataPrimingCount; 
+(void)initialize;
+(id)offlineVideoStabilizerWithTargetFrameDuration:(SCD_Struct_AV0)arg1 dataProvider:(id)arg2 destinationBufferPool:(CVPixelBufferPoolRef)arg3 stabilizationEnabled:(BOOL)arg4 ;
-(id)initWithTargetFrameDuration:(SCD_Struct_AV0)arg1 dataProvider:(id)arg2 destinationBufferPool:(CVPixelBufferPoolRef)arg3 stabilizationEnabled:(BOOL)arg4 ;
-(void)_teardownVISProcessor;
-(opaqueCMSampleBufferRef)_copyStabilizedSampleBuffer:(id*)arg1 ;
-(int)_validateStabilizationMetadata:(id)arg1 withSampleTime:(SCD_Struct_AV0)arg2 isEndOfData:(BOOL*)arg3 ;
-(int)_validateSourcePixelBuffer:(CVBufferRef)arg1 withSampleTime:(SCD_Struct_AV0)arg2 metadata:(id)arg3 isEndOfData:(BOOL*)arg4 ;
-(opaqueCMSampleBufferRef)_createSampleBufferWithPixelBuffer:(CVBufferRef)arg1 sampleTime:(SCD_Struct_AV0)arg2 futureMetadata:(id)arg3 status:(int*)arg4 ;
-(int)_setupGVSProcessor;
-(unsigned long long)_extendedRowsOfOutputBuffer;
-(opaqueCMSampleBufferRef)copyStabilizedSampleBuffer:(id*)arg1 ;
-(NSMutableArray *)outputSampleBuffers;
-(int)preferredSourcePixelBufferPrimingFrameCount;
-(int)preferredSourceStabilizationMetadataPrimingCount;
-(void)dealloc;
@end

