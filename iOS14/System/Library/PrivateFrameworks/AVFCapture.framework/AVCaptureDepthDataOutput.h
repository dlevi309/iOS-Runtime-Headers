/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureOutput.h>
#import <AVFCapture/AVCaptureDataOutputDelegateOverride.h>

@class AVCaptureDepthDataOutputInternal, NSString;

@interface AVCaptureDepthDataOutput : AVCaptureOutput <AVCaptureDataOutputDelegateOverride> {

	AVCaptureDepthDataOutputInternal* _internal;

}

@property (nonatomic,readonly) id<AVCaptureDepthDataOutputDelegate> delegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateCallbackQueue; 
@property (assign,nonatomic) BOOL alwaysDiscardsLateDepthData; 
@property (assign,getter=isFilteringEnabled,nonatomic) BOOL filteringEnabled; 
@property (nonatomic,readonly) id delegateOverride; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateOverrideCallbackQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(void)initialize;
-(BOOL)canAddConnection:(id)arg1 failureReason:(id*)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(NSObject*<OS_dispatch_queue>)delegateCallbackQueue;
-(id)init;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id<AVCaptureDepthDataOutputDelegate>)delegate;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(id)connectionMediaTypes;
-(void)removeConnection:(id)arg1 ;
-(void)_handleRemoteQueueOperation:(FigRemoteOperation*)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)setDelegateOverride:(id)arg1 delegateOverrideCallbackQueue:(id)arg2 ;
-(id)delegateOverride;
-(NSObject*<OS_dispatch_queue>)delegateOverrideCallbackQueue;
-(void)_updateRemoteQueue:(remoteQueueReceiverOpaqueRef)arg1 ;
-(void)_processSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_handleLocalQueueMessage:(FigLocalQueueMessage*)arg1 ;
-(void)_updateLocalQueue:(localQueueOpaqueRef)arg1 ;
-(BOOL)alwaysDiscardsLateDepthData;
-(void)setDelegate:(id)arg1 callbackQueue:(id)arg2 ;
-(void)setAlwaysDiscardsLateDepthData:(BOOL)arg1 ;
-(BOOL)isFilteringEnabled;
-(void)setFilteringEnabled:(BOOL)arg1 ;
-(BOOL)appliesOrientationWithPhysicalRotationForConnection:(id)arg1 ;
-(BOOL)appliesMirroringWithPhysicalFlipForConnection:(id)arg1 ;
-(void)dealloc;
@end

