/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncRecord.h>

@class HDSyncAnchorMap, NSSet, CKRecordID;

@interface HDCloudSyncSequenceRecord : HDCloudSyncRecord {

	BOOL _active;
	int _protocolVersion;
	unsigned long long _changeIndex;
	long long _baselineEpoch;
	unsigned long long _childRecordCount;
	HDSyncAnchorMap* _syncAnchorMap;
	NSSet* _includedIdentifiers;
	long long _slot;

}

@property (assign,nonatomic) long long slot;                                       //@synthesize slot=_slot - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                          //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) unsigned long long changeIndex;                     //@synthesize changeIndex=_changeIndex - In the implementation block
@property (nonatomic,readonly) long long baselineEpoch;                            //@synthesize baselineEpoch=_baselineEpoch - In the implementation block
@property (nonatomic,readonly) unsigned long long childRecordCount;                //@synthesize childRecordCount=_childRecordCount - In the implementation block
@property (nonatomic,readonly) HDSyncAnchorMap * syncAnchorMap;                    //@synthesize syncAnchorMap=_syncAnchorMap - In the implementation block
@property (nonatomic,copy,readonly) NSSet * includedIdentifiers;                   //@synthesize includedIdentifiers=_includedIdentifiers - In the implementation block
@property (nonatomic,readonly) int protocolVersion;                                //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (nonatomic,readonly) HDSyncAnchorMap * frozenSyncAnchorMap; 
@property (nonatomic,copy) CKRecordID * firstUnfrozenChangeRecord; 
+(id)recordWithCKRecord:(id)arg1 error:(id*)arg2 ;
+(BOOL)hasFutureSchema:(id)arg1 ;
+(id)recordIDsWithZoneID:(id)arg1 ;
+(id)recordIDWithZoneID:(id)arg1 sequenceSlot:(long long)arg2 ;
+(id)_recordNameForSequenceSlot:(long long)arg1 ;
+(BOOL)isSequenceRecord:(id)arg1 ;
+(BOOL)isSequenceRecordID:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(long long)slot;
-(void)setSlot:(long long)arg1 ;
-(int)protocolVersion;
-(void)setProtocolVersion:(int)arg1 ;
-(long long)baselineEpoch;
-(id)initForSequenceSlot:(long long)arg1 syncAnchorMap:(id)arg2 changeIndex:(unsigned long long)arg3 baselineEpoch:(long long)arg4 includedIdentifiers:(id)arg5 storeRecord:(id)arg6 ;
-(unsigned long long)changeIndex;
-(id)initForSequenceSlot:(long long)arg1 syncAnchorMap:(id)arg2 active:(BOOL)arg3 changeIndex:(unsigned long long)arg4 childRecordCount:(unsigned long long)arg5 baselineEpoch:(long long)arg6 includedIdentifiers:(id)arg7 protocolVersion:(int)arg8 storeRecordID:(id)arg9 record:(id)arg10 schemaVersion:(long long)arg11 ;
-(HDSyncAnchorMap *)syncAnchorMap;
-(unsigned long long)childRecordCount;
-(NSSet *)includedIdentifiers;
-(HDSyncAnchorMap *)frozenSyncAnchorMap;
-(CKRecordID *)firstUnfrozenChangeRecord;
-(void)setFirstUnfrozenChangeRecord:(CKRecordID *)arg1 ;
-(void)incrementChangeIndex;
-(void)resetChangeIndex:(unsigned long long)arg1 ;
-(void)updateSyncAnchorMapWithSyncAnchorMap:(id)arg1 ;
-(void)replaceSyncAnchorMapWithSyncAnchorMap:(id)arg1 ;
-(void)updateFrozenSyncAnchorMapWithSyncAnchorMap:(id)arg1 ;
-(void)incrementChildRecordCount;
-(void)decrementChildRecordCount:(unsigned long long)arg1 ;
-(void)_unitTest_setChildRecordCount:(unsigned long long)arg1 ;
@end

