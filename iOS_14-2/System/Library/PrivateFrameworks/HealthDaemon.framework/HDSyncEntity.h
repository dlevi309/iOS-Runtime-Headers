/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDSyncEntity <NSObject>
@optional
+(long long)nextSyncAnchorWithSession:(id)arg1 predicate:(id)arg2 startSyncAnchor:(long long)arg3 profile:(id)arg4 error:(id*)arg5;
+(BOOL)supportsSyncStore:(id)arg1;
+(id)pruneSyncedObjectsThroughAnchor:(id)arg1 limit:(unsigned long long)arg2 nowDate:(id)arg3 profile:(id)arg4 error:(id*)arg5;
+(long long)nextSyncAnchorWithSession:(id)arg1 startSyncAnchor:(long long)arg2 profile:(id)arg3 error:(id*)arg4;
+(id)excludedSyncStoresForSession:(id)arg1;

@required
+(id)syncEntityDependenciesForSyncProtocolVersion:(int)arg1;
+(id)syncEntityIdentifier;
+(id)decodeSyncObjectWithData:(id)arg1;
+(long long)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+(BOOL)generateSyncObjectsForSession:(id)arg1 syncAnchorRange:(HDSyncAnchorRange)arg2 profile:(id)arg3 messageHandler:(id)arg4 error:(id*)arg5;

@end

