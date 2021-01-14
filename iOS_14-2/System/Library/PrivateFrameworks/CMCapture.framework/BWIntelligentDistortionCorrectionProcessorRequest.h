/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol BWStillImageProcessorControllerDelegate;
@class BWIntelligentDistortionCorrectionProcessorInput;

@interface BWIntelligentDistortionCorrectionProcessorRequest : NSObject {

	BWIntelligentDistortionCorrectionProcessorInput* _input;
	id<BWStillImageProcessorControllerDelegate> _delegate;
	int _err;

}

@property (nonatomic,readonly) BWIntelligentDistortionCorrectionProcessorInput * input;              //@synthesize input=_input - In the implementation block
@property (nonatomic,readonly) id<BWStillImageProcessorControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int err;                                                                //@synthesize err=_err - In the implementation block
-(int)err;
-(BWIntelligentDistortionCorrectionProcessorInput *)input;
-(id<BWStillImageProcessorControllerDelegate>)delegate;
-(id)description;
-(void)setErr:(int)arg1 ;
-(id)initWithInput:(id)arg1 delegate:(id)arg2 ;
-(void)dealloc;
@end

