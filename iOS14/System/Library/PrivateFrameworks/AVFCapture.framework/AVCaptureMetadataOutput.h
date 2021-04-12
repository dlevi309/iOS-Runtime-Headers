/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureOutput.h>
#import <AVFCapture/AVCaptureDataOutputDelegateOverride.h>

@class AVCaptureMetadataOutputInternal, NSArray, NSString;

@interface AVCaptureMetadataOutput : AVCaptureOutput <AVCaptureDataOutputDelegateOverride> {

	AVCaptureMetadataOutputInternal* _internal;

}

@property (nonatomic,readonly) id<AVCaptureMetadataOutputObjectsDelegate> metadataObjectsDelegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> metadataObjectsCallbackQueue; 
@property (nonatomic,readonly) NSArray * availableMetadataObjectTypes; 
@property (nonatomic,copy) NSArray * metadataObjectTypes; 
@property (assign,nonatomic) CGRect rectOfInterest; 
@property (nonatomic,readonly) id delegateOverride; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateOverrideCallbackQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(void)initialize;
+(id)_metadataConstantValueToName:(id)arg1 ;
-(BOOL)canAddConnection:(id)arg1 failureReason:(id*)arg2 ;
-(BOOL)isFaceTrackingSupported;
-(id)init;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)setMetadataObjectsDelegate:(id)arg1 queue:(id)arg2 ;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(id)connectionMediaTypes;
-(void)_handleRemoteQueueOperation:(FigRemoteOperation*)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)setDelegateOverride:(id)arg1 delegateOverrideCallbackQueue:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)metadataObjectsCallbackQueue;
-(id)delegateOverride;
-(long long)faceTrackingMaxFaces;
-(NSObject*<OS_dispatch_queue>)delegateOverrideCallbackQueue;
-(void)setFaceTrackingMaxFaces:(long long)arg1 ;
-(void)_updateRemoteQueue:(remoteQueueReceiverOpaqueRef)arg1 ;
-(void)setMetadataObjectTypes:(NSArray *)arg1 ;
-(NSArray *)metadataObjectTypes;
-(void)_processSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(NSArray *)availableMetadataObjectTypes;
-(BOOL)isFaceTrackingMetadataObjectTypesAvailable;
-(BOOL)isVideoPreviewHistogramMetadataObjectTypesAvailable;
-(void)setOfflineVideoStabilizationMotionMetadataObjectTypesAvailable:(BOOL)arg1 ;
-(id<AVCaptureMetadataOutputObjectsDelegate>)metadataObjectsDelegate;
-(void)_handleLocalQueueMessage:(FigLocalQueueMessage*)arg1 ;
-(void)setVideoPreviewHistogramMetadataObjectTypesAvailable:(BOOL)arg1 ;
-(void)_updateLocalQueue:(localQueueOpaqueRef)arg1 ;
-(void)setRectOfInterest:(CGRect)arg1 ;
-(CGRect)rectOfInterest;
-(void)setFaceTrackingUsesFaceRecognition:(BOOL)arg1 ;
-(BOOL)isVideoPreviewHistogramMetadataSupported;
-(void)setFaceTrackingMetadataObjectTypesAvailable:(BOOL)arg1 ;
-(BOOL)isFaceTrackingUsesFaceRecognition;
-(BOOL)isOfflineVideoStabilizationMotionMetadataSupported;
-(void)dealloc;
-(id)_metadataIdentifiers;
-(BOOL)isOfflineVideoStabilizationMotionMetadataObjectTypesAvailable;
@end

