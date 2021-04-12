/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol BWStillImageProcessorControllerDelegate;
@class BWRedEyeReductionControllerInput;

@interface BWRedEyeReductionRequest : NSObject {

	BWRedEyeReductionControllerInput* _input;
	id<BWStillImageProcessorControllerDelegate> _delegate;
	int _mode;

}

@property (nonatomic,readonly) BWRedEyeReductionControllerInput * input;                          //@synthesize input=_input - In the implementation block
@property (nonatomic,readonly) id<BWStillImageProcessorControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int mode;                                                            //@synthesize mode=_mode - In the implementation block
-(int)mode;
-(BWRedEyeReductionControllerInput *)input;
-(id<BWStillImageProcessorControllerDelegate>)delegate;
-(void)setMode:(int)arg1 ;
-(id)description;
-(id)initWithInput:(id)arg1 delegate:(id)arg2 ;
-(void)dealloc;
@end

