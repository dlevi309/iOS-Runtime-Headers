/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <HomeKit/HMAccessory.h>
#import <libobjc.A.dylib/HFUserNotificationServiceSettingsProviding.h>

@class HFUserNotificationServiceSettings, NSUUID, NSPredicate, HMHome, NSString;

@interface HFDemoModeAccessory : HMAccessory <HFUserNotificationServiceSettingsProviding> {

	BOOL _notificationsEnabled;
	BOOL _isInternallyCertified;
	NSUUID* _internalUniqueIdentifier;
	NSPredicate* _notificationCondition;
	HMHome* _home;

}

@property (nonatomic,retain) NSUUID * internalUniqueIdentifier;                                                   //@synthesize internalUniqueIdentifier=_internalUniqueIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * model; 
@property (nonatomic,copy,readonly) NSString * manufacturer; 
@property (nonatomic,copy,readonly) NSString * firmwareVersion; 
@property (assign,getter=areNotificationsEnabled,nonatomic) BOOL notificationsEnabled;                            //@synthesize notificationsEnabled=_notificationsEnabled - In the implementation block
@property (nonatomic,retain) NSPredicate * notificationCondition;                                                 //@synthesize notificationCondition=_notificationCondition - In the implementation block
@property (nonatomic,retain) HMHome * home;                                                                       //@synthesize home=_home - In the implementation block
@property (assign,nonatomic) BOOL isInternallyCertified;                                                          //@synthesize isInternallyCertified=_isInternallyCertified - In the implementation block
@property (nonatomic,copy,readonly) HFUserNotificationServiceSettings * hf_userNotificationSettings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier; 
+(id)accessoryWithContentsOfDictionary:(id)arg1 forHome:(id)arg2 ;
+(BOOL)_hasValidKeys:(id)arg1 ;
-(NSString *)description;
-(id)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)category;
-(NSUUID *)uniqueIdentifier;
-(NSString *)model;
-(HMHome *)home;
-(id)serialNumber;
-(NSString *)firmwareVersion;
-(void)setNotificationsEnabled:(BOOL)arg1 ;
-(id)services;
-(NSString *)manufacturer;
-(void)setHome:(HMHome *)arg1 ;
-(id)room;
-(BOOL)isReachable;
-(long long)certificationStatus;
-(id)symptomsHandler;
-(BOOL)areNotificationsEnabled;
-(BOOL)hf_shouldShowSoftwareUpdateInfo;
-(id)hf_serviceNameComponents;
-(id)hf_updateIsFavorite:(BOOL)arg1 ;
-(BOOL)hf_isFavorite;
-(BOOL)hf_hasSetFavorite;
-(BOOL)hf_shouldShowInFavorites;
-(HFUserNotificationServiceSettings *)hf_userNotificationSettings;
-(id)initWithContentsOfDictionary:(id)arg1 forHome:(id)arg2 ;
-(BOOL)_isAppleInternalAccessory;
-(BOOL)_shouldShowAppleInternalManufacturerInfo;
-(void)_updateManufacturerInfoWithString:(id)arg1 forKey:(id)arg2 ;
-(BOOL)isInternallyCertified;
-(void)setIsInternallyCertified:(BOOL)arg1 ;
-(id)hf_updateUserNotificationSettings:(id)arg1 ;
-(NSUUID *)internalUniqueIdentifier;
-(void)setInternalUniqueIdentifier:(NSUUID *)arg1 ;
-(NSPredicate *)notificationCondition;
-(void)setNotificationCondition:(NSPredicate *)arg1 ;
@end

