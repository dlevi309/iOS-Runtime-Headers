/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVMediaDataRequesterConsumer.h>
#import <AVFCore/AVQueuedSampleBufferRenderingInternal.h>
#import <AVFCore/AVQueuedSampleBufferRendering.h>

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
-(void)stopRequestingMediaData;
-(void)flush;
-(void)setVolume:(float)arg1 ;
-(id)init;
-(int)_initializeTimebase;
-(void)enqueueSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(int)_installNotificationHandlers;
-(void)_uninstallNotificationHandlers;
-(void)_transitionToStatus:(long long)arg1 error:(id)arg2 ;
-(void)_transitionToFailedStatusWithOSStatus:(int)arg1 ;
-(void)copyFigSampleBufferAudioRenderer:(OpaqueFigSampleBufferAudioRenderer*)arg1 ;
-(BOOL)setRenderSynchronizer:(id)arg1 error:(id*)arg2 ;
-(void)_triggerMediaRequestCallback;
-(void)_wasFlushedAutomaticallyAtTime:(SCD_Struct_AV6)arg1 ;
-(void)flushFromSourceTime:(SCD_Struct_AV6)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isReadyForMoreMediaData;
-(NSError *)error;
-(OpaqueCMTimebaseRef)timebase;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)setMuted:(BOOL)arg1 ;
-(NSString *)audioTimePitchAlgorithm;
-(NSString *)audioOutputDeviceUniqueID;
-(void)setAudioTimePitchAlgorithm:(NSString *)arg1 ;
-(void)setAudioOutputDeviceUniqueID:(NSString *)arg1 ;
-(float)volume;
-(BOOL)isMuted;
-(long long)status;
-(void)dealloc;
-(void)setSTSLabel:(id)arg1 ;
@end

