/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDAuthorizationSyncEntity.h>

@interface HDAuthorizationBackupSyncEntity : HDAuthorizationSyncEntity
+(id)syncEntityIdentifier;
+(BOOL)supportsSyncStore:(id)arg1 ;
+(long long)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)generateSyncObjectsForSession:(id)arg1 syncAnchorRange:(HDSyncAnchorRange)arg2 profile:(id)arg3 messageHandler:(id)arg4 error:(id*)arg5 ;
+(id)excludedSyncStoresForSession:(id)arg1 ;
+(id)createCodableSourceAuthorizationWithSource:(id)arg1 syncSession:(id)arg2 ;
+(void)didGenerateCodableSourceAuthorizationsForSyncSession:(id)arg1 ;
+(id)_backupInfoWithSyncStore:(id)arg1 ;
+(void)_setBackupInfo:(id)arg1 ;
+(id)backupInfoUserDefaultsKey;
+(void)setAuthorizationBackupPushIdentifier:(id)arg1 syncStore:(id)arg2 ;
+(id)authorizationBackupPullIdentifierWithSyncStore:(id)arg1 ;
+(id)authorizationBackupPushIdentifierWithSyncStore:(id)arg1 ;
+(void)resetAuthorizationBackupIdentifiers;
@end

