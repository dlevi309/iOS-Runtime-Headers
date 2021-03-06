/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncRecord.h>

@class HDCloudSyncCodableSequence, NSUUID, HDSyncAnchorMap, NSSet, CKRecordID;

@interface HDCloudSyncSequenceRecord : HDCloudSyncRecord {

	HDCloudSyncCodableSequence* _underlyingSequence;
	NSUUID* _storeIdentifier;

}

@property (nonatomic,copy,readonly) NSUUID * storeIdentifier;                      //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (nonatomic,readonly) int slot; 
@property (nonatomic,readonly) long long changeIndex; 
@property (nonatomic,readonly) long long baselineEpoch; 
@property (nonatomic,readonly) long long childRecordCount; 
@property (nonatomic,readonly) HDSyncAnchorMap * syncAnchorMap; 
@property (nonatomic,copy,readonly) NSSet * includedIdentifiers; 
@property (assign,nonatomic) int protocolVersion; 
@property (nonatomic,readonly) HDSyncAnchorMap * frozenSyncAnchorMap; 
@property (nonatomic,copy) CKRecordID * firstUnfrozenChangeRecord; 
+(id)recordType;
+(id)recordWithCKRecord:(id)arg1 error:(id*)arg2 ;
+(BOOL)requiresUnderlyingMessage;
+(BOOL)hasFutureSchema:(id)arg1 ;
+(id)recordIDWithOwnerIdentifier:(id)arg1 storeIdentifier:(id)arg2 zoneID:(id)arg3 sequenceSlot:(int)arg4 ;
+(id)recordIDWithIndividualZoneID:(id)arg1 sequenceSlot:(int)arg2 ;
+(id)_recordIDForStoreRecord:(id)arg1 slot:(int)arg2 ;
+(id)_recordNameForSequenceSlot:(int)arg1 ;
+(id)recordIDsWithIndividualZoneID:(id)arg1 ;
+(id)recordIDsForOwnerIdentifier:(id)arg1 storeIdentifier:(id)arg2 zoneID:(id)arg3 ;
+(BOOL)isSequenceRecord:(id)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(void)setProtocolVersion:(int)arg1 ;
-(BOOL)isActive;
-(int)protocolVersion;
-(id)description;
-(unsigned long long)hash;
-(int)slot;
-(NSUUID *)storeIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(id)serializeUnderlyingMessage;
-(id)initWithCKRecord:(id)arg1 schemaVersion:(long long)arg2 ;
-(void)incrementChildRecordCount;
-(long long)changeIndex;
-(long long)baselineEpoch;
-(HDSyncAnchorMap *)syncAnchorMap;
-(HDSyncAnchorMap *)frozenSyncAnchorMap;
-(CKRecordID *)firstUnfrozenChangeRecord;
-(void)setFirstUnfrozenChangeRecord:(CKRecordID *)arg1 ;
-(void)decrementChildRecordCount:(unsigned long long)arg1 ;
-(void)resetChangeIndex:(unsigned long long)arg1 ;
-(void)replaceSyncAnchorMapWithSyncAnchorMap:(id)arg1 ;
-(void)incrementChangeIndex;
-(void)updateSyncAnchorMapWithSyncAnchorMap:(id)arg1 ;
-(void)updateFrozenSyncAnchorMapWithSyncAnchorMap:(id)arg1 ;
-(id)initForSequenceSlot:(int)arg1 syncAnchorMap:(id)arg2 active:(BOOL)arg3 changeIndex:(unsigned long long)arg4 childRecordCount:(unsigned long long)arg5 baselineEpoch:(long long)arg6 includedIdentifiers:(id)arg7 protocolVersion:(int)arg8 storeRecordID:(id)arg9 record:(id)arg10 schemaVersion:(long long)arg11 ;
-(id)initWithCKRecord:(id)arg1 schemaVersion:(long long)arg2 underlyingSequence:(id)arg3 ;
-(long long)childRecordCount;
-(NSSet *)includedIdentifiers;
-(id)initForSequenceSlot:(int)arg1 syncAnchorMap:(id)arg2 changeIndex:(unsigned long long)arg3 baselineEpoch:(long long)arg4 includedIdentifiers:(id)arg5 storeRecord:(id)arg6 ;
-(void)_unitTest_setChildRecordCount:(unsigned long long)arg1 ;
@end

