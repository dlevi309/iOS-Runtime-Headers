/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, BBSectionInfoSettings, BBSectionIcon, NSArray, NSDictionary, NSData;

@interface BBSectionInfo : NSObject <NSCopying, NSSecureCoding> {

	NSString* _sectionID;
	NSString* _subsectionID;
	long long _sectionType;
	long long _sectionCategory;
	BBSectionInfoSettings* _sectionInfoSettings;
	BBSectionInfoSettings* _managedSectionInfoSettings;
	NSString* _pathToWeeAppPluginBundle;
	NSString* _displayName;
	BBSectionIcon* _icon;
	NSArray* _subsections;
	BBSectionInfo* _parentSection;
	NSString* _factorySectionID;
	NSArray* _dataProviderIDs;
	BOOL _suppressFromSettings;
	BOOL _hideWeeApp;
	NSString* _appName;
	long long _subsectionPriority;
	unsigned long long _suppressedSettings;
	unsigned long long _version;

}

@property (nonatomic,copy) BBSectionInfoSettings * managedSectionInfoSettings; 
@property (nonatomic,readonly) BOOL usesManagedSettings; 
@property (nonatomic,readonly) BBSectionInfoSettings * readableSettings; 
@property (nonatomic,readonly) BBSectionInfoSettings * writableSettings; 
@property (assign,nonatomic) long long authorizationStatus; 
@property (assign,nonatomic) BOOL allowsNotifications; 
@property (assign,nonatomic) BOOL showsOnExternalDevices; 
@property (assign,nonatomic) BOOL showsCustomSettingsLink; 
@property (assign,nonatomic) long long contentPreviewSetting; 
@property (assign,nonatomic) long long spokenNotificationSetting; 
@property (assign,nonatomic) unsigned long long alertType; 
@property (assign,nonatomic) unsigned long long pushSettings; 
@property (assign,nonatomic) long long carPlaySetting; 
@property (assign,nonatomic) long long criticalAlertSetting; 
@property (assign,nonatomic) long long lockScreenSetting; 
@property (assign,nonatomic) long long notificationCenterSetting; 
@property (assign,nonatomic) long long bulletinGroupingSetting; 
@property (assign,nonatomic) BOOL hideWeeApp;                                               //@synthesize hideWeeApp=_hideWeeApp - In the implementation block
@property (nonatomic,copy) NSString * appName;                                              //@synthesize appName=_appName - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                          //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) BBSectionIcon * icon;                                            //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy) NSArray * subsections;                                           //@synthesize subsections=_subsections - In the implementation block
@property (assign,nonatomic,__weak) BBSectionInfo * parentSection;                          //@synthesize parentSection=_parentSection - In the implementation block
@property (nonatomic,copy) NSString * factorySectionID;                                     //@synthesize factorySectionID=_factorySectionID - In the implementation block
@property (nonatomic,copy) NSArray * dataProviderIDs;                                       //@synthesize dataProviderIDs=_dataProviderIDs - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * stateCapture; 
@property (nonatomic,copy) NSString * sectionID;                                            //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,copy) NSString * subsectionID;                                         //@synthesize subsectionID=_subsectionID - In the implementation block
@property (assign,nonatomic) long long sectionType;                                         //@synthesize sectionType=_sectionType - In the implementation block
@property (assign,nonatomic) long long sectionCategory;                                     //@synthesize sectionCategory=_sectionCategory - In the implementation block
@property (assign,nonatomic) BOOL suppressFromSettings;                                     //@synthesize suppressFromSettings=_suppressFromSettings - In the implementation block
@property (nonatomic,copy) BBSectionInfoSettings * sectionInfoSettings;                     //@synthesize sectionInfoSettings=_sectionInfoSettings - In the implementation block
@property (assign,nonatomic) unsigned long long suppressedSettings;                         //@synthesize suppressedSettings=_suppressedSettings - In the implementation block
@property (nonatomic,copy) NSString * pathToWeeAppPluginBundle;                             //@synthesize pathToWeeAppPluginBundle=_pathToWeeAppPluginBundle - In the implementation block
@property (nonatomic,readonly) BOOL hasEnabledSettings; 
@property (nonatomic,readonly) BOOL isDeliveredQuietly; 
@property (assign,nonatomic) long long subsectionPriority;                                  //@synthesize subsectionPriority=_subsectionPriority - In the implementation block
@property (assign,nonatomic) unsigned long long version;                                    //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL enabled; 
@property (nonatomic,copy,readonly) NSData * iconData; 
@property (assign,nonatomic) unsigned long long bulletinCount; 
@property (assign,nonatomic) unsigned long long notificationCenterLimit; 
+(BOOL)supportsSecureCoding;
+(id)defaultSectionInfoForType:(long long)arg1 ;
+(id)defaultSectionInfoForSection:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)replacementObjectForCoder:(id)arg1 ;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(unsigned long long)version;
-(void)setVersion:(unsigned long long)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSData *)iconData;
-(long long)authorizationStatus;
-(NSString *)sectionID;
-(void)setSectionID:(NSString *)arg1 ;
-(BBSectionIcon *)icon;
-(void)setIcon:(BBSectionIcon *)arg1 ;
-(NSString *)appName;
-(void)setAppName:(NSString *)arg1 ;
-(unsigned long long)alertType;
-(void)setAlertType:(unsigned long long)arg1 ;
-(long long)sectionType;
-(long long)lockScreenSetting;
-(long long)notificationCenterSetting;
-(long long)carPlaySetting;
-(long long)criticalAlertSetting;
-(BOOL)hasEnabledSettings;
-(void)setAuthorizationStatus:(long long)arg1 ;
-(void)setNotificationCenterSetting:(long long)arg1 ;
-(void)setLockScreenSetting:(long long)arg1 ;
-(void)setCarPlaySetting:(long long)arg1 ;
-(void)setCriticalAlertSetting:(long long)arg1 ;
-(NSString *)pathToWeeAppPluginBundle;
-(unsigned long long)suppressedSettings;
-(NSString *)subsectionID;
-(NSArray *)subsections;
-(BOOL)showsInNotificationCenter;
-(void)setSectionType:(long long)arg1 ;
-(long long)contentPreviewSetting;
-(BOOL)showsInLockScreen;
-(BOOL)showsMessagePreview;
-(BOOL)allowsNotifications;
-(void)setParentSection:(BBSectionInfo *)arg1 ;
-(BBSectionInfo *)parentSection;
-(id)initWithDefaultsForSectionType:(long long)arg1 ;
-(void)setBulletinGroupingSetting:(long long)arg1 ;
-(void)setPushSettings:(unsigned long long)arg1 ;
-(void)setContentPreviewSetting:(long long)arg1 ;
-(void)setShowsMessagePreview:(BOOL)arg1 ;
-(NSArray *)dataProviderIDs;
-(long long)subsectionPriority;
-(BOOL)usesManagedSettings;
-(unsigned long long)pushSettings;
-(long long)spokenNotificationSetting;
-(NSString *)factorySectionID;
-(id)effectiveSectionInfoWithFactoryInfo:(id)arg1 defaultContentPreviewSetting:(long long)arg2 globalSpokenNotificationSetting:(long long)arg3 ;
-(id)effectiveSectionInfoWithDefaultContentPreviewSetting:(long long)arg1 globalSpokenNotificationSetting:(long long)arg2 ;
-(id)_subsectionForID:(id)arg1 ;
-(BOOL)queryAndUseManagedSettings;
-(void)_replaceSubsection:(id)arg1 ;
-(NSDictionary *)stateCapture;
-(BOOL)hideWeeApp;
-(void)setHideWeeApp:(BOOL)arg1 ;
-(void)setSuppressFromSettings:(BOOL)arg1 ;
-(void)setFactorySectionID:(NSString *)arg1 ;
-(BBSectionInfoSettings *)sectionInfoSettings;
-(void)_associateDataProviderSectionInfo:(id)arg1 ;
-(BOOL)queryAndUseManagedSettingsForSectionID:(id)arg1 ;
-(BOOL)suppressFromSettings;
-(long long)sectionCategory;
-(void)_configureWithDefaultsForSectionType:(long long)arg1 ;
-(void)setSuppressedSettings:(unsigned long long)arg1 ;
-(void)setBulletinCount:(unsigned long long)arg1 ;
-(void)setSubsections:(NSArray *)arg1 ;
-(void)setDataProviderIDs:(NSArray *)arg1 ;
-(BBSectionInfoSettings *)managedSectionInfoSettings;
-(void)setManagedSectionInfoSettings:(BBSectionInfoSettings *)arg1 ;
-(BOOL)_isDeliveredQuietly;
-(void)setSpokenNotificationSetting:(long long)arg1 ;
-(void)_deliverQuietly:(BOOL)arg1 ;
-(id)_suppressedSettingsList:(unsigned long long)arg1 ;
-(void)setNotificationCenterLimit:(unsigned long long)arg1 ;
-(void)setSubsectionID:(NSString *)arg1 ;
-(void)setSectionCategory:(long long)arg1 ;
-(void)setSectionInfoSettings:(BBSectionInfoSettings *)arg1 ;
-(void)setPathToWeeAppPluginBundle:(NSString *)arg1 ;
-(void)_addSubsection:(id)arg1 ;
-(void)setSubsectionPriority:(long long)arg1 ;
-(void)setAllowsNotifications:(BOOL)arg1 ;
-(void)setShowsInNotificationCenter:(BOOL)arg1 ;
-(void)setShowsInLockScreen:(BOOL)arg1 ;
-(void)setShowsCustomSettingsLink:(BOOL)arg1 ;
-(void)setShowsOnExternalDevices:(BOOL)arg1 ;
-(void)_dissociateDataProviderSectionInfo:(id)arg1 ;
-(BOOL)isDeliveredQuietly;
-(void)deliverQuietly:(BOOL)arg1 ;
-(unsigned long long)bulletinCount;
-(unsigned long long)notificationCenterLimit;
-(id)copyFromManagedSettings;
-(BOOL)showsOnExternalDevices;
-(long long)disabledSettingForSetting:(long long)arg1 ;
-(BOOL)showsCustomSettingsLink;
-(void)updateWithDefaultSectionInfo:(id)arg1 ;
-(BBSectionInfoSettings *)readableSettings;
-(BBSectionInfoSettings *)writableSettings;
-(long long)bulletinGroupingSetting;
-(long long)emergencySetting;
-(void)setEmergencySetting:(long long)arg1 ;
@end

