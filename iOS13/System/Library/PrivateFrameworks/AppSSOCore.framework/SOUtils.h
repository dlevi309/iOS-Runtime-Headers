/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
*/


#import <AppSSOCore/AppSSOCore-Structs.h>
@interface SOUtils : NSObject
+(BOOL)isInternalBuild;
+(id)mapArray:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
+(id)processNameForPID:(int)arg1 ;
+(int)mmapFile:(id)arg1 mode:(long long)arg2 mmapData:(id*)arg3 ;
+(void)unmapFile:(int)arg1 data:(id)arg2 ;
+(BOOL)checkEntitlementFromXPC:(id)arg1 ;
+(BOOL)currentProcessIsSandboxed;
+(BOOL)sandboxAllowsXPC:(const char*)arg1 ;
+(id)currentProcessContainerPath;
+(BOOL)isAppSSOServiceAvailable;
+(BOOL)auditTokenFromData:(id)arg1 auditToken:(SCD_Struct_SO0*)arg2 ;
+(int)pidFromAuditToken:(SCD_Struct_SO0)arg1 ;
+(id)bundleIdentifierFromAuditToken:(SCD_Struct_SO0)arg1 ;
+(id)currentProcessName;
+(BOOL)currentProcessInSystemSession;
+(id)signatureSetToString:(long long)arg1 ;
+(BOOL)checkSignatureOfFile:(id)arg1 teamIdentifier:(id*)arg2 trusted:(BOOL*)arg3 signedBySet:(long long*)arg4 certificates:(id*)arg5 error:(id*)arg6 ;
@end

