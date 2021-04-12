/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@protocol BLTCompanionServer <NSObject>
@required
-(void)handleAction:(id)arg1;
-(void)removeBulletinWithPublisherBulletinID:(id)arg1 recordID:(id)arg2 sectionID:(id)arg3;
-(void)handleDidPlayLightsAndSirens:(BOOL)arg1 forBulletin:(id)arg2 inPhoneSection:(id)arg3 transmissionDate:(id)arg4 receptionDate:(id)arg5 replyToken:(id)arg6;
-(BOOL)shouldSuppressLightsAndSirensNow;
-(void)willSendLightsAndSirensWithPublisherBulletinID:(id)arg1 recordID:(id)arg2 inPhoneSection:(id)arg3 systemApp:(BOOL)arg4 completion:(/*^block*/id)arg5;

@end

