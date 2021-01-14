/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/


@class TPSOperationQueue;

@interface TPSOperationQueueCountObserver : NSObject {

	/*^block*/id _completionBlock;
	unsigned long long _lastOperationCount;
	TPSOperationQueue* _operationQueue;

}

@property (assign,nonatomic) unsigned long long lastOperationCount;                  //@synthesize lastOperationCount=_lastOperationCount - In the implementation block
@property (assign,nonatomic,__weak) TPSOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,copy) id completionBlock;                                       //@synthesize completionBlock=_completionBlock - In the implementation block
-(id)initWithQueue:(id)arg1 ;
-(void)setOperationQueue:(TPSOperationQueue *)arg1 ;
-(TPSOperationQueue *)operationQueue;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(unsigned long long)lastOperationCount;
-(void)setLastOperationCount:(unsigned long long)arg1 ;
-(void)dealloc;
@end

