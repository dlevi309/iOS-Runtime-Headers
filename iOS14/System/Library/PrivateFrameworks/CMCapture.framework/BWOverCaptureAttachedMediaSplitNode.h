/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWAttachedMediaSplitNode.h>

@class BWNodeOutput;

@interface BWOverCaptureAttachedMediaSplitNode : BWAttachedMediaSplitNode {

	BWNodeOutput* _primaryFrameOutput;
	BWNodeOutput* _synchronizedSlaveFrameOutput;

}

@property (nonatomic,readonly) BWNodeOutput * primaryFrameOutput;                        //@synthesize primaryFrameOutput=_primaryFrameOutput - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * synchronizedSlaveFrameOutput;              //@synthesize synchronizedSlaveFrameOutput=_synchronizedSlaveFrameOutput - In the implementation block
+(void)initialize;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)_handleIrisMovieRequestForInput:(id)arg1 sbuf:(opaqueCMSampleBufferRef)arg2 ;
-(BWNodeOutput *)synchronizedSlaveFrameOutput;
-(BWNodeOutput *)primaryFrameOutput;
-(void)_updateSynchronizedSlaveFrameEnabledWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)initWithBackPressureExtraRetainBufferCount:(int)arg1 ;
-(void)dealloc;
@end

