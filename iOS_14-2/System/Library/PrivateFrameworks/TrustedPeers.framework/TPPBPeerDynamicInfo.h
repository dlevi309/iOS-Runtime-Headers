/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
*/

#import <TrustedPeers/TrustedPeers-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface TPPBPeerDynamicInfo : PBCodable <NSCopying> {

	unsigned long long _clock;
	NSMutableArray* _dispositions;
	NSMutableArray* _excludeds;
	NSMutableArray* _includeds;
	NSMutableArray* _preapprovals;
	SCD_Struct_TP3 _has;

}

@property (assign,nonatomic) BOOL hasClock; 
@property (assign,nonatomic) unsigned long long clock;                   //@synthesize clock=_clock - In the implementation block
@property (nonatomic,retain) NSMutableArray * includeds;                 //@synthesize includeds=_includeds - In the implementation block
@property (nonatomic,retain) NSMutableArray * excludeds;                 //@synthesize excludeds=_excludeds - In the implementation block
@property (nonatomic,retain) NSMutableArray * dispositions;              //@synthesize dispositions=_dispositions - In the implementation block
@property (nonatomic,retain) NSMutableArray * preapprovals;              //@synthesize preapprovals=_preapprovals - In the implementation block
+(Class)includedType;
+(Class)excludedType;
+(Class)dispositionsType;
+(Class)preapprovalsType;
-(unsigned long long)clock;
-(id)dictionaryRepresentation;
-(void)setClock:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSMutableArray *)dispositions;
-(void)setDispositions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)preapprovals;
-(void)setHasClock:(BOOL)arg1 ;
-(BOOL)hasClock;
-(void)clearIncludeds;
-(void)addIncluded:(id)arg1 ;
-(unsigned long long)includedsCount;
-(id)includedAtIndex:(unsigned long long)arg1 ;
-(void)clearExcludeds;
-(void)addExcluded:(id)arg1 ;
-(unsigned long long)excludedsCount;
-(id)excludedAtIndex:(unsigned long long)arg1 ;
-(void)clearDispositions;
-(void)addDispositions:(id)arg1 ;
-(unsigned long long)dispositionsCount;
-(id)dispositionsAtIndex:(unsigned long long)arg1 ;
-(void)clearPreapprovals;
-(void)addPreapprovals:(id)arg1 ;
-(unsigned long long)preapprovalsCount;
-(id)preapprovalsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)includeds;
-(void)setIncludeds:(NSMutableArray *)arg1 ;
-(NSMutableArray *)excludeds;
-(void)setExcludeds:(NSMutableArray *)arg1 ;
-(void)setPreapprovals:(NSMutableArray *)arg1 ;
@end

