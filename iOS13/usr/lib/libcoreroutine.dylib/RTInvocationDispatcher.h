/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface RTInvocationDispatcher : NSObject {

	BOOL _valid;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _pendingInvocations;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingInvocations;              //@synthesize pendingInvocations=_pendingInvocations - In the implementation block
@property (assign,nonatomic) BOOL valid;                                       //@synthesize valid=_valid - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithQueue:(id)arg1 ;
-(BOOL)valid;
-(void)setValid:(BOOL)arg1 ;
-(void)shutdown;
-(NSMutableArray *)pendingInvocations;
-(void)setPendingInvocations:(NSMutableArray *)arg1 ;
-(BOOL)dispatchPendingInvocations;
-(void)_enqueueBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 description:(id)arg3 ;
-(void)removeAllPendingInvocations;
-(unsigned long long)countOfPendingInvocations;
-(void)enqueueBlock:(/*^block*/id)arg1 description:(id)arg2 ;
-(void)enqueueBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 description:(id)arg3 ;
-(BOOL)invocationsPending;
@end

