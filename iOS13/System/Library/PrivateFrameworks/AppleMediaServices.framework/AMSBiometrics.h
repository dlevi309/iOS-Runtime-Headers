/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


#import <AppleMediaServices/AppleMediaServices-Structs.h>
@interface AMSBiometrics : NSObject
+(long long)type;
+(long long)state;
+(long long)deviceState;
+(id)setState:(long long)arg1 forAccount:(id)arg2 ;
+(BOOL)deleteKeysWithError:(id*)arg1 ;
+(id)ACLVersionForConstraints:(id)arg1 ;
+(BOOL)isActionSupported:(long long)arg1 withConstraints:(id)arg2 ;
+(id)minimumACLVersionForAction:(long long)arg1 ;
+(BOOL)_deleteKeysWithOptions:(id)arg1 error:(id*)arg2 ;
+(id)signChallenge:(id)arg1 withAccount:(id)arg2 clientInfo:(id)arg3 options:(id)arg4 ;
+(id)_stateHeaderValueForAccount:(id)arg1 ;
+(long long)stateForAccount:(id)arg1 ;
+(void)setDeviceState:(long long)arg1 ;
+(id)ACLVersionForAccessControl:(SecAccessControlRef)arg1 ;
+(id)disableForAccount:(id)arg1 ;
+(id)handleResponse:(id)arg1 session:(id)arg2 taskInfo:(id)arg3 shouldFallbackToPassword:(BOOL*)arg4 ;
+(id)headersWithAccount:(id)arg1 options:(id)arg2 signatureResult:(id)arg3 ;
+(BOOL)isActionSupported:(long long)arg1 withAccessControl:(SecAccessControlRef)arg2 ;
@end

