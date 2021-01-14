/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <QuartzCore/CALayer.h>
#import <AVFCore/AVQueuedSampleBufferRendering.h>
#import <AVFCore/AVMediaDataRequesterConsumer.h>
#import <AVFCore/AVQueuedSampleBufferRenderingInternal.h>

@class AVSampleBufferDisplayLayerInternal, NSError, NSString, AVSampleBufferVideoOutput;

@interface AVSampleBufferDisplayLayer : CALayer <AVQueuedSampleBufferRendering, AVMediaDataRequesterConsumer, AVQueuedSampleBufferRenderingInternal> {

	AVSampleBufferDisplayLayerInternal* _sampleBufferDisplayLayerInternal;

}

@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) BOOL requiresFlushToResumeDecoding; 
@property (getter=isReadyForMoreMediaData,readonly) BOOL readyForMoreMediaData; 
@property (retain,readonly) OpaqueCMTimebaseRef timebase; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL outputObscuredDueToInsufficientExternalProtection; 
@property (assign,nonatomic) BOOL preventsCapture; 
@property (assign,nonatomic) BOOL preventsDisplaySleepDuringVideoPlayback; 
@property (assign,nonatomic) AVSampleBufferVideoOutput * output; 
@property (retain) OpaqueCMTimebaseRef controlTimebase; 
@property (copy) NSString * videoGravity; 
+(BOOL)automaticallyNotifiesObserversOfError;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(BOOL)automaticallyNotifiesObserversOfStatus;
-(void)removeAllAnimations;
-(void)stopRequestingMediaData;
-(void)flush;
-(void)setVideoGravity:(NSString *)arg1 ;
-(NSString *)videoGravity;
-(id)init;
-(void)_refreshAboveHighWaterLevel;
-(AVSampleBufferVideoOutput *)output;
-(void)enqueueSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)copyFigSampleBufferAudioRenderer:(OpaqueFigSampleBufferAudioRenderer*)arg1 ;
-(BOOL)setRenderSynchronizer:(id)arg1 error:(id*)arg2 ;
-(BOOL)isReadyForMoreMediaData;
-(void)setBounds:(CGRect)arg1 ;
-(void)setToneMapToStandardDynamicRange:(BOOL)arg1 ;
-(NSError *)error;
-(BOOL)requiresFlushToResumeDecoding;
-(void)_flushComplete;
-(OpaqueFigVideoQueueRef)_copyVideoQueue;
-(void)_updateLayerTreeGeometryWithVideoGravity:(id)arg1 bounds:(CGRect)arg2 presentationSize:(CGSize)arg3 ;
-(void)_setStatus:(long long)arg1 error:(id)arg2 ;
-(void)_setControlTimebase:(OpaqueCMTimebaseRef)arg1 ;
-(BOOL)_setSynchronizerTimebase:(OpaqueCMTimebaseRef)arg1 error:(id*)arg2 ;
-(int)_initializeTimebases;
-(int)_createVideoQueue:(OpaqueFigVideoQueue*)arg1 ;
-(void)_updatePresentationSize:(CGSize)arg1 ;
-(void)_resetStatusWithOSStatus:(int)arg1 ;
-(void)_addFigVideoQueueListeners;
-(void)_setOutputObscuredDueToInsufficientExternalProtection:(BOOL)arg1 ;
-(void)_removeFigVideoQueueListeners;
-(OpaqueCMTimebaseRef)controlTimebase;
-(void)_setRequiresFlushToResumeDecoding:(BOOL)arg1 ;
-(void)resetUpcomingSampleBufferPresentationTimeExpectations;
-(void)_callOldPrerollCompletionHandlerWithSuccess:(BOOL)arg1 andSetNewPrerollCompletionHandler:(/*^block*/id)arg2 forRequestID:(int)arg3 ;
-(id)_transformToAbsoluteAnimationOfBounds:(id)arg1 ;
-(void)_addAnimationsForContentLayer:(id)arg1 size:(CGSize)arg2 gravity:(id)arg3 ;
-(BOOL)preventsCapture;
-(void)setControlTimebase:(OpaqueCMTimebaseRef)arg1 ;
-(void)flushWithRemovalOfDisplayedImage:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)flushAndRemoveImage;
-(void)_completedDecodeForPrerollForRequestID:(int)arg1 ;
-(void)prerollDecodeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setPreventsCapture:(BOOL)arg1 ;
-(BOOL)setUpcomingPresentationTimeExpectations:(int)arg1 minimumPresentationTime:(SCD_Struct_AV6)arg2 ;
-(void)expectMinimumUpcomingSampleBufferPresentationTime:(SCD_Struct_AV6)arg1 ;
-(void)expectMonotonicallyIncreasingUpcomingSampleBufferPresentationTimes;
-(OpaqueCMTimebaseRef)timebase;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(id)_weakReference;
-(void)_forBoundsAnimations:(id)arg1 applyBlock:(/*^block*/id)arg2 ;
-(id)videoPerformanceMetrics;
-(BOOL)outputObscuredDueToInsufficientExternalProtection;
-(void)setOutput:(AVSampleBufferVideoOutput *)arg1 ;
-(BOOL)preventsDisplaySleepDuringVideoPlayback;
-(void)_didFinishSuspension:(id)arg1 ;
-(void)setPreventsDisplaySleepDuringVideoPlayback:(BOOL)arg1 ;
-(void)removeAnimationForKey:(id)arg1 ;
-(long long)status;
-(void)dealloc;
-(void)setSTSLabel:(id)arg1 ;
@end

