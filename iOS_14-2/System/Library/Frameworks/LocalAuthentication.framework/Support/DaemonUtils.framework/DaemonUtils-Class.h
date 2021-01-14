/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/DaemonUtils.framework/DaemonUtils
*/


@protocol OS_dispatch_queue;
#import <DaemonUtils/DaemonUtils-Structs.h>
@class NSObject;

@interface DaemonUtils : NSObject {

	NSObject*<OS_dispatch_queue> _serverQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serverQueue;              //@synthesize serverQueue=_serverQueue - In the implementation block
+(void)dispatchReallyAfter:(long long)arg1 tolerance:(double)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
+(id)_uuidForPid:(int)arg1 ;
+(BOOL)_isSiriExtensionOf:(id)arg1 runningWithAuditToken:(SCD_Struct_Ca0)arg2 ;
+(id)sharedInstance;
+(id)_pluginDisplayNameForUUID:(id)arg1 bundleId:(id*)arg2 ;
+(BOOL)deviceSupportsSecureDoubleClick;
+(BOOL)deviceHasSEP;
+(id)_callerUUID;
+(BOOL)callerIsAllowedNonUiExtension:(id)arg1 ;
+(id)callerDisplayNameWithPid:(int)arg1 auditToken:(SCD_Struct_Ca0)arg2 bundleId:(id*)arg3 ;
+(BOOL)deviceSupports3D;
+(id)queue;
+(id)_pluginDisplayNameForPID:(int)arg1 bundleId:(id*)arg2 ;
+(BOOL)deviceHasPearl;
-(NSObject*<OS_dispatch_queue>)serverQueue;
-(id)init;
@end

