/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <Foundation/NSError.h>

@interface PKCloudStoreError : NSError
+(id)errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 ;
+(BOOL)_isCloudKitErrorDomain:(id)arg1 ;
-(id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 ;
-(long long)_code;
-(id)initWithError:(id)arg1 ;
-(BOOL)isPartialError;
-(id)_allPartialErrors;
-(BOOL)isZoneNotFoundError;
-(BOOL)isUnrecoverableDecryptionError;
-(BOOL)isManateeNotAvailableError;
-(BOOL)isKeychainSyncingInProgress;
-(BOOL)isPCSError;
-(BOOL)isChangeTokenExpired;
-(BOOL)isNetworkUnavailable;
-(BOOL)isInitializationTimeOutError;
@end

