/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
*/

#import <UserNotificationsKit/NCNotificationSectionSettings.h>

@class NSString, NSDictionary, NSSet, UIImage;

@interface NCMutableNotificationSectionSettings : NCNotificationSectionSettings

@property (nonatomic,copy) NSString * sectionIdentifier; 
@property (nonatomic,copy) NSString * subSectionIdentifier; 
@property (nonatomic,copy) NSString * displayName; 
@property (nonatomic,copy) NSDictionary * settings; 
@property (nonatomic,copy) NSSet * subSectionSettings; 
@property (assign,getter=isUserConfigurable,nonatomic) BOOL userConfigurable; 
@property (nonatomic,retain) UIImage * settingsIcon; 
@property (assign,nonatomic) BOOL showsCustomSettingsLink; 
@property (assign,nonatomic) BOOL isDeliveredQuietly; 
@property (assign,nonatomic) BOOL hasProvisionalAuthorization; 
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setSettings:(NSDictionary *)arg1 ;
-(void)setSectionIdentifier:(NSString *)arg1 ;
-(void)setShowsCustomSettingsLink:(BOOL)arg1 ;
-(void)setSubSectionIdentifier:(NSString *)arg1 ;
-(void)setSubSectionSettings:(NSSet *)arg1 ;
-(void)setUserConfigurable:(BOOL)arg1 ;
-(void)setSettingsIcon:(UIImage *)arg1 ;
-(void)setIsDeliveredQuietly:(BOOL)arg1 ;
-(void)setHasProvisionalAuthorization:(BOOL)arg1 ;
@end

