/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@protocol BLTPingSubscribing <NSObject>
@required
-(id)subscriptionInfos;
-(id)sectionIDs;
-(void)pingWithBulletin:(id)arg1 ack:(/*^block*/id)arg2;
-(void)pingWithBulletin:(id)arg1;
-(void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2 ack:(/*^block*/id)arg3;
-(void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2;
-(void)pingSubscriberDidLoad;
-(id)sectionIDsForBulletins;

@end

