/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@protocol BWStillImageProcessorControllerDelegate;
@class BWStillImageOverCaptureProcessorInput;

@interface BWStillImageOverCaptureProcessorRequest : NSObject {

	BWStillImageOverCaptureProcessorInput* _input;
	id<BWStillImageProcessorControllerDelegate> _delegate;
	int _err;

}

@property (assign,nonatomic) int err;                                                             //@synthesize err=_err - In the implementation block
@property (nonatomic,readonly) BWStillImageOverCaptureProcessorInput * input;                     //@synthesize input=_input - In the implementation block
@property (nonatomic,readonly) id<BWStillImageProcessorControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id)description;
-(id<BWStillImageProcessorControllerDelegate>)delegate;
-(BWStillImageOverCaptureProcessorInput *)input;
-(BOOL)receivedAllBuffers;
-(int)err;
-(void)setErr:(int)arg1 ;
-(id)initWithInput:(id)arg1 delegate:(id)arg2 ;
@end

