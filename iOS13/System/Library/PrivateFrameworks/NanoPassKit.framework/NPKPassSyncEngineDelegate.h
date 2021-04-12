/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@protocol NPKPassSyncEngineDelegate <NSObject>
@optional
-(void)passSyncEngineStateChanged:(id)arg1;
-(void)passSyncEngineEncounteredUnexpectedEvent:(id)arg1;
-(void)passSyncEngine:(id)arg1 receivedStateChangeProcessed:(id)arg2 changeAccepted:(BOOL)arg3;
-(void)passSyncEngine:(id)arg1 finishedProcessingChange:(id)arg2;

@required
-(void)passSyncEngine:(id)arg1 sendStateChange:(id)arg2;
-(void)passSyncEngine:(id)arg1 sendStateChangeProcessedWithUUID:(id)arg2 changeAccepted:(BOOL)arg3 fullPassRequired:(BOOL)arg4;
-(void)passSyncEngine:(id)arg1 sendReconciledStateUnrecognizedWithHash:(id)arg2 currentPassSyncState:(id)arg3;
-(void)passSyncEngine:(id)arg1 sendProposedReconciledState:(id)arg2;
-(void)passSyncEngine:(id)arg1 sendReconciledStateAcceptedWithHash:(id)arg2;
-(void)passSyncEngine:(id)arg1 requestsAddPassData:(id)arg2 forSyncStateItem:(id)arg3 completion:(/*^block*/id)arg4;
-(void)passSyncEngine:(id)arg1 requestsUpdatePassData:(id)arg2 forSyncStateItem:(id)arg3 baseManifestHashForPartialUpdate:(id)arg4 remoteAssetsForPartialUpdate:(id)arg5 completion:(/*^block*/id)arg6;
-(void)passSyncEngine:(id)arg1 requestsRemovePassWithUniqueID:(id)arg2 completion:(/*^block*/id)arg3;

@end

