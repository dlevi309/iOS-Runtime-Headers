/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/_SFKeychainFetchResult.h>

@class SFKeychainData;

@interface SFKeychainDataFetchResult : _SFKeychainFetchResult {

	id _dataFetchResult;

}

@property (readonly) SFKeychainData * value; 
-(void)fetchValueWithAuthenticationContext:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
@end

