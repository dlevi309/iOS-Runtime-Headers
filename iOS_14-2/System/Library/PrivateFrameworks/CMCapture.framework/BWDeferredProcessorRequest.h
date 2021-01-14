/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@class BWDeferredProcessorControllerInput, FigWeakReference;

@interface BWDeferredProcessorRequest : NSObject {

	BWDeferredProcessorControllerInput* _input;
	FigWeakReference* _delegateStorage;
	int _err;

}

@property (assign,nonatomic) int err;                                                           //@synthesize err=_err - In the implementation block
@property (nonatomic,readonly) BWDeferredProcessorControllerInput * input;                      //@synthesize input=_input - In the implementation block
@property (nonatomic,readonly) id<BWDeferredProcessorControllerDelegate> delegate; 
-(int)err;
-(BWDeferredProcessorControllerInput *)input;
-(id<BWDeferredProcessorControllerDelegate>)delegate;
-(id)description;
-(void)setErr:(int)arg1 ;
-(id)initWithInput:(id)arg1 delegate:(id)arg2 ;
-(void)dealloc;
@end

