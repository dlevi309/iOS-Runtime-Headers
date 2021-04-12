/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@protocol AVQueuedSampleBufferRendering <NSObject>
@property (retain,readonly) OpaqueCMTimebaseRef timebase; 
@property (getter=isReadyForMoreMediaData,readonly) BOOL readyForMoreMediaData; 
@required
-(void)flush;
-(OpaqueCMTimebaseRef)timebase;
-(BOOL)isReadyForMoreMediaData;
-(void)enqueueSampleBuffer:(opaqueCMSampleBufferRef)arg1;
-(void)stopRequestingMediaData;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2;

@end

