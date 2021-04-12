/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@protocol BLTPingSubscribing <NSObject>
@required
-(id)sectionIDs;
-(void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2 ack:(/*^block*/id)arg3;
-(void)pingWithBulletin:(id)arg1 ack:(/*^block*/id)arg2;
-(void)pingSubscriberDidLoad;
-(void)pingWithBulletin:(id)arg1;
-(id)sectionIDsForBulletins;
-(void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2;
-(id)subscriptionInfos;

@end

