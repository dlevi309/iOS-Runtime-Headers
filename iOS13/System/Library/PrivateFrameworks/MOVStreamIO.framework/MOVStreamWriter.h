/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
*/

#import <MOVStreamIO/MOVStreamIO-Structs.h>
#import <libobjc.A.dylib/VideoEncoderInterfaceDelegate.h>
#import <MOVStreamIO/MOVStreamWriterStateContext.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore, MOVStreamWriterState, MOVStreamCustomEncoderConfigDelegate, MOVStreamWriterDelegate;
@class NSArray, NSError, NSObject, NSURL, AVAssetWriter, NSString;

@interface MOVStreamWriter : NSObject <VideoEncoderInterfaceDelegate, MOVStreamWriterStateContext> {

	NSObject*<OS_dispatch_queue> m_delegateCallbackQueue;
	NSObject*<OS_dispatch_queue> m_writingQueue;
	NSObject*<OS_dispatch_queue> m_processingQueue;
	NSObject*<OS_dispatch_semaphore> m_finisDrainFifohWaitSemaphore;
	NSURL* m_writeURL;
	AVAssetWriter* m_assetWriter;
	double m_expectedFrameRate;
	BOOL m_realtime;
	BOOL m_haveStartedSession;
	CGAffineTransform m_videoTransform;
	map<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData> > >* m_streamDataMap;
	vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >* m_orderedStreamNames;
	map<std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData> > >* m_metadataDataMap;
	vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >* m_orderedMetadataStreamNames;
	map<std::__1::basic_string<char>, std::__1::map<std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData> > >, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::map<std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData> > > > > >* m_associatedMetadataDataMap;
	map<std::__1::basic_string<char>, CMTime, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, CMTime> > >* m_lastPtsForStream;
	BOOL m_observingIsReady;
	id<MOVStreamWriterState> _state;
	NSArray* movMetadataItems;
	NSError* criticalError;
	unsigned long long _fifoBufferCapacity;
	double _finishingTimeout;
	id<MOVStreamCustomEncoderConfigDelegate> _customEncoderConfigDelegate;
	id<MOVStreamWriterDelegate> _delegate;

}

@property (__weak) id<MOVStreamWriterDelegate> delegate;                                              //@synthesize delegate=_delegate - In the implementation block
@property (retain) id<MOVStreamWriterState> state;                                                    //@synthesize state=_state - In the implementation block
@property (assign) unsigned long long fifoBufferCapacity;                                             //@synthesize fifoBufferCapacity=_fifoBufferCapacity - In the implementation block
@property (assign) double finishingTimeout;                                                           //@synthesize finishingTimeout=_finishingTimeout - In the implementation block
@property (readonly) long long status; 
@property (retain) NSError * criticalError; 
@property (__weak) id<MOVStreamCustomEncoderConfigDelegate> customEncoderConfigDelegate;              //@synthesize customEncoderConfigDelegate=_customEncoderConfigDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSArray * movMetadataItems; 
+(id)getMOVStreamIOMetadataItem;
+(unsigned)getPixelFormatFromStreamData:(StreamRecordingData*)arg1 ;
+(int)currentBayerRearrangeStrategy;
-(void)dealloc;
-(id<MOVStreamWriterDelegate>)delegate;
-(void)setDelegate:(id<MOVStreamWriterDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id<MOVStreamWriterState>)state;
-(long long)status;
-(void)setState:(id<MOVStreamWriterState>)arg1 ;
-(void)setDelegate:(id)arg1 callbackQueue:(id)arg2 ;
-(void)prepareToRecord;
-(void)cancelRecording;
-(void)finishRecording;
-(BOOL)setVideoTransform:(CGAffineTransform)arg1 ;
-(void)addTrackForStreamWithIdentifier:(id)arg1 formatDescription:(const opaqueCMFormatDescriptionRef)arg2 recordingConfiguration:(id)arg3 ;
-(void)appendAudioBuffer:(opaqueCMSampleBufferRef)arg1 forStream:(id)arg2 ;
-(void)appendMetadata:(id)arg1 withTimeStamp:(SCD_Struct_MO4)arg2 toStream:(id)arg3 ;
-(id)initWithURL:(id)arg1 andExpectedFrameRate:(double)arg2 ;
-(void)addMetadataTrack:(id)arg1 ;
-(void)appendPixelBuffer:(CVBufferRef)arg1 presentationTime:(SCD_Struct_MO4)arg2 toStreamId:(id)arg3 ;
-(void)prepareToRecordWithMovieMetadata:(id)arg1 ;
-(void)setCriticalError:(NSError *)arg1 ;
-(void)processFinishRecording;
-(NSError *)criticalError;
-(void)writerStatusChanged:(long long)arg1 writerDelegate:(id)arg2 delegateCallbackQueue:(id)arg3 ;
-(BOOL)activateNewState:(id)arg1 byEvent:(id)arg2 ;
-(void)removeIsReadyObservers;
-(void)informDelegateAboutError:(id)arg1 ;
-(void)setMovMetadataItems:(NSArray *)arg1 ;
-(void)setupAssetWriterStreamInputsWithError:(id*)arg1 ;
-(void)setupMetadataInputsWithError:(id*)arg1 ;
-(void)setupAssociatedMetadataInputsWithError:(id*)arg1 ;
-(void)addIsReadyObservers;
-(void)informDelegateAboutIsReady:(BOOL)arg1 forStream:(id)arg2 ;
-(void)consumeSamplesOfVideoStream:(id)arg1 ;
-(void)consumeMetadatOfMetadataStream:(id)arg1 ;
-(int)attachmentSerializationModeForStream:(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)arg1 withDefaultMode:(int)arg2 fromMap:(map<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData> > >*)arg3 ;
-(id)getMetadataGroupForBuffer:(CVBufferRef)arg1 stream:(id)arg2 presentationTime:(SCD_Struct_MO4)arg3 serializationMode:(int)arg4 ;
-(void)newSampleReady:(opaqueCMSampleBufferRef)arg1 metadata:(id)arg2 presentationTime:(SCD_Struct_MO4)arg3 streamKey:(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)arg4 streamId:(id)arg5 isAudioSample:(BOOL)arg6 ;
-(unsigned)getPixelFormatForStream:(id)arg1 fromMap:(map<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData> > >*)arg2 ;
-(int)encoderTypeForStream:(id)arg1 ;
-(id<MOVStreamCustomEncoderConfigDelegate>)customEncoderConfigDelegate;
-(void)asyncWriteAssociatedMetadata:(id)arg1 metadataKey:(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)arg2 associatedStreamKey:(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)arg3 ;
-(id)getAudioMetadataForBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)checkIfFifoAreEmpty;
-(double)finishingTimeout;
-(void)forceFinishRecording;
-(void)clearAllFifoQueues;
-(void)finishAVWriter;
-(BOOL)writeVideoFrameStreamAttachmentsData:(id)arg1 toMetadataAdaptor:(id)arg2 ofStream:(id)arg3 ;
-(void)checkForFinishing;
-(void)writeMetadata:(id)arg1 forStreamId:(id)arg2 ;
-(BOOL)isReadyForMoreDataForStreamId:(id)arg1 fromMap:(map<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData> > >*)arg2 ;
-(void)writeSampleBuffer:(opaqueCMSampleBufferRef)arg1 andMetadata:(id)arg2 forStreamId:(id)arg3 ;
-(unsigned long long)applyBitrateModifiersTo:(unsigned long long)arg1 ;
-(double)getExpectedFrameRateForStream:(id)arg1 ;
-(unsigned long long)getBitsPerSecondForColorStream:(id)arg1 dimensions:(SCD_Struct_MO2)arg2 ;
-(id)getWriterSettingsForStream:(id)arg1 description:(opaqueCMFormatDescriptionRef)arg2 ;
-(CGAffineTransform)getVideoTransformForStream:(id)arg1 ;
-(id)getTrackMetadataForStream:(id)arg1 ;
-(id)getTrackEncodingMetadataForStream:(id)arg1 fromMap:(map<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData> > >*)arg2 ;
-(id)getTrackInputPixelFormatMetadataForStream:(id)arg1 fromMap:(map<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData> > >*)arg2 ;
-(id)getTrackEncodedPixelFormatMetadataForStream:(id)arg1 fromMap:(map<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData> > >*)arg2 ;
-(id)getTrackMetadataForAttachmentsSerializationMode:(id)arg1 fromMap:(map<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData> > >*)arg2 ;
-(id)getTrackMetadataForTrackTypeInfo:(id)arg1 fromMap:(map<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData> > >*)arg2 ;
-(id)createRelatedToStreamMetadata:(id)arg1 ;
-(id)createRelationSpecifierMetadata:(id)arg1 ;
-(id)getTrackMetadataForExactBytesPerRow:(id)arg1 fromMap:(map<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData> > >*)arg2 ;
-(id)customTrackMetadataForStream:(id)arg1 fromMap:(map<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData> > >*)arg2 ;
-(BOOL)marksOutputTracksAsEnabledForStream:(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)arg1 fromMap:(map<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData> > >*)arg2 ;
-(const opaqueCMFormatDescriptionRef)createMetadataFormatDescription:(id)arg1 ;
-(void)encoder:(id)arg1 encodedSampleBuffer:(opaqueCMSampleBufferRef)arg2 metadata:(id)arg3 presentationTime:(SCD_Struct_MO4)arg4 streamId:(id)arg5 ;
-(void)encoder:(id)arg1 encodingFailedForStream:(id)arg2 ;
-(id)encoder:(id)arg1 overrideVideoEncoderSpecificationForstreamId:(id)arg2 ;
-(BOOL)encoder:(id)arg1 configureSessionOverride:(OpaqueVTCompressionSessionRef)arg2 streamId:(id)arg3 ;
-(unsigned)encoder:(id)arg1 codecTypeOverrideForstreamId:(id)arg2 ;
-(void)executePrepareToRecordWithMovieMetadata:(id)arg1 ;
-(void)finishAndDrainFifoFirst;
-(void)deleteMOVFile;
-(void)deleteFileOnCancel;
-(void)processCancelRecording;
-(void)processForceFinishRecording;
-(NSArray *)movMetadataItems;
-(BOOL)setExpectedFrameRate:(double)arg1 ;
-(BOOL)setVideoTransformFromOrientation:(int)arg1 ;
-(BOOL)relateStream:(id)arg1 toStream:(id)arg2 relationSpecifier:(id)arg3 ;
-(BOOL)setRealTimeCapture:(BOOL)arg1 ;
-(void)addMetadataTrackAssociatedWith:(id)arg1 withIdentifier:(id)arg2 withFormatDescription:(opaqueCMFormatDescriptionRef)arg3 ;
-(void)addTrackForStreamWithIdentifier:(id)arg1 formatDescription:(opaqueCMFormatDescriptionRef)arg2 encoderConfig:(id)arg3 ;
-(void)addAudioTrackForStreamWithIdentifier:(id)arg1 audioFormat:(id)arg2 additionalSettings:(id)arg3 ;
-(BOOL)setTrackMetadata:(id)arg1 forStream:(id)arg2 ;
-(int)attachmentSerializationModeForStream:(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)arg1 withDefaultMode:(int)arg2 ;
-(BOOL)marksOutputTracksAsEnabledForStream:(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)arg1 ;
-(void)appendVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 attachments:(id)arg2 streamId:(id)arg3 ;
-(void)appendMetadata:(id)arg1 associatedWith:(id)arg2 toStream:(id)arg3 ;
-(unsigned long long)fifoBufferSizeForStream:(id)arg1 ;
-(unsigned long long)fifoBufferCapacity;
-(void)setFifoBufferCapacity:(unsigned long long)arg1 ;
-(void)setFinishingTimeout:(double)arg1 ;
-(void)setCustomEncoderConfigDelegate:(id<MOVStreamCustomEncoderConfigDelegate>)arg1 ;
@end

