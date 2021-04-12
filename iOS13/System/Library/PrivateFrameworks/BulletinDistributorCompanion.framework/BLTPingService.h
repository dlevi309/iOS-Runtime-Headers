/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@protocol BLTPingService <NSObject>
@required
-(void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 completion:(/*^block*/id)arg3;
-(void)sendBulletinSummary:(id)arg1;
-(void)subscribeToSectionID:(id)arg1 forFullBulletins:(BOOL)arg2 withAck:(BOOL)arg3 ackAllowedOnLocalConnection:(BOOL)arg4;
-(void)unsubscribeFromSectionID:(id)arg1;
-(void)subscribeWithMachServiceName:(id)arg1;

@end

