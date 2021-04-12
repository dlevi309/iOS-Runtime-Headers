/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@protocol BLTSectionInfoListDelegate <NSObject>
@required
-(BOOL)sectionInfoList:(id)arg1 override:(id)arg2 shouldApplyToSectionInfoForSectionID:(id)arg3;
-(BOOL)sectionInfoListSectionIDHadDisplayedCriticalBulletins:(id)arg1;
-(void)sectionInfoList:(id)arg1 receivedUpdatedSectionInfoForSectionID:(id)arg2;
-(void)sectionInfoList:(id)arg1 receivedRemoveSectionWithSectionID:(id)arg2;

@end

