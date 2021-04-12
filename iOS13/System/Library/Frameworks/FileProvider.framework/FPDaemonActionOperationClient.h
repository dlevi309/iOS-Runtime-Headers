/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@protocol FPDaemonActionOperationClient <FPOperationClient>
@required
-(void)remoteOperationCreatedRoot:(id)arg1 resultingItem:(id)arg2 completion:(/*^block*/id)arg3;
-(void)remoteOperationCompletedRoot:(id)arg1 resultingItem:(id)arg2 error:(id)arg3 completion:(/*^block*/id)arg4;
-(void)remoteOperationProgressesAreReady;
-(void)remoteOperationFinishedSendingPastUpdates;

@end

