/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableSyncAnchorRangeMap, NSMutableArray;

@interface HDCloudSyncCodableSequence : PBCodable <NSCopying> {

	long long _changeIndex;
	long long _childRecordCount;
	long long _epoch;
	long long _protocolVersion;
	HDCodableSyncAnchorRangeMap* _anchorMap;
	HDCodableSyncAnchorRangeMap* _frozenAnchorMap;
	NSMutableArray* _includedStoreIdentifiers;
	int _slot;
	NSMutableArray* _unfrozenChangeRecordNames;
	BOOL _active;
	SCD_Struct_HD23 _has;

}

@property (assign,nonatomic) BOOL hasSlot; 
@property (assign,nonatomic) int slot;                                                   //@synthesize slot=_slot - In the implementation block
@property (assign,nonatomic) BOOL hasActive; 
@property (assign,nonatomic) BOOL active;                                                //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) BOOL hasEpoch; 
@property (assign,nonatomic) long long epoch;                                            //@synthesize epoch=_epoch - In the implementation block
@property (nonatomic,retain) NSMutableArray * includedStoreIdentifiers;                  //@synthesize includedStoreIdentifiers=_includedStoreIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL hasProtocolVersion; 
@property (assign,nonatomic) long long protocolVersion;                                  //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasAnchorMap; 
@property (nonatomic,retain) HDCodableSyncAnchorRangeMap * anchorMap;                    //@synthesize anchorMap=_anchorMap - In the implementation block
@property (nonatomic,readonly) BOOL hasFrozenAnchorMap; 
@property (nonatomic,retain) HDCodableSyncAnchorRangeMap * frozenAnchorMap;              //@synthesize frozenAnchorMap=_frozenAnchorMap - In the implementation block
@property (assign,nonatomic) BOOL hasChangeIndex; 
@property (assign,nonatomic) long long changeIndex;                                      //@synthesize changeIndex=_changeIndex - In the implementation block
@property (assign,nonatomic) BOOL hasChildRecordCount; 
@property (assign,nonatomic) long long childRecordCount;                                 //@synthesize childRecordCount=_childRecordCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * unfrozenChangeRecordNames;                 //@synthesize unfrozenChangeRecordNames=_unfrozenChangeRecordNames - In the implementation block
+(Class)includedStoreIdentifiersType;
+(Class)unfrozenChangeRecordNamesType;
-(id)dictionaryRepresentation;
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(long long)epoch;
-(void)setHasProtocolVersion:(BOOL)arg1 ;
-(void)setProtocolVersion:(long long)arg1 ;
-(void)setHasEpoch:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(long long)protocolVersion;
-(BOOL)hasActive;
-(void)setHasActive:(BOOL)arg1 ;
-(BOOL)hasEpoch;
-(id)description;
-(void)setSlot:(int)arg1 ;
-(BOOL)hasSlot;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setEpoch:(long long)arg1 ;
-(BOOL)hasProtocolVersion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)slot;
-(BOOL)isEqual:(id)arg1 ;
-(long long)changeIndex;
-(void)setChangeIndex:(long long)arg1 ;
-(void)setChildRecordCount:(long long)arg1 ;
-(void)setAnchorMap:(HDCodableSyncAnchorRangeMap *)arg1 ;
-(void)setIncludedStoreIdentifiers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)includedStoreIdentifiers;
-(long long)childRecordCount;
-(HDCodableSyncAnchorRangeMap *)anchorMap;
-(void)setFrozenAnchorMap:(HDCodableSyncAnchorRangeMap *)arg1 ;
-(void)setUnfrozenChangeRecordNames:(NSMutableArray *)arg1 ;
-(BOOL)hasFrozenAnchorMap;
-(HDCodableSyncAnchorRangeMap *)frozenAnchorMap;
-(NSMutableArray *)unfrozenChangeRecordNames;
-(void)addIncludedStoreIdentifiers:(id)arg1 ;
-(void)addUnfrozenChangeRecordNames:(id)arg1 ;
-(unsigned long long)includedStoreIdentifiersCount;
-(void)clearIncludedStoreIdentifiers;
-(id)includedStoreIdentifiersAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)unfrozenChangeRecordNamesCount;
-(void)clearUnfrozenChangeRecordNames;
-(id)unfrozenChangeRecordNamesAtIndex:(unsigned long long)arg1 ;
-(void)setHasSlot:(BOOL)arg1 ;
-(id)slotAsString:(int)arg1 ;
-(int)StringAsSlot:(id)arg1 ;
-(BOOL)hasAnchorMap;
-(void)setHasChangeIndex:(BOOL)arg1 ;
-(BOOL)hasChangeIndex;
-(void)setHasChildRecordCount:(BOOL)arg1 ;
-(BOOL)hasChildRecordCount;
@end

