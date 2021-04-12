/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
*/


#import <AppSSOKerberos/AppSSOKerberos-Structs.h>
@interface SOKeychainHelper : NSObject
+(SecIdentityRef)identityForUUIDString:(id)arg1 ;
+(int)addCredentialsToKeychainWithService:(id)arg1 withUsername:(id)arg2 withPassword:(id)arg3 requireUserPresence:(BOOL)arg4 ;
+(int)retrieveCredentialsFromKeychainWithService:(id)arg1 returnedUsername:(id*)arg2 returnedPassword:(id*)arg3 ;
+(int)removeCredentialsFromKeychainWithService:(id)arg1 ;
@end

