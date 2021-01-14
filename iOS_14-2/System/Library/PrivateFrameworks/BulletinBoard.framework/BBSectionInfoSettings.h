/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSDictionary;

@interface BBSectionInfoSettings : NSObject <NSCopying, NSSecureCoding> {

	BOOL _showsOnExternalDevices;
	BOOL _showsCustomSettingsLink;
	long long _authorizationStatus;
	NSDate* _authorizationExpirationDate;
	NSDate* _lastUserGrantedAuthorizationDate;
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
@property (assign,nonatomic) long long authorizationStatus;                          //@synthesize authorizationStatus=_authorizationStatus - In the implementation block
@property (nonatomic,retain) NSDate * authorizationExpirationDate;                   //@synthesize authorizationExpirationDate=_authorizationExpirationDate - In the implementation block
@property (assign,nonatomic) BOOL allowsNotifications; 
@property (nonatomic,retain) NSDate * lastUserGrantedAuthorizationDate;              //@synthesize lastUserGrantedAuthorizationDate=_lastUserGrantedAuthorizationDate - In the implementation block
@property (nonatomic,readonly) BOOL isAuthorizedTemporarily; 
@property (assign,nonatomic) long long notificationCenterSetting;                    //@synthesize notificationCenterSetting=_notificationCenterSetting - In the implementation block
@property (assign,nonatomic) long long lockScreenSetting;                            //@synthesize lockScreenSetting=_lockScreenSetting - In the implementation block
@property (assign,nonatomic) BOOL showsOnExternalDevices;                            //@synthesize showsOnExternalDevices=_showsOnExternalDevices - In the implementation block
@property (assign,nonatomic) BOOL showsCustomSettingsLink;                           //@synthesize showsCustomSettingsLink=_showsCustomSettingsLink - In the implementation block
@property (assign,nonatomic) long long contentPreviewSetting;                        //@synthesize contentPreviewSetting=_contentPreviewSetting - In the implementation block
@property (assign,nonatomic) unsigned long long alertType;                           //@synthesize alertType=_alertType - In the implementation block
@property (assign,nonatomic) unsigned long long pushSettings;                        //@synthesize pushSettings=_pushSettings - In the implementation block
@property (assign,nonatomic) long long carPlaySetting;                               //@synthesize carPlaySetting=_carPlaySetting - In the implementation block
@property (assign,nonatomic) long long criticalAlertSetting;                         //@synthesize criticalAlertSetting=_criticalAlertSetting - In the implementation block
@property (assign,nonatomic) long long spokenNotificationSetting;                    //@synthesize spokenNotificationSetting=_spokenNotificationSetting - In the implementation block
@property (assign,nonatomic) long long bulletinGroupingSetting;                      //@synthesize bulletinGroupingSetting=_bulletinGroupingSetting - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sectionInfoSettingsForManagedBundleID:(id)arg1 ;
-(long long)lockScreenSetting;
-(unsigned long long)alertType;
-(long long)notificationCenterSetting;
-(void)setAuthorizationStatus:(long long)arg1 ;
-(void)setAuthorizationExpirationDate:(NSDate *)arg1 ;
-(BOOL)isAuthorizedTemporarily;
-(NSDictionary *)stateCapture;
-(BOOL)showsInLockScreen;
-(long long)spokenNotificationSetting;
-(long long)authorizationStatus;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAlertType:(unsigned long long)arg1 ;
-(void)setShowsInLockScreen:(BOOL)arg1 ;
-(void)setLastUserGrantedAuthorizationDate:(NSDate *)arg1 ;
-(id)initWithDefaultsForSectionType:(long long)arg1 ;
-(id)_alertTypeDescription;
-(unsigned long long)pushSettings;
-(BOOL)allowsNotifications;
-(NSDate *)lastUserGrantedAuthorizationDate;
-(void)setAllowsNotifications:(BOOL)arg1 ;
-(BOOL)showsInNotificationCenter;
-(id)description;
-(void)setShowsOnExternalDevices:(BOOL)arg1 ;
-(void)setCarPlaySetting:(long long)arg1 ;
-(long long)criticalAlertSetting;
-(long long)carPlaySetting;
-(void)setSpokenNotificationSetting:(long long)arg1 ;
-(void)setContentPreviewSetting:(long long)arg1 ;
-(BOOL)showsOnExternalDevices;
-(void)setPushSettings:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_bulletinGroupingSettingDescription;
-(id)_contentPreviewSettingDescription;
-(void)setLockScreenSetting:(long long)arg1 ;
-(BOOL)showsMessagePreview;
-(void)setShowsInNotificationCenter:(BOOL)arg1 ;
-(void)setCriticalAlertSetting:(long long)arg1 ;
-(void)setNotificationCenterSetting:(long long)arg1 ;
-(long long)contentPreviewSetting;
-(void)setShowsMessagePreview:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)bulletinGroupingSetting;
-(void)setBulletinGroupingSetting:(long long)arg1 ;
-(NSDate *)authorizationExpirationDate;
-(id)_authorizationStatusDescription;
-(BOOL)isEqual:(id)arg1 ;
-(void)setShowsCustomSettingsLink:(BOOL)arg1 ;
-(BOOL)showsCustomSettingsLink;
@end

