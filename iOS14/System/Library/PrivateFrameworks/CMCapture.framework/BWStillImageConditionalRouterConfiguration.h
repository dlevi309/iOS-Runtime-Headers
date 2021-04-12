/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@interface BWStillImageConditionalRouterConfiguration : NSObject {

	unsigned _numberOfOutputs;
	/*^block*/id _shouldEmitSampleBufferDecisionProvider;
	unsigned _numberOfInputs;

}

@property (nonatomic,readonly) unsigned numberOfInputs;                            //@synthesize numberOfInputs=_numberOfInputs - In the implementation block
@property (nonatomic,readonly) unsigned numberOfOutputs;                           //@synthesize numberOfOutputs=_numberOfOutputs - In the implementation block
@property (nonatomic,copy) id shouldEmitSampleBufferDecisionProvider;              //@synthesize shouldEmitSampleBufferDecisionProvider=_shouldEmitSampleBufferDecisionProvider - In the implementation block
-(id)initWithNumberOfOutputs:(unsigned)arg1 ;
-(id)shouldEmitSampleBufferDecisionProvider;
-(void)setShouldEmitSampleBufferDecisionProvider:(id)arg1 ;
-(unsigned)numberOfInputs;
-(unsigned)numberOfOutputs;
-(void)dealloc;
@end

