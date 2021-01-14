/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


#import <AppleMediaServices/AppleMediaServices-Structs.h>
@interface AMSBiometrics : NSObject
+(id)disableForAccount:(id)arg1 ;
+(id)resumptionHeadersFromRequest:(id)arg1 ;
+(void)saveIdentityMap;
+(BOOL)isActionSupported:(long long)arg1 withAccessControl:(SecAccessControlRef)arg2 ;
+(id)_stateHeaderValueForAccount:(id)arg1 ;
+(id)headersWithAccount:(id)arg1 options:(id)arg2 signatureResult:(id)arg3 ;
+(id)setState:(long long)arg1 forAccount:(id)arg2 ;
+(id)identityMap;
+(id)signChallenge:(id)arg1 withAccount:(id)arg2 clientInfo:(id)arg3 options:(id)arg4 ;
+(long long)deviceState;
+(BOOL)_shouldAddBiometricHeader;
+(long long)type;
+(BOOL)isAvailableForAccount:(id)arg1 ;
+(id)handleResponse:(id)arg1 session:(id)arg2 taskInfo:(id)arg3 ;
+(long long)stateForAccount:(id)arg1 ;
+(BOOL)_deleteKeysWithOptions:(id)arg1 error:(id*)arg2 ;
+(BOOL)isActionSupported:(long long)arg1 withConstraints:(id)arg2 ;
+(BOOL)deleteKeysWithError:(id*)arg1 ;
+(id)minimumACLVersionForAction:(long long)arg1 ;
+(BOOL)isIdentityMapValid;
+(void)setDeviceState:(long long)arg1 ;
+(id)ACLVersionForConstraints:(id)arg1 ;
+(id)ACLVersionForAccessControl:(SecAccessControlRef)arg1 ;
@end

