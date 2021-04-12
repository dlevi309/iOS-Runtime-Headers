/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/_SFKeychainFetchResult.h>

@class _SFSymmetricKey;

@interface _SFKeychainKeyFetchResult : _SFKeychainFetchResult {

	id _keyFetchResult;

}

@property (readonly) _SFSymmetricKey * value; 
-(void)fetchValueWithAuthenticationContext:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
@end

