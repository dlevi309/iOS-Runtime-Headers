/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface BBSectionInfoSettings : NSObject <NSCopying, NSSecureCoding> {

	BOOL _showsOnExternalDevices;
	BOOL _showsCustomSettingsLink;
	long long _authorizationStatus;
	long long _notificationCenterSetting;
	long long _lockScreenSetting;
	long long _contentPreviewSetting;
	unsigned long long _alertType;
	unsigned long long _pushSettings;
	long long _carPlaySetting;
	long long _criticalAlertSetting;
	long long _spokenNotificationSetting;
	long long _bulletinGroupingSetting;

}

@property (assign,nonatomic) BOOL showsInLockScreen; 
@property (assign,nonatomic) BOOL showsInNotificationCenter; 
@property (assign,nonatomic) BOOL showsMessagePreview; 
@property (nonatomic,copy,readonly) NSDictionary * stateCapture; 
@property (assign,nonatomic) long long authorizationStatus;                    //@synthesize authorizationStatus=_authorizationStatus - In the implementation block
@property (assign,nonatomic) BOOL allowsNotifications; 
@property (assign,nonatomic) long long notificationCenterSetting;              //@synthesize notificationCenterSetting=_notificationCenterSetting - In the implementation block
@property (assign,nonatomic) long long lockScreenSetting;                      //@synthesize lockScreenSetting=_lockScreenSetting - In the implementation block
@property (assign,nonatomic) BOOL showsOnExternalDevices;                      //@synthesize showsOnExternalDevices=_showsOnExternalDevices - In the implementation block
@property (assign,nonatomic) BOOL showsCustomSettingsLink;                     //@synthesize showsCustomSettingsLink=_showsCustomSettingsLink - In the implementation block
@property (assign,nonatomic) long long contentPreviewSetting;                  //@synthesize contentPreviewSetting=_contentPreviewSetting - In the implementation block
@property (assign,nonatomic) unsigned long long alertType;                     //@synthesize alertType=_alertType - In the implementation block
@property (assign,nonatomic) unsigned long long pushSettings;                  //@synthesize pushSettings=_pushSettings - In the implementation block
@property (assign,nonatomic) long long carPlaySetting;                         //@synthesize carPlaySetting=_carPlaySetting - In the implementation block
@property (assign,nonatomic) long long criticalAlertSetting;                   //@synthesize criticalAlertSetting=_criticalAlertSetting - In the implementation block
@property (assign,nonatomic) long long spokenNotificationSetting;              //@synthesize spokenNotificationSetting=_spokenNotificationSetting - In the implementation block
@property (assign,nonatomic) long long bulletinGroupingSetting;                //@synthesize bulletinGroupingSetting=_bulletinGroupingSetting - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sectionInfoSettingsForManagedBundleID:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)authorizationStatus;
-(unsigned long long)alertType;
-(void)setAlertType:(unsigned long long)arg1 ;
-(long long)lockScreenSetting;
-(long long)notificationCenterSetting;
-(long long)carPlaySetting;
-(long long)criticalAlertSetting;
-(void)setAuthorizationStatus:(long long)arg1 ;
-(void)setNotificationCenterSetting:(long long)arg1 ;
-(void)setLockScreenSetting:(long long)arg1 ;
-(void)setCarPlaySetting:(long long)arg1 ;
-(void)setCriticalAlertSetting:(long long)arg1 ;
-(BOOL)showsInNotificationCenter;
-(long long)contentPreviewSetting;
-(BOOL)showsInLockScreen;
-(BOOL)showsMessagePreview;
-(BOOL)allowsNotifications;
-(id)initWithDefaultsForSectionType:(long long)arg1 ;
-(void)setBulletinGroupingSetting:(long long)arg1 ;
-(void)setPushSettings:(unsigned long long)arg1 ;
-(void)setContentPreviewSetting:(long long)arg1 ;
-(void)setShowsMessagePreview:(BOOL)arg1 ;
-(unsigned long long)pushSettings;
-(long long)spokenNotificationSetting;
-(NSDictionary *)stateCapture;
-(void)setSpokenNotificationSetting:(long long)arg1 ;
-(void)setAllowsNotifications:(BOOL)arg1 ;
-(void)setShowsInNotificationCenter:(BOOL)arg1 ;
-(void)setShowsInLockScreen:(BOOL)arg1 ;
-(void)setShowsCustomSettingsLink:(BOOL)arg1 ;
-(void)setShowsOnExternalDevices:(BOOL)arg1 ;
-(BOOL)showsOnExternalDevices;
-(BOOL)showsCustomSettingsLink;
-(long long)bulletinGroupingSetting;
-(id)_authorizationStatusDescription;
-(id)_contentPreviewSettingDescription;
-(id)_alertTypeDescription;
-(id)_bulletinGroupingSettingDescription;
@end

