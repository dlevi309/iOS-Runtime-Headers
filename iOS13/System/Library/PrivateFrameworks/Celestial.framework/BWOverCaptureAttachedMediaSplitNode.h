/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWAttachedMediaSplitNode.h>

@class BWNodeOutput;

@interface BWOverCaptureAttachedMediaSplitNode : BWAttachedMediaSplitNode {

	BWNodeOutput* _primaryFrameOutput;
	BWNodeOutput* _synchronizedSlaveFrameOutput;

}

@property (nonatomic,readonly) BWNodeOutput * primaryFrameOutput;                        //@synthesize primaryFrameOutput=_primaryFrameOutput - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * synchronizedSlaveFrameOutput;              //@synthesize synchronizedSlaveFrameOutput=_synchronizedSlaveFrameOutput - In the implementation block
+(void)initialize;
-(void)dealloc;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)_setupAttachedMediaConfigurationForInput:(id)arg1 attachedMediaKey:(id)arg2 ;
-(void)_setupAttachedMediaConfigurationForOutput:(id)arg1 attachedMediaKey:(id)arg2 ;
-(void)_updateSynchronizedSlaveFrameEnabledWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)handleIrisReferenceMovieRequest:(id)arg1 forInput:(id)arg2 ;
-(id)initWithBackPressureExtraRetainBufferCount:(int)arg1 videoStitchingEnabled:(BOOL)arg2 ;
-(BWNodeOutput *)primaryFrameOutput;
-(BWNodeOutput *)synchronizedSlaveFrameOutput;
@end

