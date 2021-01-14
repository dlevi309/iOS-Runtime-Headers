/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/


@protocol BBSettingsGatewayServerInterface <NSObject>
@required
-(void)getSectionInfoForActiveSectionsWithHandler:(/*^block*/id)arg1;
-(void)getSectionInfoForSectionIDs:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getSectionInfoWithHandler:(/*^block*/id)arg1;
-(void)setSectionInfo:(id)arg1 forSectionID:(id)arg2;
-(void)setEffectiveGlobalContentPreviewsSetting:(long long)arg1 withHandler:(/*^block*/id)arg2;
-(void)getEffectiveGlobalContentPreviewsSettingWithHandler:(/*^block*/id)arg1;
-(void)getEffectiveGlobalSpokenNotificationSettingWithHandler:(/*^block*/id)arg1;
-(void)setSectionInfo:(id)arg1 forSectionID:(id)arg2 withHandler:(/*^block*/id)arg3;
-(void)getEffectiveSectionInfoForSectionID:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getSectionInfoForSectionID:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getSectionIDsWithHandler:(/*^block*/id)arg1;
-(void)getEffectiveSectionInfoForSectionIDs:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getEffectiveSectionInfoWithHandler:(/*^block*/id)arg1;
-(void)setEffectiveGlobalSpokenNotificationSetting:(long long)arg1 withHandler:(/*^block*/id)arg2;

@end

