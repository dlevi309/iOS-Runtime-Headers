/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@protocol OS_dispatch_queue;
@class NSObject, _PASLock;

@interface ATXBackgroundSaver : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _block;
	_PASLock* _lock;

}
-(id)init;
-(void)dealloc;
-(id)initWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)scheduleSave;
-(void)scheduleSaveImmediately;
-(void)_cancelSaveTimerWithLockWitness:(id)arg1 ;
-(void)_cancelSaveTimer;
@end

