/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWSinkNode.h>

@protocol BWRemoteQueueSinkNodeDelegate;
@class NSDictionary;

@interface BWRemoteQueueSinkNode : BWSinkNode {

	BOOL _mediaTypeIsVideo;
	BOOL _mediaTypeIsPointCloud;
	remoteQueueSenderOpaqueRef _remoteQueueSender;
	OpaqueFigSimpleMutexRef _peerTerminationMutex;
	shmemPoolOpaqueRef _sharedMemoryPool;
	CFAllocatorRef _sharedMemoryPoolCFAllocator;
	localQueueOpaqueRef _localQueue;
	unsigned _numberOfMediaBuffersLocallyEnqueued;
	unsigned _numberOfMediaBuffersLocallyDequeued;
	id<BWRemoteQueueSinkNodeDelegate> _delegate;
	int _clientVideoRetainedBufferCount;
	BOOL _discardsLateSampleBuffers;
	BOOL _attachPanoramaMetadata;
	BOOL _sentDiagnosticMetadataForPanorama;
	BOOL _disableFlatDictionaryVDOMetadata;
	OpaqueFigFlatDictionaryKeySpecRef _makerNoteKeySpec;
	NSDictionary* _videoColorInfoOverride;
	BOOL _pixelBufferAttachmentModificationAllowed;
	BOOL _cameraSupportsFlash;
	BOOL _removeCameraIntrinsicMatrixAttachment;
	opaqueCMFormatDescriptionRef _cachedFormatDescription;
	SCD_Struct_BW8 _lastPTS;
	int _receiverPID;
	BOOL _clientIsRunningInMediaserverd;
	BOOL _panoramaRequiresLTMLocking;

}

@property (assign,nonatomic) id<BWRemoteQueueSinkNodeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)initialize;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(void)setDiscardsLateSampleBuffers:(BOOL)arg1 ;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(id)nodeSubType;
-(int)_finishRenderingSampleBufferUsingTheLocalQueue:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)_includeDiagnosticMetadataIfDevicePropertiesLockedForPanorama:(opaqueCMSampleBufferRef)arg1 panoramaRequiresLTMLocking:(BOOL)arg2 ;
-(void)setRemoveCameraIntrinsicMatrixAttachment:(BOOL)arg1 ;
-(void)setPanoramaRequiresLTMLocking:(BOOL)arg1 ;
-(id<BWRemoteQueueSinkNodeDelegate>)delegate;
-(int)_finishRenderingSampleBufferUsingTheRemoteCaptureStack:(opaqueCMSampleBufferRef)arg1 isDroppedSample:(BOOL)arg2 ;
-(void)setCameraSupportsFlash:(BOOL)arg1 ;
-(BOOL)removeCameraIntrinsicMatrixAttachment;
-(BOOL)pixelBufferAttachmentModificationAllowed;
-(void)setClientVideoRetainedBufferCount:(int)arg1 ;
-(BOOL)discardsLateSampleBuffers;
-(void)setDelegate:(id<BWRemoteQueueSinkNodeDelegate>)arg1 ;
-(id)initWithMediaType:(unsigned)arg1 clientAuditToken:(SCD_Struct_Fi80)arg2 sinkID:(id)arg3 ;
-(BOOL)panoramaRequiresLTMLocking;
-(void)registerSurfacesFromSourcePool:(id)arg1 ;
-(void)setAttachPanoramaMetadata:(BOOL)arg1 ;
-(void)setVideoColorInfoOverride:(id)arg1 ;
-(BOOL)attachPanoramaMetadata;
-(void)setPixelBufferAttachmentModificationAllowed:(BOOL)arg1 ;
-(id)videoColorInfoOverride;
-(int)clientVideoRetainedBufferCount;
-(void)_handlePeerTerminated;
-(BOOL)cameraSupportsFlash;
-(void)dealloc;
@end

