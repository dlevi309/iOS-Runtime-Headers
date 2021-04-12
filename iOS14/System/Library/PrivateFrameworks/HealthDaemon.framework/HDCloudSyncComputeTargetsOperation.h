/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncOperation.h>

@interface HDCloudSyncComputeTargetsOperation : HDCloudSyncOperation
-(void)main;
-(id)_pushTargetsWithError:(id*)arg1 ;
-(id)_pullTargetsWithError:(id*)arg1 ;
-(BOOL)_isValidPushStoreRecord:(id)arg1 zone:(id)arg2 ownerIdentifier:(id)arg3 ;
-(id)_storeForStoreRecord:(id)arg1 zone:(id)arg2 error:(id*)arg3 ;
-(long long)_hasStateMismatchForStoreForStoreRecord:(id)arg1 zone:(id)arg2 error:(id*)arg3 ;
@end

