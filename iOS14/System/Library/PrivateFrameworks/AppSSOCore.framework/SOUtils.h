/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
*/


#import <AppSSOCore/AppSSOCore-Structs.h>
@interface SOUtils : NSObject
+(BOOL)isAppSSOServiceAvailable;
+(int)pidFromAuditToken:(SCD_Struct_SO0)arg1 ;
+(BOOL)auditTokenFromData:(id)arg1 auditToken:(SCD_Struct_SO0*)arg2 ;
+(BOOL)checkSignatureOfFile:(id)arg1 teamIdentifier:(id*)arg2 trusted:(BOOL*)arg3 signedBySet:(long long*)arg4 certificates:(id*)arg5 error:(id*)arg6 ;
+(id)bundleIdentifierFromAuditToken:(SCD_Struct_SO0)arg1 ;
+(id)currentProcessContainerPath;
+(void)unmapFile:(int)arg1 data:(id)arg2 ;
+(BOOL)currentProcessIsSandboxed;
+(BOOL)isInternalBuild;
+(int)mmapFile:(id)arg1 mode:(long long)arg2 mmapData:(id*)arg3 ;
+(BOOL)sandboxAllowsXPC:(const char*)arg1 ;
+(id)processNameForPID:(int)arg1 ;
+(id)signatureSetToString:(long long)arg1 ;
+(BOOL)currentProcessInSystemSession;
+(BOOL)checkEntitlementFromXPC:(id)arg1 ;
+(id)currentProcessName;
+(id)mapArray:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
+(id)teamIdentifierFromAuditToken:(SCD_Struct_SO0)arg1 ;
@end

