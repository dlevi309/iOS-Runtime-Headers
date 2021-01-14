/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_PE5 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) PETAggregationKey * key;                     //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned count;                              //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) BOOL hasDistribution; 
@property (nonatomic,retain) PETDistribution * distribution;              //@synthesize distribution=_distribution - In the implementation block
-(void)setDistribution:(PETDistribution *)arg1 ;
-(PETDistribution *)distribution;
-(BOOL)hasKey;
-(id)dictionaryRepresentation;
-(void)setCount:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)count;
-(void)setHasCount:(BOOL)arg1 ;
-(id)description;
-(BOOL)hasCount;
-(BOOL)hasDistribution;
-(PETAggregationKey *)key;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(PETAggregationKey *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

