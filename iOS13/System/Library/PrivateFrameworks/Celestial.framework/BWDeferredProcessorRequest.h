/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
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
-(void)dealloc;
-(id)description;
-(id<BWDeferredProcessorControllerDelegate>)delegate;
-(BWDeferredProcessorControllerInput *)input;
-(int)err;
-(void)setErr:(int)arg1 ;
-(id)initWithInput:(id)arg1 delegate:(id)arg2 ;
@end

