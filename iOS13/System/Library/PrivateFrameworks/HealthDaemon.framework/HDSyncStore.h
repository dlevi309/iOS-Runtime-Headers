/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDSyncStore <NSObject>
@property (readonly) int protocolVersion; 
@property (readonly) long long syncStoreType; 
@required
-(id)profile;
-(int)protocolVersion;
-(id)syncStoreIdentifier;
-(id)databaseIdentifier;
-(long long)syncStoreType;
-(long long)syncProvenance;
-(id)orderedSyncEntities;
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

@end

