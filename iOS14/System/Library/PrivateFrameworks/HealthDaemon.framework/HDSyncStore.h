/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDSyncStore <NSObject>
@property (readonly) int protocolVersion; 
@property (readonly) long long syncStoreType; 
@required
-(int)protocolVersion;
-(id)orderedSyncEntities;
-(id)profile;
-(id)syncStoreIdentifier;
-(id)databaseIdentifier;
-(long long)syncProvenance;
-(BOOL)supportsSpeculativeChangesForSyncEntityClass:(Class)arg1;
-(long long)syncEpoch;
-(id)syncStoreDefaultSourceBundleIdentifier;
-(id)syncEntityDependenciesForSyncEntity:(Class)arg1;
-(BOOL)canRecieveSyncObjectsForEntityClass:(Class)arg1;
-(BOOL)enforceSyncEntityOrdering;
-(BOOL)shouldContinueAfterAnchorValidationError:(id)arg1;
-(BOOL)shouldEnforceSequenceOrdering;
-(long long)expectedSequenceNumberForSyncEntityClass:(Class)arg1;
-(void)setExpectedSequenceNumber:(long long)arg1 forSyncEntityClass:(Class)arg2;
-(long long)syncStoreType;

@end

