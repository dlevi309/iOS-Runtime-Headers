/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

