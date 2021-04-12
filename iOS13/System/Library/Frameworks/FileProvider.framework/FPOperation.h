/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/FPOperationClient.h>

@protocol FPCancellable, OS_dispatch_queue;
@class NSObject;

@interface FPOperation : NSOperation <FPOperationClient> {

	id<FPCancellable> _remoteOperation;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned char _uuid[16];
	id _executionTransaction;
	BOOL _finished;
	/*^block*/id _finishedBlock;

}

@property (getter=isExecuting,readonly) BOOL executing; 
@property (getter=isFinished,readonly) BOOL finished;                                 //@synthesize finished=_finished - In the implementation block
@property (nonatomic,retain) id<FPCancellable> remoteOperation;                       //@synthesize remoteOperation=_remoteOperation - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize queue=_queue - In the implementation block
@property (copy) id finishedBlock;                                                    //@synthesize finishedBlock=_finishedBlock - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(void)cancel;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(id)operationDescription;
-(void)setCancellationHandler:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)_setExecuting:(BOOL)arg1 ;
-(BOOL)_finishIfCancelled;
-(void)completedWithResult:(id)arg1 error:(id)arg2 ;
-(void)_setFinished:(BOOL)arg1 ;
-(BOOL)finishIfCancelled;
-(id<FPCancellable>)remoteOperation;
-(void)setRemoteOperation:(id<FPCancellable>)arg1 ;
-(id)finishedBlock;
-(void)setFinishedBlock:(id)arg1 ;
-(void)operationDidProgressWithInfo:(id)arg1 error:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)proxifiedDescription;
-(void)resetRemoteOperation;
-(void)_setRemoteCancellationHandler:(id)arg1 ;
@end

