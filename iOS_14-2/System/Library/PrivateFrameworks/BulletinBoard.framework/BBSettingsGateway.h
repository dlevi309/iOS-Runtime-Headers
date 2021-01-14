/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/

#import <libobjc.A.dylib/BBSettingsGatewayClientInterface.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSString;

@interface BBSettingsGateway : NSObject <BBSettingsGatewayClientInterface> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)serverInterface;
+(id)clientInterface;
-(id)initWithQueue:(id)arg1 ;
-(void)setSectionInfo:(id)arg1 forSectionID:(id)arg2 ;
-(long long)effectiveGlobalSpokenNotificationSetting;
-(id)init;
-(void)setSectionInfo:(id)arg1 forSectionID:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)getSectionInfoForSectionIDs:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)getSectionInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)getEffectiveSectionInfoForSectionID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)getSectionInfoForActiveSectionsWithCompletion:(/*^block*/id)arg1 ;
-(id)allSectionInfo;
-(id)effectiveSectionInfoForSectionID:(id)arg1 ;
-(void)setEffectiveGlobalContentPreviewsSetting:(long long)arg1 ;
-(id)allEffectiveSectionInfo;
-(void)updateSectionInfoForSectionID:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)sectionInfoForSectionIDs:(id)arg1 ;
-(id)sectionInfoForSectionID:(id)arg1 ;
-(void)getSectionInfoForSectionID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)effectiveSectionInfoForSectionIDs:(id)arg1 ;
-(void)invalidate;
-(id)allSectionIDs;
-(long long)effectiveGlobalContentPreviewsSetting;
-(void)getEffectiveGlobalContentPreviewsSettingWithCompletion:(/*^block*/id)arg1 ;
-(void)setEffectiveGlobalSpokenNotificationSetting:(long long)arg1 ;
-(void)getEffectiveGlobalSpokenNotificationSettingWithCompletion:(/*^block*/id)arg1 ;
-(void)getEffectiveSectionInfoForSectionIDs:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)activeSectionInfo;
@end

