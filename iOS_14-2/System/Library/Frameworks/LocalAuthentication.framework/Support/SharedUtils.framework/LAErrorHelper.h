/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
*/


@interface LAErrorHelper : NSObject
+(id)errorWithCode:(long long)arg1 userInfo:(id)arg2 ;
+(id)internalErrorWithMessage:(id)arg1 ;
+(BOOL)error:(id)arg1 hasCode:(long long)arg2 ;
+(void)raiseExceptionOnError:(id)arg1 ;
+(id)errorWithCode:(long long)arg1 message:(id)arg2 moreInfo:(id)arg3 ;
+(id)storageErrorWithCode:(long long)arg1 message:(id)arg2 suberror:(id)arg3 ;
+(id)parameterErrorWithMessage:(id)arg1 ;
+(id)storageErrorWithCode:(long long)arg1 message:(id)arg2 ;
+(BOOL)error:(id)arg1 hasCode:(long long)arg2 subcode:(long long)arg3 ;
+(id)parameterErrorForMissingOrInvalidObject:(id)arg1 name:(const char*)arg2 ;
+(id)errorWithCode:(long long)arg1 message:(id)arg2 ;
+(id)silentInternalErrorWithMessage:(id)arg1 ;
+(id)errorWithCode:(long long)arg1 subcode:(long long)arg2 message:(id)arg3 ;
+(id)errorWithCode:(long long)arg1 message:(id)arg2 suberror:(id)arg3 ;
+(id)errorNotSupported;
+(id)errorWithCode:(long long)arg1 ;
+(BOOL)storageError:(id)arg1 hasCode:(long long)arg2 ;
+(id)missingEntitlementError:(id)arg1 ;
@end

