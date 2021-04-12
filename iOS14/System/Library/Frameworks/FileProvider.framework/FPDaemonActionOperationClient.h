/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@protocol FPDaemonActionOperationClient <FPOperationClient>
@required
-(void)remoteOperationCreatedRoot:(id)arg1 resultingItem:(id)arg2 completion:(/*^block*/id)arg3;
-(void)remoteOperationCompletedRoot:(id)arg1 resultingItem:(id)arg2 error:(id)arg3 completion:(/*^block*/id)arg4;
-(void)remoteOperationProgressesAreReady;
-(void)remoteOperationFinishedSendingPastUpdates;

@end

