/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_setExecuting:(BOOL)arg1 ;
-(BOOL)_finishIfCancelled;
-(void)completedWithResult:(id)arg1 error:(id)arg2 ;
-(void)_setFinished:(BOOL)arg1 ;
-(BOOL)finishIfCancelled;
-(id<FPCancellable>)remoteOperation;
-(void)setRemoteOperation:(id<FPCancellable>)arg1 ;
-(id)init;
-(void)operationDidProgressWithInfo:(id)arg1 error:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)start;
-(BOOL)isFinished;
-(id)proxifiedDescription;
-(void)setCancellationHandler:(id)arg1 ;
-(id)description;
-(void)resetRemoteOperation;
-(id)operationDescription;
-(void)_setRemoteCancellationHandler:(id)arg1 ;
-(id)finishedBlock;
-(void)setFinishedBlock:(id)arg1 ;
-(BOOL)isExecuting;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)cancel;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)dealloc;
@end

