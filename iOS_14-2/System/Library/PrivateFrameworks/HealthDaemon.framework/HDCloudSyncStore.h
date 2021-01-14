/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HDSyncStore.h>

@class NSUUID, NSString, HDProfile, HDSharingPredicate;

@interface HDCloudSyncStore : NSObject <NSCopying, HDSyncStore> {

	long long _syncProvenance;
	long long _syncEpoch;
	int _syncProtocolVersion;
	BOOL _canPush;
	BOOL _syncTombstonesOnly;
	NSUUID* _storeIdentifier;
	NSString* _ownerIdentifier;
	NSString* _containerIdentifier;
	HDProfile* _profile;
	NSString* _sharingIdentifier;
	HDSharingPredicate* _sharingPredicate;

}

@property (nonatomic,copy,readonly) NSUUID * storeIdentifier;                      //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * ownerIdentifier;                    //@synthesize ownerIdentifier=_ownerIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * containerIdentifier;                //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL canPush;                                       //@synthesize canPush=_canPush - In the implementation block
@property (nonatomic,__weak,readonly) HDProfile * profile;                         //@synthesize profile=_profile - In the implementation block
@property (nonatomic,copy,readonly) NSString * sharingIdentifier;                  //@synthesize sharingIdentifier=_sharingIdentifier - In the implementation block
@property (nonatomic,readonly) HDSharingPredicate * sharingPredicate;              //@synthesize sharingPredicate=_sharingPredicate - In the implementation block
@property (nonatomic,readonly) BOOL syncTombstonesOnly;                            //@synthesize syncTombstonesOnly=_syncTombstonesOnly - In the implementation block
@property (readonly) int protocolVersion; 
@property (readonly) long long syncStoreType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)samplesDeletedInProfile:(id)arg1 byUser:(BOOL)arg2 ;
+(id)syncStoreForProfile:(id)arg1 storeIdentifier:(id)arg2 syncCircleName:(id)arg3 ownerIdentifier:(id)arg4 containerIdentifier:(id)arg5 error:(id*)arg6 ;
+(id)syncStoreForProfile:(id)arg1 storeIdentifier:(id)arg2 syncCircleName:(id)arg3 ownerIdentifier:(id)arg4 containerIdentifier:(id)arg5 sharingIdentifier:(id)arg6 predicate:(id)arg7 error:(id*)arg8 ;
-(int)protocolVersion;
-(NSString *)containerIdentifier;
-(NSString *)description;
-(id)orderedSyncEntities;
-(HDProfile *)profile;
-(id)syncStoreIdentifier;
-(NSString *)ownerIdentifier;
-(BOOL)canPush;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSUUID *)storeIdentifier;
-(NSString *)sharingIdentifier;
-(id)databaseIdentifier;
-(id)syncStoreForEpoch:(long long)arg1 ;
-(id)syncStoreForTombstoneSyncOnly:(BOOL)arg1 ;
-(BOOL)replacePersistedAnchorMap:(id)arg1 error:(id*)arg2 ;
-(BOOL)replaceFrozenAnchorMap:(id)arg1 updateDate:(id)arg2 error:(id*)arg3 ;
-(id)persistedStateWithError:(id*)arg1 ;
-(BOOL)persistState:(id)arg1 error:(id*)arg2 ;
-(long long)syncProvenance;
-(BOOL)supportsSpeculativeChangesForSyncEntityClass:(Class)arg1 ;
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
-(id)getPersistedAnchorMapWithError:(id*)arg1 ;
-(id)syncStoreForProtocolVersion:(int)arg1 ;
-(BOOL)clearAllSyncAnchorsWithError:(id*)arg1 ;
-(id)initWithProfile:(id)arg1 storeIdentifier:(id)arg2 syncCircleName:(id)arg3 ownerIdentifier:(id)arg4 containerIdentifier:(id)arg5 sharingIdentifier:(id)arg6 predicate:(id)arg7 error:(id*)arg8 ;
-(id)receivedSyncAnchorMapWithError:(id*)arg1 ;
-(id)_syncAnchorMapByStrippingBlacklistedEntities:(id)arg1 ;
-(HDSharingPredicate *)sharingPredicate;
-(BOOL)syncTombstonesOnly;
@end

