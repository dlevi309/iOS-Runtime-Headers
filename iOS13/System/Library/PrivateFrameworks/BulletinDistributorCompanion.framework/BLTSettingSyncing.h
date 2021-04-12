/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@protocol BLTSettingSyncing <NSObject>
@required
-(void)removeSectionWithSectionID:(id)arg1;
-(void)setSectionInfo:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setSectionSubtypeParametersIcon:(id)arg1 forSectionID:(id)arg2 forSubtypeID:(long long)arg3;
-(void)setNotificationsLevel:(unsigned long long)arg1 sectionID:(id)arg2 mirror:(BOOL)arg3;
-(void)setNotificationsGrouping:(int)arg1 sectionID:(id)arg2;
-(void)setNotificationsSoundEnabled:(int)arg1 sectionID:(id)arg2;
-(void)setNotificationsCriticalAlertEnabled:(int)arg1 sectionID:(id)arg2;

@end

