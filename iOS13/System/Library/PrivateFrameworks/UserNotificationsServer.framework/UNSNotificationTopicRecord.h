/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (assign,nonatomic) BOOL modalAlertStyle;                             //@synthesize modalAlertStyle=_modalAlertStyle - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)priority;
-(NSString *)displayName;
-(void)setPriority:(unsigned long long)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)sortIdentifier;
-(BOOL)supportsCarPlay;
-(void)setDisplayNameLocalizationKey:(NSString *)arg1 ;
-(void)setSupportsBadges:(BOOL)arg1 ;
-(void)setSupportsAlerts:(BOOL)arg1 ;
-(void)setSupportsSounds:(BOOL)arg1 ;
-(void)setSupportsCarPlay:(BOOL)arg1 ;
-(void)setSupportsSpoken:(BOOL)arg1 ;
-(void)setSupportsCriticalAlerts:(BOOL)arg1 ;
-(void)setSupportsLockScreen:(BOOL)arg1 ;
-(void)setSupportsNotificationCenter:(BOOL)arg1 ;
-(void)setSortIdentifier:(NSString *)arg1 ;
-(NSString *)displayNameLocalizationKey;
-(BOOL)supportsAlerts;
-(BOOL)modalAlertStyle;
-(BOOL)supportsBadges;
-(BOOL)supportsSounds;
-(BOOL)supportsLockScreen;
-(BOOL)supportsNotificationCenter;
-(BOOL)supportsSpoken;
-(void)setModalAlertStyle:(BOOL)arg1 ;
-(BOOL)supportsCriticalAlerts;
@end

