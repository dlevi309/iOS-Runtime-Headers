/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
*/


#import <SharedUtils/SharedUtils-Structs.h>
@interface LAUtils : NSObject
+(id)auditTokenToData:(SCD_Struct_LA2)arg1 ;
+(BOOL)isDaytona;
+(BOOL)isBiometricOnlyPolicy:(long long)arg1 ;
+(BOOL)isApplePayPolicy:(long long)arg1 ;
+(void*)_loadCTK;
+(id)truncateString:(id)arg1 maxLength:(long long)arg2 ;
+(BOOL)callerRunningOnForeground:(id)arg1 ;
+(BOOL)isMultiUser;
+(Class)ctkClassFromString:(id)arg1 ;
+(BOOL)isApplePayPolicy:(long long)arg1 inApp:(BOOL)arg2 ;
@end

