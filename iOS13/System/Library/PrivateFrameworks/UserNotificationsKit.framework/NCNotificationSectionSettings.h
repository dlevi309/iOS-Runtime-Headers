/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
*/

#import <UserNotificationsKit/UserNotificationsKit-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, NSDictionary, NSSet, UIImage;

@interface NCNotificationSectionSettings : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {

	NSString* _sectionIdentifier;
	NSString* _subSectionIdentifier;
	NSString* _displayName;
	NSDictionary* _settings;
	NSSet* _subSectionSettings;
	BOOL _userConfigurable;
	UIImage* _settingsIcon;
	BOOL _showsCustomSettingsLink;
	BOOL _isDeliveredQuietly;
	BOOL _hasProvisialAuthorization;

}

@property (nonatomic,readonly) BOOL notificationsEnabled; 
@property (nonatomic,readonly) BOOL criticalAlertsEnabled; 
@property (nonatomic,readonly) BOOL showsInNotificationCenter; 
@property (nonatomic,readonly) BOOL showsInLockScreen; 
@property (nonatomic,readonly) long long subSectionPriority; 
@property (nonatomic,readonly) unsigned long long contentPreviewSetting; 
@property (nonatomic,readonly) unsigned long long groupingSetting; 
@property (nonatomic,copy,readonly) NSString * sectionIdentifier;                            //@synthesize sectionIdentifier=_sectionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * subSectionIdentifier;                         //@synthesize subSectionIdentifier=_subSectionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                                  //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * settings;                                 //@synthesize settings=_settings - In the implementation block
@property (nonatomic,copy,readonly) NSSet * subSectionSettings;                              //@synthesize subSectionSettings=_subSectionSettings - In the implementation block
@property (getter=isUserConfigurable,nonatomic,readonly) BOOL userConfigurable;              //@synthesize userConfigurable=_userConfigurable - In the implementation block
@property (nonatomic,readonly) UIImage * settingsIcon;                                       //@synthesize settingsIcon=_settingsIcon - In the implementation block
@property (nonatomic,readonly) BOOL showsCustomSettingsLink;                                 //@synthesize showsCustomSettingsLink=_showsCustomSettingsLink - In the implementation block
@property (nonatomic,readonly) BOOL isDeliveredQuietly;                                      //@synthesize isDeliveredQuietly=_isDeliveredQuietly - In the implementation block
@property (nonatomic,readonly) BOOL hasProvisionalAuthorization;                             //@synthesize hasProvisialAuthorization=_hasProvisialAuthorization - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)notificationSectionSettingsForBBSectionInfo:(id)arg1 ;
-(BOOL)notificationsEnabled;
-(unsigned long long)groupingSetting;
-(BOOL)showsInNotificationCenter;
-(unsigned long long)contentPreviewSetting;
-(BOOL)showsInLockScreen;
-(BOOL)criticalAlertsEnabled;
-(unsigned long long)_contentPreviewSettingFromBBContentPreviewSetting:(long long)arg1 ;
-(unsigned long long)_groupingSettingFromBBGroupingSetting:(long long)arg1 ;
-(id)_notificationSectionSettingsForSubSectionWithIdentifier:(id)arg1 ;
-(long long)subSectionPriority;
-(unsigned long long)contentPreviewSettingForRequestWithSubSectionIdentifiers:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(NSDictionary *)settings;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)sectionIdentifier;
-(BOOL)isDeliveredQuietly;
-(BOOL)showsCustomSettingsLink;
-(NSString *)subSectionIdentifier;
-(NSSet *)subSectionSettings;
-(BOOL)isUserConfigurable;
-(UIImage *)settingsIcon;
-(BOOL)hasProvisionalAuthorization;
-(id)initWithNotificationSectionSettings:(id)arg1 ;
@end

