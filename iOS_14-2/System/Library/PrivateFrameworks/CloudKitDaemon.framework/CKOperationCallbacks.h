/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@protocol CKOperationCallbacks
@required
-(void)handleLongLivedOperationDidPersist;
-(void)handleSystemDidImposeInfo:(id)arg1;
-(void)handleRequestDidComplete:(id)arg1;
-(void)handleOperationDidCompleteWithMetrics:(id)arg1 error:(id)arg2;
-(void)handleDiscretionaryOperationShouldSuspend;
-(void)handleDiscretionaryOperationShouldStart:(BOOL)arg1 nonDiscretionary:(BOOL)arg2 error:(id)arg3;
-(void)handleDaemonOperationWillStartWithClassName:(id)arg1 isTopLevelDaemonOperation:(BOOL)arg2 replyBlock:(/*^block*/id)arg3;

@end

