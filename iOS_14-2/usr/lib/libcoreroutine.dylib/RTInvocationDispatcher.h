/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithQueue:(id)arg1 ;
-(void)setValid:(BOOL)arg1 ;
-(void)shutdown;
-(void)enqueueBlock:(/*^block*/id)arg1 description:(id)arg2 ;
-(id)init;
-(void)_enqueueBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 description:(id)arg3 ;
-(BOOL)invocationsPending;
-(unsigned long long)countOfPendingInvocations;
-(void)removeAllPendingInvocations;
-(NSMutableArray *)pendingInvocations;
-(BOOL)dispatchPendingInvocations;
-(void)enqueueBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 description:(id)arg3 ;
-(BOOL)valid;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setPendingInvocations:(NSMutableArray *)arg1 ;
@end

