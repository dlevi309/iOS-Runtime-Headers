/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <Foundation/NSError.h>

@interface PKCloudStoreError : NSError
+(id)errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 ;
+(BOOL)_isCloudKitErrorDomain:(id)arg1 ;
-(long long)_code;
-(id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 ;
-(id)initWithError:(id)arg1 ;
-(BOOL)isPCSError;
-(id)allZoneIDs;
-(id)_partialErrorsDictionary;
-(BOOL)isPartialError;
-(id)_allPartialErrors;
-(BOOL)isChangeTokenExpired;
-(BOOL)isZoneNotFoundError;
-(BOOL)isUnrecoverableDecryptionError;
-(BOOL)isManateeNotAvailableError;
-(BOOL)isKeychainSyncingInProgress;
-(id)_objectsOfClassTypeFromPartialErrors:(Class)arg1 ;
-(id)errorForPartialErrorWithObject:(id)arg1 ;
-(BOOL)isNetworkUnavailable;
-(BOOL)isUnknownItemError;
-(BOOL)isInitializationTimeOutError;
@end

