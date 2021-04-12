/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMediaDataRequesterConsumer.h>
#import <AVFoundation/AVQueuedSampleBufferRenderingInternal.h>
#import <AVFoundation/AVQueuedSampleBufferRendering.h>

@class AVSampleBufferAudioRendererInternal, NSError, NSString;

@interface AVSampleBufferAudioRenderer : NSObject <AVMediaDataRequesterConsumer, AVQueuedSampleBufferRenderingInternal, AVQueuedSampleBufferRendering> {

	AVSampleBufferAudioRendererInternal* _audioRendererInternal;

}

@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,copy) NSString * audioOutputDeviceUniqueID; 
@property (nonatomic,copy) NSString * audioTimePitchAlgorithm; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain,readonly) OpaqueCMTimebaseRef timebase; 
@property (getter=isReadyForMoreMediaData,readonly) BOOL readyForMoreMediaData; 
+(id)sampleBufferAudioRenderer;
-(id)init;
-(void)dealloc;
-(NSError *)error;
-(long long)status;
-(void)flush;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(void)setMuted:(BOOL)arg1 ;
-(BOOL)isMuted;
-(OpaqueCMTimebaseRef)timebase;
-(void)setAudioTimePitchAlgorithm:(NSString *)arg1 ;
-(BOOL)isReadyForMoreMediaData;
-(void)enqueueSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)stopRequestingMediaData;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(NSString *)audioOutputDeviceUniqueID;
-(void)setAudioOutputDeviceUniqueID:(NSString *)arg1 ;
-(NSString *)audioTimePitchAlgorithm;
-(int)_initializeTimebase;
-(int)_installNotificationHandlers;
-(void)_uninstallNotificationHandlers;
-(void)_transitionToStatus:(long long)arg1 error:(id)arg2 ;
-(void)_transitionToFailedStatusWithOSStatus:(int)arg1 ;
-(void)copyFigSampleBufferAudioRenderer:(OpaqueFigSampleBufferAudioRenderer*)arg1 ;
-(BOOL)setRenderSynchronizer:(id)arg1 error:(id*)arg2 ;
-(void)_triggerMediaRequestCallback;
-(void)_wasFlushedAutomaticallyAtTime:(SCD_Struct_AV7)arg1 ;
-(void)flushFromSourceTime:(SCD_Struct_AV7)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

