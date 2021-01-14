/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureOutput.h>
#import <AVFCapture/AVCaptureDataOutputDelegateOverride.h>

@class AVCaptureAudioDataOutputInternal, NSDictionary, NSString;

@interface AVCaptureAudioDataOutput : AVCaptureOutput <AVCaptureDataOutputDelegateOverride> {

	AVCaptureAudioDataOutputInternal* _internal;

}

@property (nonatomic,readonly) id<AVCaptureAudioDataOutputSampleBufferDelegate> sampleBufferDelegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> sampleBufferCallbackQueue; 
@property (nonatomic,copy) NSDictionary * audioSettings; 
@property (nonatomic,readonly) id delegateOverride; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateOverrideCallbackQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(void)initialize;
-(BOOL)canAddConnection:(id)arg1 failureReason:(id*)arg2 ;
-(NSDictionary *)audioSettings;
-(id)init;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(id)connectionMediaTypes;
-(void)_handleRemoteQueueOperation:(FigRemoteOperation*)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)setDelegateOverride:(id)arg1 delegateOverrideCallbackQueue:(id)arg2 ;
-(void)_handleConfigurationLiveEventForID:(long long)arg1 updatedFormatDescription:(opaqueCMFormatDescriptionRef)arg2 ;
-(void)_handleSampleBufferEventForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)recommendedAudioSettingsForAssetWriterWithOutputFileType:(id)arg1 ;
-(id)delegateOverride;
-(NSObject*<OS_dispatch_queue>)delegateOverrideCallbackQueue;
-(void)_updateRemoteQueue:(remoteQueueReceiverOpaqueRef)arg1 ;
-(id)supportedAssetWriterOutputFileTypes;
-(id<AVCaptureAudioDataOutputSampleBufferDelegate>)sampleBufferDelegate;
-(NSObject*<OS_dispatch_queue>)sampleBufferCallbackQueue;
-(void)setSampleBufferDelegate:(id)arg1 queue:(id)arg2 ;
-(void)_handleLocalQueueMessage:(FigLocalQueueMessage*)arg1 ;
-(void)_updateLocalQueue:(localQueueOpaqueRef)arg1 ;
-(void)setAudioSettings:(NSDictionary *)arg1 ;
-(void)dealloc;
@end

