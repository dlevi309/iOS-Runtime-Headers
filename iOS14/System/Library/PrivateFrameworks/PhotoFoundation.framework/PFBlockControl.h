/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/

#import <PhotoFoundation/PhotoFoundation-Structs.h>
#import <libobjc.A.dylib/PFBlockControlCanceling.h>
#import <libobjc.A.dylib/PFBlockControlQueueing.h>
#import <libobjc.A.dylib/PFBlockControlDirectExecution.h>

@protocol OS_dispatch_group;
@class PFDispatchQueue, NSObject, NSString;

@interface PFBlockControl : NSObject <PFBlockControlCanceling, PFBlockControlQueueing, PFBlockControlDirectExecution> {

	PFDispatchQueue* _queue;
	/*^block*/id _block;
	NSObject*<OS_dispatch_group> _workGroup;
	AQ _status;
	BOOL _executeOnDealloc;

}

@property (assign) BOOL executeOnDealloc;                           //@synthesize executeOnDealloc=_executeOnDealloc - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)enqueue;
-(id)init;
-(BOOL)dequeue;
-(void)invoke:(unsigned long long)arg1 ;
-(void)notifyOnQueue:(id)arg1 whenFinished:(/*^block*/id)arg2 ;
-(void)waitForBlock;
-(BOOL)blockHasStarted;
-(BOOL)blockHasFinished;
-(BOOL)blockWasCanceled;
-(BOOL)enqueueWithDelay:(unsigned long long)arg1 ;
-(BOOL)groupNotify:(id)arg1 ;
-(BOOL)tryCancelBlock;
-(unsigned long long)_shouldEnqueue;
-(BOOL)executeOnDealloc;
-(void)setExecuteOnDealloc:(BOOL)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(NSString *)description;
-(void)_execute;
-(BOOL)cancelBlock;
-(BOOL)executeBlock;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

