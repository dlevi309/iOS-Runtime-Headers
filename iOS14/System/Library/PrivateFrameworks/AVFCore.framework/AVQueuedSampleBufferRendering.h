/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@protocol AVQueuedSampleBufferRendering <NSObject>
@property (retain,readonly) OpaqueCMTimebaseRef timebase; 
@property (getter=isReadyForMoreMediaData,readonly) BOOL readyForMoreMediaData; 
@required
-(void)stopRequestingMediaData;
-(void)flush;
-(void)enqueueSampleBuffer:(opaqueCMSampleBufferRef)arg1;
-(BOOL)isReadyForMoreMediaData;
-(OpaqueCMTimebaseRef)timebase;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2;

@end

