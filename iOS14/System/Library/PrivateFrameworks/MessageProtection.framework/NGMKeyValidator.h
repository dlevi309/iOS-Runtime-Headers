/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
*/


#import <MessageProtection/MessageProtection-Structs.h>
@interface NGMKeyValidator : NSObject
+(id)keyValidatorWithReceiversIdentity:(id)arg1 sendersIdentity:(id)arg2 ;
+(BOOL)isValidKeyValidator:(id)arg1 receiversIdentity:(id)arg2 sendersIdentity:(id)arg3 error:(id*)arg4 ;
+(NSRange)rangeOnPublicKey;
+(id)versionByte;
+(unsigned long long)validatorLength;
@end

