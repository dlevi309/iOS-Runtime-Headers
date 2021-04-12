/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STShowMoreUsageGroupSpecifierProvider.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, BBSettingsGateway, NSObject;

@interface STNotificationsUsageGroupSpecifierProvider : STShowMoreUsageGroupSpecifierProvider {

	NSMutableDictionary* _notificationSectionByBundleID;
	BBSettingsGateway* _notificationSettingsGateway;
	NSObject*<OS_dispatch_queue> _notificationSettingsGatewayQueue;

}

@property (nonatomic,readonly) NSMutableDictionary * notificationSectionByBundleID;                        //@synthesize notificationSectionByBundleID=_notificationSectionByBundleID - In the implementation block
@property (nonatomic,readonly) BBSettingsGateway * notificationSettingsGateway;                            //@synthesize notificationSettingsGateway=_notificationSettingsGateway - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> notificationSettingsGatewayQueue;              //@synthesize notificationSettingsGatewayQueue=_notificationSettingsGatewayQueue - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(void)setCoordinator:(id)arg1 ;
-(id)_usageDetailsCoordinator:(id)arg1 ;
-(void)_specifierIdentifierDidChange:(id)arg1 ;
-(void)_selectedUsageReportDidChangeFrom:(id)arg1 to:(id)arg2 ;
-(id)newSpecifierWithUsageItem:(id)arg1 ;
-(void)updateSpecifier:(id)arg1 usageItem:(id)arg2 ;
-(NSMutableDictionary *)notificationSectionByBundleID;
-(BBSettingsGateway *)notificationSettingsGateway;
-(id)getNotificationsInfo:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)notificationSettingsGatewayQueue;
@end

