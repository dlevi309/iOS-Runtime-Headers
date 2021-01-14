/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@protocol BLTBulletinDistributorSubscriberDeviceDelegate <NSObject>
@required
-(void)getWillNanoPresentNotificationForSectionID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 completion:(/*^block*/id)arg3;
-(void)sendBulletinSummary:(id)arg1;
-(BOOL)isLocallyConnectedToRemote;

@end

