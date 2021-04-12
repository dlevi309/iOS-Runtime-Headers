/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/DaemonUtils.framework/DaemonUtils
*/


@protocol OS_dispatch_queue;
#import <DaemonUtils/DaemonUtils-Structs.h>
@class NSObject;

@interface DaemonUtils : NSObject {

	NSObject*<OS_dispatch_queue> _serverQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serverQueue;              //@synthesize serverQueue=_serverQueue - In the implementation block
+(id)sharedInstance;
+(id)callerDisplayNameWithPid:(int)arg1 auditToken:(SCD_Struct_Ca0)arg2 bundleId:(id*)arg3 ;
+(void)dispatchReallyAfter:(long long)arg1 tolerance:(double)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
+(id)_uuidForPid:(int)arg1 ;
+(id)_pluginDisplayNameForUUID:(id)arg1 bundleId:(id*)arg2 ;
+(id)_callerUUID;
+(id)_pluginDisplayNameForPID:(int)arg1 bundleId:(id*)arg2 ;
+(BOOL)_isSiriExtensionOf:(id)arg1 runningWithAuditToken:(SCD_Struct_Ca0)arg2 ;
+(BOOL)deviceHasSEP;
+(BOOL)deviceHasPearl;
-(id)init;
-(NSObject*<OS_dispatch_queue>)serverQueue;
@end

