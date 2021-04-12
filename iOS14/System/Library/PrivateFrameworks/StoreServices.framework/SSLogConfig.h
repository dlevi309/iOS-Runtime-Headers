/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol OS_os_log, OS_dispatch_queue;
@class NSString, SSLogFileOptions, NSObject;

@interface SSLogConfig : NSObject <NSCopying, NSMutableCopying> {

	BOOL _writeToDisk;
	NSString* _category;
	unsigned long long _environment;
	NSString* _subsystem;
	SSLogFileOptions* _backingLogFileOptions;
	NSObject*<OS_os_log> _backingOSLogObject;
	NSObject*<OS_dispatch_queue> _propertyAccessQueue;
	NSString* _outputDirectory;
	NSString* _outputFilename;

}

@property (nonatomic,retain) SSLogFileOptions * backingLogFileOptions;                      //@synthesize backingLogFileOptions=_backingLogFileOptions - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> backingOSLogObject;                       //@synthesize backingOSLogObject=_backingOSLogObject - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> propertyAccessQueue;              //@synthesize propertyAccessQueue=_propertyAccessQueue - In the implementation block
@property (nonatomic,copy) NSString * category;                                             //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) unsigned long long environment;                                //@synthesize environment=_environment - In the implementation block
@property (nonatomic,copy) NSString * outputDirectory;                                      //@synthesize outputDirectory=_outputDirectory - In the implementation block
@property (nonatomic,copy) NSString * outputFilename;                                       //@synthesize outputFilename=_outputFilename - In the implementation block
@property (nonatomic,copy) NSString * subsystem;                                            //@synthesize subsystem=_subsystem - In the implementation block
@property (assign,nonatomic) BOOL writeToDisk;                                              //@synthesize writeToDisk=_writeToDisk - In the implementation block
@property (nonatomic,readonly) BOOL debugLogsEnabled; 
@property (nonatomic,readonly) SSLogFileOptions * logFileOptions; 
@property (nonatomic,readonly) NSObject*<OS_os_log> OSLogObject; 
@property (nonatomic,readonly) BOOL shouldLog; 
@property (nonatomic,readonly) BOOL shouldLogToDisk; 
+(id)_logFilenameForSubsystem:(id)arg1 category:(id)arg2 ;
+(BOOL)_deviceIsRunningInternalBuild;
+(id)sharedStoreServicesConfig;
+(id)sharedWriteToDiskConfig;
+(BOOL)_deviceIsRunningSeedBuild;
+(id)sharedStoreServicesConfigOversize;
+(id)sharedBagCacheConfig;
+(id)_logFileDirectoryPathForSubsystem:(id)arg1 category:(id)arg2 ;
+(id)sharediTunesStoreConfig;
+(BOOL)_deviceIsRunningInternalOrSeedBuild;
+(id)sharedFollowUpConfig;
+(id)sharedPushNotificationConfig;
+(id)sharedDaemonConfigOversize;
+(id)_createLogConfigWithSubsystem:(id)arg1 category:(id)arg2 ;
+(id)sharedAccountsStorefrontConfig;
+(id)sharedAccountsConfig;
+(id)sharedAccountsLogoutConfig;
+(id)sharedPrivacyConfig;
+(id)sharedAccountsMigrationConfigOversize;
+(id)sharedFairPlayAnisetteConfig;
+(id)sharedAskPermissionExtensionConfig;
+(BOOL)_debugLogsEnabled:(id)arg1 ;
+(id)_createLogConfigWithBaseConfig:(id)arg1 subystem:(id)arg2 category:(id)arg3 ;
+(id)sharediTunesStoreConfigOversize;
+(id)sharedAccountsMigrationConfig;
+(id)sharedFeatureEnablerMigrationConfig;
+(id)sharedAccountsAuthenticationConfig;
+(id)sharedAccountsCookiesConfig;
+(id)sharedConfig;
+(id)sharedBagConfig;
+(id)sharedDaemonConfig;
-(BOOL)debugLogsEnabled;
-(BOOL)writeToDisk;
-(BOOL)shouldLogToDisk;
-(void)setBackingOSLogObject:(NSObject*<OS_os_log>)arg1 ;
-(void)setOutputFilename:(NSString *)arg1 ;
-(NSObject*<OS_os_log>)OSLogObject;
-(void)setCategory:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)propertyAccessQueue;
-(id)init;
-(void)setOutputDirectory:(NSString *)arg1 ;
-(NSString *)subsystem;
-(void)setSubsystem:(NSString *)arg1 ;
-(NSObject*<OS_os_log>)backingOSLogObject;
-(void)setPropertyAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)category;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)shouldLog;
-(SSLogFileOptions *)backingLogFileOptions;
-(id)description;
-(void)setBackingLogFileOptions:(SSLogFileOptions *)arg1 ;
-(NSString *)outputDirectory;
-(void)setEnvironment:(unsigned long long)arg1 ;
-(void)setWriteToDisk:(BOOL)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)environment;
-(SSLogFileOptions *)logFileOptions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)outputFilename;
-(BOOL)isEqual:(id)arg1 ;
@end

