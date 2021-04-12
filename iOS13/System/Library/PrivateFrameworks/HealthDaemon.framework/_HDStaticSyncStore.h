/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDSyncStore.h>

@class HDProfile, NSUUID, NSString;

@interface _HDStaticSyncStore : NSObject <HDSyncStore> {

	long long _syncProvenance;
	HDProfile* _profile;
	NSUUID* _storeIdentifier;

}

@property (nonatomic,__weak,readonly) HDProfile * profile;                 //@synthesize profile=_profile - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * storeIdentifier;              //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) int protocolVersion; 
@property (readonly) long long syncStoreType; 
-(NSString *)description;
-(HDProfile *)profile;
-(NSUUID *)storeIdentifier;
-(int)protocolVersion;
-(id)syncStoreIdentifier;
-(id)databaseIdentifier;
-(long long)syncStoreType;
-(long long)syncProvenance;
-(id)orderedSyncEntities;
-(BOOL)supportsSpeculativeChangesForSyncEntityClass:(Class)arg1 ;
-(id)initWithProfile:(id)arg1 storeIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)replacePersistedAnchorMap:(id)arg1 error:(id*)arg2 ;
-(BOOL)resetReceivedSyncAnchorMapWithError:(id*)arg1 ;
-(long long)syncEpoch;
-(id)syncStoreDefaultSourceBundleIdentifier;
-(id)syncEntityDependenciesForSyncEntity:(Class)arg1 ;
-(BOOL)canRecieveSyncObjectsForEntityClass:(Class)arg1 ;
-(BOOL)enforceSyncEntityOrdering;
-(BOOL)shouldContinueAfterAnchorValidationError:(id)arg1 ;
-(BOOL)shouldEnforceSequenceOrdering;
-(long long)expectedSequenceNumberForSyncEntityClass:(Class)arg1 ;
-(void)setExpectedSequenceNumber:(long long)arg1 forSyncEntityClass:(Class)arg2 ;
@end

