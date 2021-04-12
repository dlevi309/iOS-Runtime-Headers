/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
*/

#import <ProactiveEventTracker/ProactiveEventTracker-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PETDistribution, PETAggregationKey;

@interface PETAggregatedMessage : PBCodable <NSCopying> {

	unsigned _count;
	PETDistribution* _distribution;
	PETAggregationKey* _key;
	SCD_Struct_PE7 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) PETAggregationKey * key;                     //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned count;                              //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) BOOL hasDistribution; 
@property (nonatomic,retain) PETDistribution * distribution;              //@synthesize distribution=_distribution - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)count;
-(PETAggregationKey *)key;
-(void)setCount:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(void)setKey:(PETAggregationKey *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDistribution:(PETDistribution *)arg1 ;
-(PETDistribution *)distribution;
-(BOOL)hasKey;
-(void)setHasCount:(BOOL)arg1 ;
-(BOOL)hasCount;
-(BOOL)hasDistribution;
@end

