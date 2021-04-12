/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/CDDataAccess
*/


@protocol DADataclassLockWatcher;
@interface DAWaiterWrapper : NSObject {

	id<DADataclassLockWatcher> _waiter;
	long long _dataclasses;
	/*^block*/id _completionHandler;
	int _waiterNum;

}

@property (nonatomic,retain) id<DADataclassLockWatcher> waiter;              //@synthesize waiter=_waiter - In the implementation block
@property (nonatomic,copy) id completionHandler;                             //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) long long dataclasses;                          //@synthesize dataclasses=_dataclasses - In the implementation block
@property (nonatomic,readonly) int waiterNum;                                //@synthesize waiterNum=_waiterNum - In the implementation block
-(id)init;
-(id)description;
-(id<DADataclassLockWatcher>)waiter;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setWaiter:(id<DADataclassLockWatcher>)arg1 ;
-(long long)dataclasses;
-(void)setDataclasses:(long long)arg1 ;
-(int)waiterNum;
@end

