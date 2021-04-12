/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@interface IKRunLoopSourceRecord : NSObject {

	/*^block*/id _evaluateBlock;
	/*^block*/id _completionBlock;

}

@property (nonatomic,copy) id evaluateBlock;                //@synthesize evaluateBlock=_evaluateBlock - In the implementation block
@property (nonatomic,copy) id completionBlock;              //@synthesize completionBlock=_completionBlock - In the implementation block
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(id)initWithEvaluateBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)evaluateBlock;
-(void)setEvaluateBlock:(id)arg1 ;
@end

