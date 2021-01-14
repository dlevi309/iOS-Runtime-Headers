/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableSyncAnchorRangeMap;

@interface HDCloudSyncCodableChange : PBCodable <NSCopying> {

	long long _changeIndex;
	long long _changeSize;
	long long _protocolVersion;
	HDCodableSyncAnchorRangeMap* _anchorRangeMap;
	BOOL _finalForSequence;
	SCD_Struct_HD10 _has;

}

@property (nonatomic,readonly) BOOL hasAnchorRangeMap; 
@property (nonatomic,retain) HDCodableSyncAnchorRangeMap * anchorRangeMap;              //@synthesize anchorRangeMap=_anchorRangeMap - In the implementation block
@property (assign,nonatomic) BOOL hasProtocolVersion; 
@property (assign,nonatomic) long long protocolVersion;                                 //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (assign,nonatomic) BOOL hasChangeSize; 
@property (assign,nonatomic) long long changeSize;                                      //@synthesize changeSize=_changeSize - In the implementation block
@property (assign,nonatomic) BOOL hasChangeIndex; 
@property (assign,nonatomic) long long changeIndex;                                     //@synthesize changeIndex=_changeIndex - In the implementation block
@property (assign,nonatomic) BOOL hasFinalForSequence; 
@property (assign,nonatomic) BOOL finalForSequence;                                     //@synthesize finalForSequence=_finalForSequence - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHasProtocolVersion:(BOOL)arg1 ;
-(void)setProtocolVersion:(long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(long long)protocolVersion;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasProtocolVersion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)changeIndex;
-(void)setChangeIndex:(long long)arg1 ;
-(void)setFinalForSequence:(BOOL)arg1 ;
-(void)setAnchorRangeMap:(HDCodableSyncAnchorRangeMap *)arg1 ;
-(void)setChangeSize:(long long)arg1 ;
-(long long)changeSize;
-(BOOL)finalForSequence;
-(HDCodableSyncAnchorRangeMap *)anchorRangeMap;
-(void)setHasChangeIndex:(BOOL)arg1 ;
-(BOOL)hasChangeIndex;
-(BOOL)hasAnchorRangeMap;
-(void)setHasChangeSize:(BOOL)arg1 ;
-(BOOL)hasChangeSize;
-(void)setHasFinalForSequence:(BOOL)arg1 ;
-(BOOL)hasFinalForSequence;
@end

