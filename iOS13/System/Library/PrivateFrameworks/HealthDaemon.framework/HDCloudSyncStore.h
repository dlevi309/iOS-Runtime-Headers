/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HDSyncStore.h>

@class NSUUID, NSString, HDProfile, HDSharingPredicate, CKRecordZoneID;

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
	CKRecordZoneID* _zoneID;

}

@property (nonatomic,retain) CKRecordZoneID * zoneID;                              //@synthesize zoneID=_zoneID - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * storeIdentifier;                      //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * ownerIdentifier;                    //@synthesize ownerIdentifier=_ownerIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * containerIdentifier;                //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL canPush;                                       //@synthesize canPush=_canPush - In the implementation block
@property (nonatomic,__weak,readonly) HDProfile * profile;                         //@synthesize profile=_profile - In the implementation block
@property (nonatomic,copy,readonly) NSString * sharingIdentifier;                  //@synthesize sharingIdentifier=_sharingIdentifier - In the implementation block
@property (nonatomic,readonly) HDSharingPredicate * sharingPredicate;              //@synthesize sharingPredicate=_sharingPredicate - In the implementation block
@property (nonatomic,readonly) BOOL syncTombstonesOnly;                            //@synthesize syncTombstonesOnly=_syncTombstonesOnly - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) int protocolVersion; 
@property (readonly) long long syncStoreType; 
+(id)syncStoreForProfile:(id)arg1 storeIdentifier:(id)arg2 syncCircleName:(id)arg3 ownerIdentifier:(id)arg4 containerIdentifier:(id)arg5 error:(id*)arg6 ;
+(void)samplesDeletedInProfile:(id)arg1 byUser:(BOOL)arg2 ;
+(id)syncStoreForProfile:(id)arg1 storeIdentifier:(id)arg2 syncCircleName:(id)arg3 ownerIdentifier:(id)arg4 containerIdentifier:(id)arg5 sharingIdentifier:(id)arg6 predicate:(id)arg7 error:(id*)arg8 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)containerIdentifier;
-(CKRecordZoneID *)zoneID;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
-(HDProfile *)profile;
-(NSUUID *)storeIdentifier;
-(NSString *)ownerIdentifier;
-(int)protocolVersion;
-(id)syncStoreIdentifier;
-(id)databaseIdentifier;
-(long long)syncStoreType;
-(long long)syncProvenance;
-(id)orderedSyncEntities;
-(BOOL)supportsSpeculativeChangesForSyncEntityClass:(Class)arg1 ;
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
-(id)persistedStateWithError:(id*)arg1 ;
-(BOOL)persistState:(id)arg1 error:(id*)arg2 ;
-(id)initWithProfile:(id)arg1 storeIdentifier:(id)arg2 syncCircleName:(id)arg3 ownerIdentifier:(id)arg4 containerIdentifier:(id)arg5 sharingIdentifier:(id)arg6 predicate:(id)arg7 error:(id*)arg8 ;
-(id)syncStoreForEpoch:(long long)arg1 ;
-(id)syncStoreForProtocolVersion:(int)arg1 ;
-(id)syncStoreForTombstoneSyncOnly:(BOOL)arg1 ;
-(id)receivedSyncAnchorMapWithError:(id*)arg1 ;
-(BOOL)clearAllSyncAnchorsWithError:(id*)arg1 ;
-(id)getPersistedAnchorMapWithError:(id*)arg1 ;
-(BOOL)replaceFrozenAnchorMap:(id)arg1 updateDate:(id)arg2 error:(id*)arg3 ;
-(BOOL)canPush;
-(NSString *)sharingIdentifier;
-(HDSharingPredicate *)sharingPredicate;
-(BOOL)syncTombstonesOnly;
@end

