/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
*/


@protocol CCAsyncQueueDelegate;
@class CCVegaWorkerClient, NSMutableArray, NSObject;

@interface CCAsyncQueue : NSObject {

	CCVegaWorkerClient* _workerClient;
	unsigned long long _nextActionID;
	NSMutableArray* _queue;
	BOOL _isProcessing;
	NSObject*<CCAsyncQueueDelegate> _delegate;

}

@property (assign,nonatomic,__weak) NSObject*<CCAsyncQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(unsigned long long)enqueueOperation:(id)arg1 ;
-(NSObject*<CCAsyncQueueDelegate>)delegate;
-(void)setDelegate:(NSObject*<CCAsyncQueueDelegate>)arg1 ;
-(void)startProcessOperations;
-(void)processOperations;
-(unsigned long long)enqueueOperationWithBlock:(/*^block*/id)arg1 ;
-(void)waitForPendingOperations;
-(id)initWithWorkerClient:(id)arg1 ;
-(void)waitForOperation:(unsigned long long)arg1 ;
-(void)keepAliveUntilCurrentOperationIsComplete;
@end

