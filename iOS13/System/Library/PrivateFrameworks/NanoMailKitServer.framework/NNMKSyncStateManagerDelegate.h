/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/


@protocol NNMKSyncStateManagerDelegate <NSObject>
@required
-(void)syncStateManager:(id)arg1 didAcknowledgeForwardNotificationPayload:(/*^block*/id)arg2 forBulletin:(id)arg3;
-(void)syncStateManagerDidUnpair:(id)arg1;
-(void)syncStateManagerDidChangePairedDevice:(id)arg1;
-(void)syncStateManagerDidBeginSyncSession:(id)arg1 syncSessionType:(id)arg2 syncSessionIdentifier:(id)arg3;
-(void)syncStateManagerDidInvalidateSyncSession:(id)arg1 syncSessionIdentifier:(id)arg2;
-(BOOL)syncStateManagerShouldAddFavoriteSubsectionForMailboxId:(id)arg1;

@end

