/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <libobjc.A.dylib/CAMStillImagePersistenceCoordinatorDelegate.h>
#import <libobjc.A.dylib/CAMVideoPersistenceCoordinationDelegate.h>
#import <libobjc.A.dylib/CAMCaptureService.h>

@protocol CAMPersistenceResultDelegate, OS_dispatch_queue;
@class NSMutableArray, NSObject, CAMThumbnailGenerator, CAMLocationController, CAMProtectionController, CAMPowerController, CAMBurstController, CAMIrisVideoController, NSMapTable, NSMutableDictionary, NSString;

@interface CAMPersistenceController : NSObject <CAMStillImagePersistenceCoordinatorDelegate, CAMVideoPersistenceCoordinationDelegate, CAMCaptureService> {

	struct {
		BOOL respondsToDidCompleteAllLocalPersistenceForRequest;
	}  _resultDelegateFlags;
	NSMutableArray* _pendingLocalPersistenceWrappers;
	NSMutableArray* _pendingRemotePersistenceWrappers;
	id<CAMPersistenceResultDelegate> _resultDelegate;
	NSObject*<OS_dispatch_queue> __localPersistenceQueue;
	NSObject*<OS_dispatch_queue> __remotePersistenceQueue;
	CAMThumbnailGenerator* __localPersistenceThumbnailGenerator;
	CAMThumbnailGenerator* __remotePersistenceThumbnailGenerator;
	CAMLocationController* __locationController;
	CAMProtectionController* __protectionController;
	CAMPowerController* __powerController;
	CAMBurstController* __burstController;
	CAMIrisVideoController* __irisVideoController;
	NSObject*<OS_dispatch_queue> __resultDelegateIsolationQueue;
	NSObject*<OS_dispatch_queue> __coordinationQueue;
	NSMapTable* __coordinationQueueGroupsByIdentifier;
	NSMutableDictionary* __coordinationQueue_stillImagePersistenceCoordinators;
	NSMutableDictionary* __coordinationQueue_videoPersistenceCoordinators;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _localPersistenceQueue;                                     //@synthesize _localPersistenceQueue=__localPersistenceQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _remotePersistenceQueue;                                    //@synthesize _remotePersistenceQueue=__remotePersistenceQueue - In the implementation block
@property (nonatomic,readonly) CAMThumbnailGenerator * _localPersistenceThumbnailGenerator;                             //@synthesize _localPersistenceThumbnailGenerator=__localPersistenceThumbnailGenerator - In the implementation block
@property (nonatomic,readonly) CAMThumbnailGenerator * _remotePersistenceThumbnailGenerator;                            //@synthesize _remotePersistenceThumbnailGenerator=__remotePersistenceThumbnailGenerator - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _pendingLocalPersistenceWrappers;                                       //@synthesize pendingLocalPersistenceWrappers=_pendingLocalPersistenceWrappers - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _pendingRemotePersistenceWrappers;                                      //@synthesize pendingRemotePersistenceWrappers=_pendingRemotePersistenceWrappers - In the implementation block
@property (nonatomic,readonly) CAMLocationController * _locationController;                                             //@synthesize _locationController=__locationController - In the implementation block
@property (nonatomic,readonly) CAMProtectionController * _protectionController;                                         //@synthesize _protectionController=__protectionController - In the implementation block
@property (nonatomic,readonly) CAMPowerController * _powerController;                                                   //@synthesize _powerController=__powerController - In the implementation block
@property (nonatomic,readonly) CAMBurstController * _burstController;                                                   //@synthesize _burstController=__burstController - In the implementation block
@property (nonatomic,readonly) CAMIrisVideoController * _irisVideoController;                                           //@synthesize _irisVideoController=__irisVideoController - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _resultDelegateIsolationQueue;                              //@synthesize _resultDelegateIsolationQueue=__resultDelegateIsolationQueue - In the implementation block
@property (nonatomic,readonly) BOOL resultDelegateRespondsToDidCompleteAllLocalPersistenceForRequest; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _coordinationQueue;                                         //@synthesize _coordinationQueue=__coordinationQueue - In the implementation block
@property (nonatomic,readonly) NSMapTable * _coordinationQueueGroupsByIdentifier;                                       //@synthesize _coordinationQueueGroupsByIdentifier=__coordinationQueueGroupsByIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _coordinationQueue_stillImagePersistenceCoordinators;              //@synthesize _coordinationQueue_stillImagePersistenceCoordinators=__coordinationQueue_stillImagePersistenceCoordinators - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _coordinationQueue_videoPersistenceCoordinators;                   //@synthesize _coordinationQueue_videoPersistenceCoordinators=__coordinationQueue_videoPersistenceCoordinators - In the implementation block
@property (assign,nonatomic,__weak) id<CAMPersistenceResultDelegate> resultDelegate;                                    //@synthesize resultDelegate=_resultDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)uniqueIncomingPathForAssetWithUUID:(id)arg1 captureTime:(double)arg2 extension:(id)arg3 ;
+(id)uniquePathForAssetWithUUID:(id)arg1 captureTime:(double)arg2 extension:(id)arg3 usingIncomingDirectory:(BOOL)arg4 ;
+(id)clientVideoMetadataForRequest:(id)arg1 withCreationDate:(id)arg2 isEV0ForHDR:(BOOL)arg3 livePhotoIdentifierOverride:(id)arg4 ;
+(id)spatialOverCapturePathForPath:(id)arg1 ;
+(id)videoMetadataDateFormatter;
+(id)_pathForIncomingDirectory;
+(id)delimiterForIncomingAssetFilenames;
+(id)clientVideoMetadataForLocation:(id)arg1 withCreationDate:(id)arg2 ;
-(CAMPowerController *)_powerController;
-(void)stillImageRequestDidCompleteCapture:(id)arg1 error:(id)arg2 ;
-(id)_stillPersistenceUUIDForRequest:(id)arg1 withVideoResult:(id)arg2 ;
-(CAMLocationController *)_locationController;
-(id)_spatialOverCaptureIdentifierForVideoURL:(id)arg1 ;
-(id)_uniformTypeIdentifierForStillImageRequest:(id)arg1 ;
-(void)videoPersistenceCoordinator:(id)arg1 requestsRemotePersistenceForLocalPersistenceResult:(id)arg2 spatialOverCaptureResult:(id)arg3 captureRequest:(id)arg4 powerAssertionReason:(unsigned)arg5 ;
-(void)videoRequest:(id)arg1 didCompleteCaptureWithResult:(id)arg2 ;
-(void)persistBurstWithIdentifier:(id)arg1 result:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)init;
-(id)_adjustmentsDataForRequest:(id)arg1 captureDimensions:(SCD_Struct_CA15)arg2 portraitMetadata:(id)arg3 ;
-(id)_xmpEncodedDiagnosticDataFromDictionary:(id)arg1 ;
-(id)_jobDictionaryForTimelapsePlaceholderResult:(id)arg1 ;
-(id)_extensionForUniformTypeIdentifier:(id)arg1 ;
-(CAMProtectionController *)_protectionController;
-(void)setResultDelegate:(id<CAMPersistenceResultDelegate>)arg1 ;
-(void)_remotelyPersistVideoJob:(id)arg1 forRequest:(id)arg2 loggingIdentifier:(id)arg3 withSendHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_notifyDelegateOfCompletedStillImageRemotePersistenceForRequest:(id)arg1 withReply:(id)arg2 fromBatchOfSize:(unsigned long long)arg3 error:(id)arg4 ;
-(id)_createMetadataForPhysicallyOrientedImage:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)_resultDelegateIsolationQueue;
-(void)_remotelyPersistStillImageJob:(id)arg1 forRequest:(id)arg2 loggingIdentifier:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_locallyPersistVideoCaptureResult:(id)arg1 forRequest:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(NSMutableArray *)_pendingLocalPersistenceWrappers;
-(NSMutableArray *)_pendingRemotePersistenceWrappers;
-(void)stillImageRequest:(id)arg1 didCompleteStillImageCaptureWithResult:(id)arg2 ;
-(void)_locallyPersistStillImageResult:(id)arg1 forRequest:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(CAMIrisVideoController *)_irisVideoController;
-(void)_handleCompletedVideoJobForRequest:(id)arg1 withReply:(id)arg2 completionHandler:(/*^block*/id)arg3 error:(id)arg4 ;
-(id)_ensureCoordinationGroupForIdentifier:(id)arg1 ;
-(void)_notifyDelegateOfCompletedVideoRemotePersistenceForRequest:(id)arg1 withReply:(id)arg2 error:(id)arg3 ;
-(void)_notifyDelegateOfCompletedVideoLocalPersistenceForRequest:(id)arg1 withResult:(id)arg2 ;
-(BOOL)_writeJPEGToURL:(id)arg1 withData:(id)arg2 thumbnail:(id)arg3 properties:(id)arg4 duringBurst:(BOOL)arg5 error:(out id*)arg6 ;
-(void)_handleCompletedStillImageJobForRequest:(id)arg1 withReply:(id)arg2 fromBatchOfSize:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 error:(id)arg5 ;
-(NSObject*<OS_dispatch_queue>)_localPersistenceQueue;
-(id)_coordinationGroupForIdentifier:(id)arg1 ;
-(void)_removeCoordinationGroupForIdentifier:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)_coordinationQueue;
-(BOOL)_writeDataToURL:(id)arg1 withData:(id)arg2 duringBurst:(BOOL)arg3 error:(out id*)arg4 ;
-(id)initWithLocationController:(id)arg1 burstController:(id)arg2 protectionController:(id)arg3 powerController:(id)arg4 irisVideoController:(id)arg5 ;
-(unsigned)_videoRemotePowerAssertionReasonForCoordinationInfo:(id)arg1 ;
-(void)stillImagePersistenceCoordinator:(id)arg1 requestsTimeoutScheduledForDeferredRemotePersistenceForCoordinationInfo:(id)arg2 request:(id)arg3 ;
-(NSMapTable *)_coordinationQueueGroupsByIdentifier;
-(void)persistPlaceholderTimelapseVideoWithResult:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(CAMBurstController *)_burstController;
-(CGAffineTransform)_affineTransformForRotationDegrees:(int)arg1 mirrored:(BOOL)arg2 ;
-(CFWriteStreamRef)_createOpenWriteStreamWithURL:(id)arg1 forBurst:(BOOL)arg2 ;
-(void)_dispatchRemotePersistenceForLocalVideoPersistenceResult:(id)arg1 spatialOverCaptureLocalVideoResult:(id)arg2 request:(id)arg3 powerAssertionReason:(unsigned)arg4 loggingIdentifier:(id)arg5 ;
-(NSMutableDictionary *)_coordinationQueue_videoPersistenceCoordinators;
-(void)_notifyDelegateOfCompletedStillImageLocalPersistenceForRequest:(id)arg1 withResult:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)_remotePersistenceQueue;
-(id)_persistStillImageCaptureSurfaceResult:(id)arg1 withRequest:(id)arg2 ;
-(void)stillImagePersistenceCoordinator:(id)arg1 requestsRemotePersistenceForLocalPersistenceResult:(id)arg2 filteredLocalResult:(id)arg3 spatialOverCaptureLocalResult:(id)arg4 request:(id)arg5 powerAssertionReason:(unsigned)arg6 ;
-(void)_coordinateRemotePersistenceForVideoLocalResult:(id)arg1 coordinationInfo:(id)arg2 request:(id)arg3 ;
-(CAMThumbnailGenerator *)_remotePersistenceThumbnailGenerator;
-(void)_coordinateRemotePersistenceForStillImageLocalResult:(id)arg1 coordinationInfo:(id)arg2 request:(id)arg3 ;
-(unsigned)_stillImageLocalPowerAssertionReasonForCoordinationInfo:(id)arg1 ;
-(void)panoramaRequest:(id)arg1 didCompleteCaptureWithResult:(id)arg2 ;
-(BOOL)resultDelegateRespondsToDidCompleteAllLocalPersistenceForRequest;
-(id<CAMPersistenceResultDelegate>)resultDelegate;
-(void)videoPersistenceCoordinator:(id)arg1 requestsTimeoutScheduledForDeferredRemotePersistenceForCoordinationInfo:(id)arg2 request:(id)arg3 ;
-(id)_persistVideoCaptureResult:(id)arg1 withRequest:(id)arg2 ;
-(NSMutableDictionary *)_coordinationQueue_stillImagePersistenceCoordinators;
-(void)_handleStillImagePersistenceForRequest:(id)arg1 withResult:(id)arg2 ;
-(id)_physicallyRotatedJPEGDataFromCapturePhoto:(id)arg1 ;
-(void)stillImageRequest:(id)arg1 didCompleteVideoCaptureWithResult:(id)arg2 ;
-(void)_mainThread_handleApplicationDidEnterBackground:(id)arg1 ;
-(unsigned)_videoLocalPowerAssertionReasonForCoordinationInfo:(id)arg1 ;
-(id)_videoPersistenceUUIDForRequest:(id)arg1 withResult:(id)arg2 ;
-(id)_jobDictionaryForVideoLocalResult:(id)arg1 spatialOverCaptureLocalResult:(id)arg2 fromRequest:(id)arg3 ;
-(id)_jobDictionaryForStillImageLocalResult:(id)arg1 filteredLocalResult:(id)arg2 spatialOverCaptureLocalResult:(id)arg3 fromRequest:(id)arg4 ;
-(void)performDeferredRemotePersistenceWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_dispatchRemotePersistenceForLocalPersistenceResult:(id)arg1 filteredLocalResult:(id)arg2 spatialOverCaptureLocalResult:(id)arg3 request:(id)arg4 powerAssertionReason:(unsigned)arg5 loggingIdentifier:(id)arg6 ;
-(void)dealloc;
-(CAMThumbnailGenerator *)_localPersistenceThumbnailGenerator;
-(void)_handleVideoPersistenceForRequest:(id)arg1 withResult:(id)arg2 ;
@end

