/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@protocol BLTSectionInfoListDelegate <NSObject>
@required
-(BOOL)sectionInfoList:(id)arg1 override:(id)arg2 shouldApplyToSectionInfoForSectionID:(id)arg3;
-(BOOL)sectionInfoListSectionIDHadDisplayedCriticalBulletins:(id)arg1;
-(void)sectionInfoList:(id)arg1 receivedUpdatedSectionInfoForSectionID:(id)arg2 transaction:(id)arg3;
-(void)sectionInfoList:(id)arg1 makeAuthorizationPermanentForSectionID:(id)arg2;
-(void)sectionInfoList:(id)arg1 receivedRemoveSectionWithSectionID:(id)arg2 transaction:(id)arg3;

@end

