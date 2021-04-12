/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureOutput.h>
#import <AVFoundation/AVCaptureDataOutputDelegateOverride.h>

@class AVCaptureMetadataOutputInternal, NSArray, NSString;

@interface AVCaptureMetadataOutput : AVCaptureOutput <AVCaptureDataOutputDelegateOverride> {

	AVCaptureMetadataOutputInternal* _internal;

}

@property (nonatomic,readonly) id<AVCaptureMetadataOutputObjectsDelegate> metadataObjectsDelegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> metadataObjectsCallbackQueue; 
@property (nonatomic,readonly) NSArray * availableMetadataObjectTypes; 
@property (nonatomic,copy) NSArray * metadataObjectTypes; 
@property (assign,nonatomic) CGRect rectOfInterest; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id delegateOverride; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateOverrideCallbackQueue; 
+(void)initialize;
+(id)new;
+(id)_metadataConstantValueToName:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)delegateOverride;
-(NSObject*<OS_dispatch_queue>)delegateOverrideCallbackQueue;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id)connectionMediaTypes;
-(BOOL)canAddConnection:(id)arg1 failureReason:(id*)arg2 ;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(void)_updateRemoteQueue:(remoteQueueReceiverOpaqueRef)arg1 ;
-(void)_handleRemoteQueueOperation:(FigRemoteOperation*)arg1 ;
-(void)setDelegateOverride:(id)arg1 delegateOverrideCallbackQueue:(id)arg2 ;
-(id)_metadataIdentifiers;
-(CGRect)rectOfInterest;
-(long long)faceTrackingMaxFaces;
-(void)setFaceTrackingMaxFaces:(long long)arg1 ;
-(BOOL)isFaceTrackingUsesFaceRecognition;
-(void)setFaceTrackingUsesFaceRecognition:(BOOL)arg1 ;
-(NSArray *)metadataObjectTypes;
-(void)_updateLocalQueue:(localQueueOpaqueRef)arg1 ;
-(void)_processSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_handleLocalQueueMessage:(FigLocalQueueMessage*)arg1 ;
-(NSArray *)availableMetadataObjectTypes;
-(BOOL)isFaceTrackingSupported;
-(void)setMetadataObjectTypes:(NSArray *)arg1 ;
-(BOOL)isOfflineVideoStabilizationMotionMetadataSupported;
-(void)setMetadataObjectsDelegate:(id)arg1 queue:(id)arg2 ;
-(id<AVCaptureMetadataOutputObjectsDelegate>)metadataObjectsDelegate;
-(NSObject*<OS_dispatch_queue>)metadataObjectsCallbackQueue;
-(void)setRectOfInterest:(CGRect)arg1 ;
-(BOOL)isFaceTrackingMetadataObjectTypesAvailable;
-(void)setFaceTrackingMetadataObjectTypesAvailable:(BOOL)arg1 ;
-(BOOL)isOfflineVideoStabilizationMotionMetadataObjectTypesAvailable;
-(void)setOfflineVideoStabilizationMotionMetadataObjectTypesAvailable:(BOOL)arg1 ;
@end

