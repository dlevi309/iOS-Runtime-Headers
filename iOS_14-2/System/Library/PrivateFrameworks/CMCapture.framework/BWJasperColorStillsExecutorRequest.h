/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol BWJasperColorStillsExecutorControllerDelegate;
@class BWJasperColorStillsExecutorInput;

@interface BWJasperColorStillsExecutorRequest : NSObject {

	int _err;
	BWJasperColorStillsExecutorInput* _input;
	id<BWJasperColorStillsExecutorControllerDelegate> _delegate;

}

@property (assign,nonatomic) int err;                                                                   //@synthesize err=_err - In the implementation block
@property (nonatomic,readonly) BWJasperColorStillsExecutorInput * input;                                //@synthesize input=_input - In the implementation block
@property (nonatomic,readonly) id<BWJasperColorStillsExecutorControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(int)err;
-(BWJasperColorStillsExecutorInput *)input;
-(id<BWJasperColorStillsExecutorControllerDelegate>)delegate;
-(id)description;
-(void)setErr:(int)arg1 ;
-(id)initWithInput:(id)arg1 delegate:(id)arg2 ;
-(void)dealloc;
@end

