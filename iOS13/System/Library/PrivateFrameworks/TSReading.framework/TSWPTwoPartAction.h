/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@interface TSWPTwoPartAction : NSObject {

	/*^block*/id _startAction;
	/*^block*/id _cancelAction;
	/*^block*/id _finishAction;
	BOOL _performImmediately;

}

@property (assign) BOOL performImmediately;              //@synthesize performImmediately=_performImmediately - In the implementation block
+(id)actionWithStartAction:(/*^block*/id)arg1 cancelAction:(/*^block*/id)arg2 finishAction:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)cancel;
-(void)setPerformImmediately:(BOOL)arg1 ;
-(id)initWithStartAction:(/*^block*/id)arg1 cancelAction:(/*^block*/id)arg2 finishAction:(/*^block*/id)arg3 ;
-(void)performStartAction;
-(void)performFinishAction;
-(BOOL)performImmediately;
@end

