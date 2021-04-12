/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id)initWithQueue:(id)arg1 ;
-(id)allSectionInfo;
-(id)sectionInfoForSectionID:(id)arg1 ;
-(void)getSectionInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)getSectionInfoForActiveSectionsWithCompletion:(/*^block*/id)arg1 ;
-(void)getSectionInfoForSectionIDs:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setSectionInfo:(id)arg1 forSectionID:(id)arg2 ;
-(void)setSectionInfo:(id)arg1 forSectionID:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)allEffectiveSectionInfo;
-(id)sectionInfoForSectionIDs:(id)arg1 ;
-(id)effectiveSectionInfoForSectionID:(id)arg1 ;
-(id)effectiveSectionInfoForSectionIDs:(id)arg1 ;
-(void)getEffectiveSectionInfoForSectionIDs:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)getSectionInfoForSectionID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)getEffectiveSectionInfoForSectionID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)activeSectionInfo;
-(id)allSectionIDs;
-(void)updateSectionInfoForSectionID:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setEffectiveGlobalContentPreviewsSetting:(long long)arg1 ;
-(long long)effectiveGlobalContentPreviewsSetting;
-(void)getEffectiveGlobalContentPreviewsSettingWithCompletion:(/*^block*/id)arg1 ;
-(void)setEffectiveGlobalSpokenNotificationSetting:(long long)arg1 ;
-(long long)effectiveGlobalSpokenNotificationSetting;
-(void)getEffectiveGlobalSpokenNotificationSettingWithCompletion:(/*^block*/id)arg1 ;
@end

