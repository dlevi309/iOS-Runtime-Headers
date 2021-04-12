/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol OS_os_log, OS_dispatch_queue;
@class NSString, NSObject;

@interface AMSLogConfig : NSObject <NSCopying, NSMutableCopying> {

	NSString* _category;
	NSString* _subsystem;
	NSObject*<OS_os_log> _backingOSLogObject;
	NSObject*<OS_dispatch_queue> _propertyAccessQueue;

}

@property (nonatomic,retain) NSObject*<OS_os_log> backingOSLogObject;                       //@synthesize backingOSLogObject=_backingOSLogObject - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> propertyAccessQueue;              //@synthesize propertyAccessQueue=_propertyAccessQueue - In the implementation block
@property (nonatomic,copy) NSString * category;                                             //@synthesize category=_category - In the implementation block
@property (nonatomic,copy) NSString * subsystem;                                            //@synthesize subsystem=_subsystem - In the implementation block
@property (nonatomic,readonly) BOOL debugLogsEnabled; 
@property (nonatomic,readonly) NSObject*<OS_os_log> OSLogObject; 
+(id)sharedDataMigrationConfig;
+(id)sharedRatingsProviderConfig;
+(id)sharedAccountsNotificationPluginConfig;
+(id)sharedAccountsOversizeConfig;
+(id)sharedBagCacheConfig;
+(id)sharedFollowUpConfig;
+(id)sharedPurchaseConfig;
+(id)sharedPushNotificationConfig;
+(id)_createLogConfigWithSubsystem:(id)arg1 category:(id)arg2 ;
+(id)sharedAccountsAuthenticationPluginConfig;
+(id)sharedAnisetteConfig;
+(id)sharedUserNotificationConfig;
+(id)sharedAccountsStorefrontConfig;
+(id)sharedAccountsConfig;
+(id)sharedAccountsLogoutConfig;
+(id)sharedPrivacyConfig;
+(id)sharedAccountsMigrationConfigOversize;
+(id)sharedAttestationConfig;
+(id)sharedKeychainConfig;
+(id)sharedMediaServiceOwnerConfig;
+(BOOL)_debugLogsEnabled:(id)arg1 ;
+(id)_createLogConfigWithBaseConfig:(id)arg1 subystem:(id)arg2 category:(id)arg3 ;
+(id)sharedAccountsMultiUserConfig;
+(id)sharedAccountsSyncPluginConfig;
+(id)sharedConfigOversize;
+(id)sharedAccountsMigrationConfig;
+(id)sharedMediaConfig;
+(id)sharedAccountsCookiesConfig;
+(id)sharedMarketingItemConfig;
+(id)sharedAccountsDaemonConfig;
+(id)sharedConfig;
+(id)sharedBagConfig;
+(id)sharedDeviceOffersConfig;
-(BOOL)debugLogsEnabled;
-(void)setBackingOSLogObject:(NSObject*<OS_os_log>)arg1 ;
-(NSObject*<OS_os_log>)OSLogObject;
-(void)setCategory:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)propertyAccessQueue;
-(id)init;
-(NSString *)subsystem;
-(void)setSubsystem:(NSString *)arg1 ;
-(NSObject*<OS_os_log>)backingOSLogObject;
-(void)setPropertyAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)category;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

