/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol IBPDeepFusionOutput, BWDeepFusionProcessorControllerDelegate;
@class BWDeepFusionProcessorInput;

@interface BWDeepFusionProcessorRequest : NSObject {

	BWDeepFusionProcessorInput* _input;
	id<IBPDeepFusionOutput> _output;
	id<BWDeepFusionProcessorControllerDelegate> _delegate;
	int _err;

}

@property (assign,nonatomic) int err;                                                             //@synthesize err=_err - In the implementation block
@property (nonatomic,readonly) BWDeepFusionProcessorInput * input;                                //@synthesize input=_input - In the implementation block
@property (nonatomic,readonly) id<IBPDeepFusionOutput> output;                                    //@synthesize output=_output - In the implementation block
@property (nonatomic,readonly) id<BWDeepFusionProcessorControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(int)err;
-(BWDeepFusionProcessorInput *)input;
-(id<BWDeepFusionProcessorControllerDelegate>)delegate;
-(id<IBPDeepFusionOutput>)output;
-(BOOL)receivedAllBuffers;
-(id)description;
-(void)setErr:(int)arg1 ;
-(BOOL)receivedAllInferences;
-(id)initWithInput:(id)arg1 output:(id)arg2 delegate:(id)arg3 ;
-(void)dealloc;
@end

