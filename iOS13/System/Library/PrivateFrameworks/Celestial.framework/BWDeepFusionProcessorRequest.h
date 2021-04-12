/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@protocol BWDeepFusionProcessorControllerDelegate;
@class BWDeepFusionProcessorInput, DeepFusionOutput;

@interface BWDeepFusionProcessorRequest : NSObject {

	BWDeepFusionProcessorInput* _input;
	DeepFusionOutput* _output;
	id<BWDeepFusionProcessorControllerDelegate> _delegate;
	int _err;

}

@property (assign,nonatomic) int err;                                                             //@synthesize err=_err - In the implementation block
@property (nonatomic,readonly) BWDeepFusionProcessorInput * input;                                //@synthesize input=_input - In the implementation block
@property (nonatomic,readonly) DeepFusionOutput * output;                                         //@synthesize output=_output - In the implementation block
@property (nonatomic,readonly) id<BWDeepFusionProcessorControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id)description;
-(id<BWDeepFusionProcessorControllerDelegate>)delegate;
-(BWDeepFusionProcessorInput *)input;
-(DeepFusionOutput *)output;
-(BOOL)receivedAllInferences;
-(id)initWithInput:(id)arg1 output:(id)arg2 delegate:(id)arg3 ;
-(BOOL)receivedAllBuffers;
-(int)err;
-(void)setErr:(int)arg1 ;
@end

