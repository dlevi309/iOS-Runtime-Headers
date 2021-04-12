/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDSyncStore.h>

@class HDProfile, NSUUID, NSString;

@interface _HDStaticSyncStore : NSObject <HDSyncStore> {

	long long _syncProvenance;
	HDProfile* _profile;
	NSUUID* _storeIdentifier;

}

@property (nonatomic,copy,readonly) NSUUID * storeIdentifier;              //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,__weak,readonly) HDProfile * profile;                 //@synthesize profile=_profile - In the implementation block
@property (readonly) int protocolVersion; 
@property (readonly) long long syncStoreType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)protocolVersion;
-(NSString *)description;
-(id)orderedSyncEntities;
-(HDProfile *)profile;
-(id)syncStoreIdentifier;
-(NSUUID *)storeIdentifier;
-(id)databaseIdentifier;
-(BOOL)replacePersistedAnchorMap:(id)arg1 error:(id*)arg2 ;
-(long long)syncProvenance;
-(BOOL)supportsSpeculativeChangesForSyncEntityClass:(Class)arg1 ;
-(id)initWithProfile:(id)arg1 storeIdentifier:(id)arg2 error:(id*)arg3 ;
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
-(long long)syncStoreType;
@end

