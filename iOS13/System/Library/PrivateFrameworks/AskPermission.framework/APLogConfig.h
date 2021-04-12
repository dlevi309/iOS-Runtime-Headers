/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AskPermission.framework/AskPermission
*/

#import <AskPermission/AskPermission-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol OS_os_log, OS_dispatch_queue;
@class NSString, NSObject;

@interface APLogConfig : NSObject <NSCopying, NSMutableCopying> {

	NSString* _category;
	NSString* _subsystem;
	NSObject*<OS_os_log> _backingOSLogObject;
	NSObject*<OS_dispatch_queue> _propertyAccessQueue;

}

@property (nonatomic,retain) NSObject*<OS_os_log> backingOSLogObject;                       //@synthesize backingOSLogObject=_backingOSLogObject - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> propertyAccessQueue;              //@synthesize propertyAccessQueue=_propertyAccessQueue - In the implementation block
@property (nonatomic,copy) NSString * category;                                             //@synthesize category=_category - In the implementation block
@property (nonatomic,copy) NSString * subsystem;                                            //@synthesize subsystem=_subsystem - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> OSLogObject; 
+(id)sharedConfig;
+(id)_createLogConfigWithSubsystem:(id)arg1 category:(id)arg2 ;
+(id)_createLogConfigWithBaseConfig:(id)arg1 subystem:(id)arg2 category:(id)arg3 ;
+(id)sharedDaemonConfig;
+(id)sharedFrameworkConfig;
+(id)sharedExtensionConfig;
+(id)sharedSettingsConfig;
+(id)sharedPluginConfig;
+(id)sharedUIServiceConfig;
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
-(NSObject*<OS_dispatch_queue>)propertyAccessQueue;
-(NSObject*<OS_os_log>)backingOSLogObject;
-(void)setBackingOSLogObject:(NSObject*<OS_os_log>)arg1 ;
-(void)setSubsystem:(NSString *)arg1 ;
-(void)setPropertyAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

