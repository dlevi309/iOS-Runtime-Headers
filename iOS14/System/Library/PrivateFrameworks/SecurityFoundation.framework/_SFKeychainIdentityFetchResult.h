/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/_SFKeychainFetchResult.h>

@class _SFIdentity;

@interface _SFKeychainIdentityFetchResult : _SFKeychainFetchResult {

	id _identityFetchResult;

}

@property (readonly) _SFIdentity * value; 
-(void)fetchValueWithAuthenticationContext:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
@end

