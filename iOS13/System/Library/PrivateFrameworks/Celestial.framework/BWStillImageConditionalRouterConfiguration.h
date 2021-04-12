/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@interface BWStillImageConditionalRouterConfiguration : NSObject {

	unsigned _numberOfOutputs;
	/*^block*/id _shouldEmitSampleBufferDecisionProvider;
	unsigned _numberOfInputs;

}

@property (nonatomic,readonly) unsigned numberOfInputs;                            //@synthesize numberOfInputs=_numberOfInputs - In the implementation block
@property (nonatomic,readonly) unsigned numberOfOutputs;                           //@synthesize numberOfOutputs=_numberOfOutputs - In the implementation block
@property (nonatomic,copy) id shouldEmitSampleBufferDecisionProvider;              //@synthesize shouldEmitSampleBufferDecisionProvider=_shouldEmitSampleBufferDecisionProvider - In the implementation block
-(void)dealloc;
-(unsigned)numberOfInputs;
-(unsigned)numberOfOutputs;
-(id)initWithNumberOfOutputs:(unsigned)arg1 ;
-(id)shouldEmitSampleBufferDecisionProvider;
-(void)setShouldEmitSampleBufferDecisionProvider:(id)arg1 ;
@end

