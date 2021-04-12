/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWStillImageProcessorInput.h>

@protocol BWStillImageOverCaptureProcessorInputDelegate;
@interface BWStillImageOverCaptureProcessorInput : BWStillImageProcessorInput {

	id<BWStillImageOverCaptureProcessorInputDelegate> _delegate;
	opaqueCMSampleBufferRef _wideFieldOfViewFrame;
	opaqueCMSampleBufferRef _narrowFieldOfViewFrame;
	int _overCaptureMode;
	BOOL _receivedAllFrames;
	int _receivedFrames;

}

@property (nonatomic,retain) id<BWStillImageOverCaptureProcessorInputDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) opaqueCMSampleBufferRef wideFieldOfViewFrame;                          //@synthesize wideFieldOfViewFrame=_wideFieldOfViewFrame - In the implementation block
@property (nonatomic,readonly) opaqueCMSampleBufferRef narrowFieldOfViewFrame;                        //@synthesize narrowFieldOfViewFrame=_narrowFieldOfViewFrame - In the implementation block
@property (nonatomic,readonly) int receivedFrames;                                                    //@synthesize receivedFrames=_receivedFrames - In the implementation block
@property (nonatomic,readonly) BOOL receivedAllFrames;                                                //@synthesize receivedAllFrames=_receivedAllFrames - In the implementation block
@property (nonatomic,readonly) int overCaptureMode;                                                   //@synthesize overCaptureMode=_overCaptureMode - In the implementation block
-(void)dealloc;
-(id<BWStillImageOverCaptureProcessorInputDelegate>)delegate;
-(void)setDelegate:(id<BWStillImageOverCaptureProcessorInputDelegate>)arg1 ;
-(int)receivedFrames;
-(void)addFrame:(opaqueCMSampleBufferRef)arg1 ;
-(int)overCaptureMode;
-(BOOL)receivedAllFrames;
-(id)initWithSettings:(id)arg1 captureSettings:(id)arg2 ;
-(opaqueCMSampleBufferRef)wideFieldOfViewFrame;
-(opaqueCMSampleBufferRef)narrowFieldOfViewFrame;
@end

