/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <QuartzCore/CALayer.h>
#import <AVFoundation/AVQueuedSampleBufferRendering.h>
#import <AVFoundation/AVMediaDataRequesterConsumer.h>
#import <AVFoundation/AVQueuedSampleBufferRenderingInternal.h>

@class AVSampleBufferDisplayLayerInternal, NSError, NSString;

@interface AVSampleBufferDisplayLayer : CALayer <AVQueuedSampleBufferRendering, AVMediaDataRequesterConsumer, AVQueuedSampleBufferRenderingInternal> {

	AVSampleBufferDisplayLayerInternal* _sampleBufferDisplayLayerInternal;

}

@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
@property (getter=isReadyForMoreMediaData,readonly) BOOL readyForMoreMediaData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain,readonly) OpaqueCMTimebaseRef timebase; 
@property (nonatomic,readonly) BOOL outputObscuredDueToInsufficientExternalProtection; 
@property (assign,nonatomic) BOOL preventsCapture; 
@property (assign,nonatomic) BOOL preventsDisplaySleepDuringVideoPlayback; 
@property (retain) OpaqueCMTimebaseRef controlTimebase; 
@property (copy) NSString * videoGravity; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(BOOL)automaticallyNotifiesObserversOfStatus;
+(BOOL)automaticallyNotifiesObserversOfError;
-(id)init;
-(void)dealloc;
-(NSError *)error;
-(long long)status;
-(void)setBounds:(CGRect)arg1 ;
-(void)flush;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(OpaqueCMTimebaseRef)timebase;
-(NSString *)videoGravity;
-(void)setVideoGravity:(NSString *)arg1 ;
-(id)videoPerformanceMetrics;
-(void)setPreventsDisplaySleepDuringVideoPlayback:(BOOL)arg1 ;
-(BOOL)isReadyForMoreMediaData;
-(void)enqueueSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)stopRequestingMediaData;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)flushAndRemoveImage;
-(void)prerollDecodeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)expectMinimumUpcomingSampleBufferPresentationTime:(SCD_Struct_AV7)arg1 ;
-(void)resetUpcomingSampleBufferPresentationTimeExpectations;
-(id)_weakReference;
-(void)_forBoundsAnimations:(id)arg1 applyBlock:(/*^block*/id)arg2 ;
-(BOOL)preventsDisplaySleepDuringVideoPlayback;
-(BOOL)outputObscuredDueToInsufficientExternalProtection;
-(void)_didFinishSuspension:(id)arg1 ;
-(void)_refreshAboveHighWaterLevel;
-(void)copyFigSampleBufferAudioRenderer:(OpaqueFigSampleBufferAudioRenderer*)arg1 ;
-(BOOL)setRenderSynchronizer:(id)arg1 error:(id*)arg2 ;
-(void)_updateLayerTreeGeometryWithVideoGravity:(id)arg1 bounds:(CGRect)arg2 presentationSize:(CGSize)arg3 ;
-(void)_setStatus:(long long)arg1 error:(id)arg2 ;
-(void)_setControlTimebase:(OpaqueCMTimebaseRef)arg1 ;
-(BOOL)_setSynchronizerTimebase:(OpaqueCMTimebaseRef)arg1 error:(id*)arg2 ;
-(int)_initializeTimebases;
-(int)_createVideoQueue;
-(void)_updatePresentationSize:(CGSize)arg1 ;
-(void)_resetStatusWithOSStatus:(int)arg1 ;
-(void)_setOutputObscuredDueToInsufficientExternalProtection:(BOOL)arg1 ;
-(void)_addFigVideoQueueListeners;
-(void)_removeFigVideoQueueListeners;
-(void)_callOldPrerollCompletionHandlerWithSuccess:(BOOL)arg1 andSetNewPrerollCompletionHandler:(/*^block*/id)arg2 forRequestID:(int)arg3 ;
-(id)_transformToAbsoluteAnimationOfBounds:(id)arg1 ;
-(void)_addAnimationsForContentLayer:(id)arg1 size:(CGSize)arg2 gravity:(id)arg3 ;
-(void)setControlTimebase:(OpaqueCMTimebaseRef)arg1 ;
-(OpaqueCMTimebaseRef)controlTimebase;
-(void)flushWithRemovalOfDisplayedImage:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_flushComplete;
-(void)_completedDecodeForPrerollForRequestID:(int)arg1 ;
-(void)setPreventsCapture:(BOOL)arg1 ;
-(BOOL)preventsCapture;
-(BOOL)setUpcomingPresentationTimeExpectations:(int)arg1 minimumPresentationTime:(SCD_Struct_AV7)arg2 ;
-(void)expectMonotonicallyIncreasingUpcomingSampleBufferPresentationTimes;
@end

