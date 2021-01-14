/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/


@protocol NNMKSyncStateManagerDelegate <NSObject>
@required
-(BOOL)syncStateManagerShouldAddFavoriteSubsectionForMailboxId:(id)arg1;
-(void)syncStateManagerDidUnpair:(id)arg1;
-(void)syncStateManagerDidChangePairedDevice:(id)arg1;
-(void)syncStateManager:(id)arg1 didAcknowledgeForwardNotificationPayload:(/*^block*/id)arg2 forBulletin:(id)arg3;
-(void)syncStateManagerDidInvalidateSyncSession:(id)arg1 syncSessionIdentifier:(id)arg2;
-(void)syncStateManagerDidBeginSyncSession:(id)arg1 syncSessionType:(id)arg2 syncSessionIdentifier:(id)arg3;

@end

