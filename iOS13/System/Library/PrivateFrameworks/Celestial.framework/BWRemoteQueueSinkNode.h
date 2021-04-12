/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWSinkNode.h>

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
	BOOL _sentDiagnosticMetadata;
	BOOL _disableFlatDictionaryVDOMetadata;
	OpaqueFigFlatDictionaryKeySpecRef _makerNoteKeySpec;
	NSDictionary* _videoColorInfoOverride;
	BOOL _pixelBufferAttachmentModificationAllowed;
	BOOL _cameraSupportsFlash;
	BOOL _removeCameraIntrinsicMatrixAttachment;
	opaqueCMFormatDescriptionRef _cachedFormatDescription;
	SCD_Struct_BW2 _lastPTS;
	int _receiverPID;
	BOOL _clientIsRunningInMediaserverd;
	BOOL _panoramaRequiresLTMLocking;

}

@property (assign,nonatomic) id<BWRemoteQueueSinkNodeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)initialize;
-(void)dealloc;
-(id<BWRemoteQueueSinkNodeDelegate>)delegate;
-(void)setDelegate:(id<BWRemoteQueueSinkNodeDelegate>)arg1 ;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(id)initWithMediaType:(unsigned)arg1 receiverPID:(int)arg2 sinkID:(id)arg3 ;
-(void)setDiscardsLateSampleBuffers:(BOOL)arg1 ;
-(void)setClientVideoRetainedBufferCount:(int)arg1 ;
-(void)setVideoColorInfoOverride:(id)arg1 ;
-(void)setAttachPanoramaMetadata:(BOOL)arg1 ;
-(void)setCameraSupportsFlash:(BOOL)arg1 ;
-(void)setRemoveCameraIntrinsicMatrixAttachment:(BOOL)arg1 ;
-(void)setPanoramaRequiresLTMLocking:(BOOL)arg1 ;
-(void)registerSurfacesFromSourcePool:(id)arg1 ;
-(void)setPixelBufferAttachmentModificationAllowed:(BOOL)arg1 ;
-(id)videoColorInfoOverride;
-(void)_handlePeerTerminated;
-(int)_finishRenderingSampleBufferUsingTheRemoteCaptureStack:(opaqueCMSampleBufferRef)arg1 isDroppedSample:(BOOL)arg2 ;
-(int)_finishRenderingSampleBufferUsingTheLocalQueue:(opaqueCMSampleBufferRef)arg1 ;
-(int)clientVideoRetainedBufferCount;
-(BOOL)discardsLateSampleBuffers;
-(BOOL)attachPanoramaMetadata;
-(BOOL)panoramaRequiresLTMLocking;
-(BOOL)pixelBufferAttachmentModificationAllowed;
-(BOOL)cameraSupportsFlash;
-(BOOL)removeCameraIntrinsicMatrixAttachment;
-(void)_attachDiagnosticMetadataIfDevicePropertiesLockedForPanorama:(opaqueCMSampleBufferRef)arg1 panoramaRequiresLTMLocking:(BOOL)arg2 ;
@end

