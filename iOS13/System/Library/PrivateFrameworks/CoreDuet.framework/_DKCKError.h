/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@interface _DKCKError : NSObject
+(BOOL)isShouldDeferError:(id)arg1 ;
+(BOOL)isUnrecoverableDecryptionError:(id)arg1 ;
+(id)zoneIDsWithUnrecoverableDecryptionError:(id)arg1 ;
+(id)errorMinusUnrecoverableDecryptionErrorsFromPartialError:(id)arg1 ;
+(BOOL)isIgnorableError:(id)arg1 ;
+(BOOL)isChangeTokenExpiredError:(id)arg1 ;
+(BOOL)isOperationCancelledError:(id)arg1 ;
+(BOOL)isPartialError:(id)arg1 ;
+(id)_allPartialErrorsFromError:(id)arg1 ;
+(void)_populateZoneIDs:(id)arg1 fromUnrecoverableDecryptionError:(id)arg2 zoneID:(id)arg3 ;
+(BOOL)isManateeNotAvailableError:(id)arg1 ;
+(BOOL)isKeychainSyncingInProgressError:(id)arg1 ;
+(BOOL)isPCSError:(id)arg1 ;
+(BOOL)isNetworkUnavailableError:(id)arg1 ;
@end

