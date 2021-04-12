/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/


@protocol BBSettingsGatewayServerInterface <NSObject>
@required
-(void)getSectionInfoWithHandler:(/*^block*/id)arg1;
-(void)getSectionInfoForActiveSectionsWithHandler:(/*^block*/id)arg1;
-(void)getSectionInfoForSectionIDs:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)setSectionInfo:(id)arg1 forSectionID:(id)arg2 withHandler:(/*^block*/id)arg3;
-(void)getEffectiveGlobalContentPreviewsSettingWithHandler:(/*^block*/id)arg1;
-(void)setEffectiveGlobalContentPreviewsSetting:(long long)arg1 withHandler:(/*^block*/id)arg2;
-(void)getEffectiveGlobalSpokenNotificationSettingWithHandler:(/*^block*/id)arg1;
-(void)setEffectiveGlobalSpokenNotificationSetting:(long long)arg1 withHandler:(/*^block*/id)arg2;
-(void)getEffectiveSectionInfoWithHandler:(/*^block*/id)arg1;
-(void)getSectionInfoForSectionID:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getEffectiveSectionInfoForSectionID:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getEffectiveSectionInfoForSectionIDs:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)setSectionInfo:(id)arg1 forSectionID:(id)arg2;
-(void)getSectionIDsWithHandler:(/*^block*/id)arg1;

@end

