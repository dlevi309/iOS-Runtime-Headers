/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
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
-(void)dealloc;
-(id)description;
-(id<BWStillImageProcessorControllerDelegate>)delegate;
-(void)setMode:(int)arg1 ;
-(BWRedEyeReductionControllerInput *)input;
-(int)mode;
-(id)initWithInput:(id)arg1 delegate:(id)arg2 ;
@end

