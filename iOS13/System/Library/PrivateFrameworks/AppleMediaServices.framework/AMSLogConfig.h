/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)sharedAccountsConfig;
+(id)sharedConfig;
+(id)sharedAccountsCookiesConfig;
+(id)sharedPrivacyConfig;
+(id)sharedAnisetteConfig;
+(id)sharedAttestationConfig;
+(id)sharedAccountsOversizeConfig;
+(id)sharedBagConfig;
+(id)sharedConfigOversize;
+(id)sharedAccountsStorefrontConfig;
+(id)sharedAccountsDaemonConfig;
+(id)sharedDataMigrationConfig;
+(id)sharedAccountsAuthenticationPluginConfig;
+(id)sharedPurchaseConfig;
+(id)sharedFollowUpConfig;
+(id)sharedKeychainConfig;
+(id)_createLogConfigWithSubsystem:(id)arg1 category:(id)arg2 ;
+(id)_createLogConfigWithBaseConfig:(id)arg1 subystem:(id)arg2 category:(id)arg3 ;
+(BOOL)_debugLogsEnabled:(id)arg1 ;
+(id)sharedDeviceOffersConfig;
+(id)sharedAccountsLogoutConfig;
+(id)sharedAccountsMigrationConfig;
+(id)sharedAccountsMigrationConfigOversize;
+(id)sharedAccountsNotificationPluginConfig;
+(id)sharedAccountsSyncPluginConfig;
+(id)sharedBagCacheConfig;
+(id)sharedMediaConfig;
+(id)sharedPushNotificationConfig;
+(id)sharedUserNotificationConfig;
+(id)sharedMediaServiceOwnerConfig;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)subsystem;
-(NSObject*<OS_os_log>)OSLogObject;
-(BOOL)debugLogsEnabled;
-(NSObject*<OS_dispatch_queue>)propertyAccessQueue;
-(NSObject*<OS_os_log>)backingOSLogObject;
-(void)setBackingOSLogObject:(NSObject*<OS_os_log>)arg1 ;
-(void)setSubsystem:(NSString *)arg1 ;
-(void)setPropertyAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

