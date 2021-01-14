/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
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
-(id<DADataclassLockWatcher>)waiter;
-(id)init;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(id)description;
-(long long)dataclasses;
-(void)setWaiter:(id<DADataclassLockWatcher>)arg1 ;
-(int)waiterNum;
-(void)setDataclasses:(long long)arg1 ;
@end

