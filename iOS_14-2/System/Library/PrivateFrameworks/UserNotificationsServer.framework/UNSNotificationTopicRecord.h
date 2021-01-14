/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


@class NSString;

@interface UNSNotificationTopicRecord : NSObject {

	BOOL _supportsAlerts;
	BOOL _supportsBadges;
	BOOL _supportsSounds;
	BOOL _supportsLockScreen;
	BOOL _supportsNotificationCenter;
	BOOL _supportsCarPlay;
	BOOL _supportsSpoken;
	BOOL _supportsCriticalAlerts;
	BOOL _enablesAlerts;
	BOOL _enablesBadges;
	BOOL _enablesSounds;
	BOOL _enablesLockScreen;
	BOOL _enablesNotificationCenter;
	BOOL _enablesCarPlay;
	BOOL _enablesSpoken;
	BOOL _enablesCriticalAlerts;
	BOOL _modalAlertStyle;
	NSString* _identifier;
	NSString* _displayName;
	NSString* _displayNameLocalizationKey;
	unsigned long long _priority;
	NSString* _sortIdentifier;

}

@property (nonatomic,copy) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * displayName;                             //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * displayNameLocalizationKey;              //@synthesize displayNameLocalizationKey=_displayNameLocalizationKey - In the implementation block
@property (assign,nonatomic) unsigned long long priority;                      //@synthesize priority=_priority - In the implementation block
@property (nonatomic,copy) NSString * sortIdentifier;                          //@synthesize sortIdentifier=_sortIdentifier - In the implementation block
@property (assign,nonatomic) BOOL supportsAlerts;                              //@synthesize supportsAlerts=_supportsAlerts - In the implementation block
@property (assign,nonatomic) BOOL supportsBadges;                              //@synthesize supportsBadges=_supportsBadges - In the implementation block
@property (assign,nonatomic) BOOL supportsSounds;                              //@synthesize supportsSounds=_supportsSounds - In the implementation block
@property (assign,nonatomic) BOOL supportsLockScreen;                          //@synthesize supportsLockScreen=_supportsLockScreen - In the implementation block
@property (assign,nonatomic) BOOL supportsNotificationCenter;                  //@synthesize supportsNotificationCenter=_supportsNotificationCenter - In the implementation block
@property (assign,nonatomic) BOOL supportsCarPlay;                             //@synthesize supportsCarPlay=_supportsCarPlay - In the implementation block
@property (assign,nonatomic) BOOL supportsSpoken;                              //@synthesize supportsSpoken=_supportsSpoken - In the implementation block
@property (assign,nonatomic) BOOL supportsCriticalAlerts;                      //@synthesize supportsCriticalAlerts=_supportsCriticalAlerts - In the implementation block
@property (assign,nonatomic) BOOL enablesAlerts;                               //@synthesize enablesAlerts=_enablesAlerts - In the implementation block
@property (assign,nonatomic) BOOL enablesBadges;                               //@synthesize enablesBadges=_enablesBadges - In the implementation block
@property (assign,nonatomic) BOOL enablesSounds;                               //@synthesize enablesSounds=_enablesSounds - In the implementation block
@property (assign,nonatomic) BOOL enablesLockScreen;                           //@synthesize enablesLockScreen=_enablesLockScreen - In the implementation block
@property (assign,nonatomic) BOOL enablesNotificationCenter;                   //@synthesize enablesNotificationCenter=_enablesNotificationCenter - In the implementation block
@property (assign,nonatomic) BOOL enablesCarPlay;                              //@synthesize enablesCarPlay=_enablesCarPlay - In the implementation block
@property (assign,nonatomic) BOOL enablesSpoken;                               //@synthesize enablesSpoken=_enablesSpoken - In the implementation block
@property (assign,nonatomic) BOOL enablesCriticalAlerts;                       //@synthesize enablesCriticalAlerts=_enablesCriticalAlerts - In the implementation block
@property (assign,nonatomic) BOOL modalAlertStyle;                             //@synthesize modalAlertStyle=_modalAlertStyle - In the implementation block
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)setSupportsAlerts:(BOOL)arg1 ;
-(void)setSupportsSounds:(BOOL)arg1 ;
-(BOOL)modalAlertStyle;
-(void)setEnablesSounds:(BOOL)arg1 ;
-(void)setEnablesNotificationCenter:(BOOL)arg1 ;
-(BOOL)enablesCriticalAlerts;
-(BOOL)supportsLockScreen;
-(BOOL)supportsNotificationCenter;
-(BOOL)supportsSounds;
-(void)setEnablesCriticalAlerts:(BOOL)arg1 ;
-(void)setSupportsNotificationCenter:(BOOL)arg1 ;
-(void)setSupportsLockScreen:(BOOL)arg1 ;
-(BOOL)enablesSounds;
-(void)setDisplayNameLocalizationKey:(NSString *)arg1 ;
-(BOOL)supportsCriticalAlerts;
-(void)setEnablesLockScreen:(BOOL)arg1 ;
-(void)setEnablesCarPlay:(BOOL)arg1 ;
-(void)setEnablesBadges:(BOOL)arg1 ;
-(void)setModalAlertStyle:(BOOL)arg1 ;
-(id)description;
-(void)setEnablesAlerts:(BOOL)arg1 ;
-(BOOL)supportsAlerts;
-(void)setDisplayName:(NSString *)arg1 ;
-(BOOL)enablesNotificationCenter;
-(void)setSortIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)supportsBadges;
-(BOOL)enablesCarPlay;
-(BOOL)enablesAlerts;
-(BOOL)supportsCarPlay;
-(NSString *)displayNameLocalizationKey;
-(BOOL)enablesSpoken;
-(NSString *)sortIdentifier;
-(void)setSupportsSpoken:(BOOL)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)enablesBadges;
-(NSString *)identifier;
-(BOOL)supportsSpoken;
-(void)setEnablesSpoken:(BOOL)arg1 ;
-(void)setSupportsCriticalAlerts:(BOOL)arg1 ;
-(void)setSupportsBadges:(BOOL)arg1 ;
-(unsigned long long)priority;
-(BOOL)enablesLockScreen;
-(NSString *)displayName;
-(void)setPriority:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSupportsCarPlay:(BOOL)arg1 ;
@end

