/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol OS_os_log, OS_dispatch_queue;
@class NSString, NSObject;

@interface ASDLogConfig : NSObject <NSCopying, NSMutableCopying> {

	NSString* _category;
	unsigned long long _environment;
	NSString* _subsystem;
	NSObject*<OS_os_log> _backingOSLogObject;
	NSObject*<OS_dispatch_queue> _propertyAccessQueue;

}

@property (nonatomic,retain) NSObject*<OS_os_log> backingOSLogObject;                       //@synthesize backingOSLogObject=_backingOSLogObject - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> propertyAccessQueue;              //@synthesize propertyAccessQueue=_propertyAccessQueue - In the implementation block
@property (nonatomic,copy) NSString * category;                                             //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) unsigned long long environment;                                //@synthesize environment=_environment - In the implementation block
@property (nonatomic,copy) NSString * subsystem;                                            //@synthesize subsystem=_subsystem - In the implementation block
@property (nonatomic,readonly) BOOL debugLogsEnabled; 
@property (nonatomic,readonly) NSObject*<OS_os_log> OSLogObject; 
@property (nonatomic,readonly) BOOL shouldLog; 
+(BOOL)_deviceIsRunningInternalBuild;
+(BOOL)_deviceIsRunningSeedBuild;
+(BOOL)_deviceIsRunningInternalOrSeedBuild;
+(id)sharedDaemonConfigOversize;
+(BOOL)_debugLogsEnabled:(id)arg1 ;
+(id)sharedFrameworkConfig;
+(id)sharedConfig;
+(id)sharedDaemonConfig;
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
-(BOOL)shouldLog;
-(id)description;
-(void)setEnvironment:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)environment;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

