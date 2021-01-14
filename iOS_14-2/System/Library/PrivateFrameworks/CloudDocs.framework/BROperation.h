/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/

#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/BROperationClient.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface BROperation : NSOperation <BROperationClient> {

	id _remoteOperation;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned char _uuid[16];
	id _executionTransation;
	BOOL _finished;
	BOOL _waitForRemoteToBeCancelled;
	BOOL _nonDiscretionary;

}

@property (getter=isExecuting,readonly) BOOL executing; 
@property (getter=isFinished,readonly) BOOL finished;                                   //@synthesize finished=_finished - In the implementation block
@property (nonatomic,retain) NSObject*<BRCancellable> remoteOperation;                  //@synthesize remoteOperation=_remoteOperation - In the implementation block
@property (assign,nonatomic) BOOL waitForRemoteToBeCancelled;                           //@synthesize waitForRemoteToBeCancelled=_waitForRemoteToBeCancelled - In the implementation block
@property (assign,nonatomic) BOOL nonDiscretionary;                                     //@synthesize nonDiscretionary=_nonDiscretionary - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setExecuting:(BOOL)arg1 ;
-(BOOL)_finishIfCancelled;
-(void)_setRemoteOperation:(id)arg1 ;
-(BOOL)waitForRemoteToBeCancelled;
-(void)completedWithResult:(id)arg1 error:(id)arg2 ;
-(void)_setFinished:(BOOL)arg1 ;
-(oneway void)setRemoteOperationProxy:(id)arg1 userInfo:(id)arg2 ;
-(oneway void)progressCallbackWithTopic:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)finishIfCancelled;
-(NSObject*<BRCancellable>)remoteOperation;
-(void)setRemoteOperation:(NSObject*<BRCancellable>)arg1 ;
-(void)setWaitForRemoteToBeCancelled:(BOOL)arg1 ;
-(BOOL)nonDiscretionary;
-(void)setNonDiscretionary:(BOOL)arg1 ;
-(id)init;
-(void)start;
-(BOOL)isFinished;
-(NSString *)description;
-(BOOL)isExecuting;
-(id)remoteObject;
-(oneway void)invalidate;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)cancel;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)dealloc;
@end

