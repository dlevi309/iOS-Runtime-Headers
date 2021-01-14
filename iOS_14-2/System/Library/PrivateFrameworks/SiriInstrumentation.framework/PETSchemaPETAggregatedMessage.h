/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class PETSchemaPETAggregationKey, PETSchemaPETDistribution, NSData;

@interface PETSchemaPETAggregatedMessage : PBCodable {

	PETSchemaPETAggregationKey* _key;
	unsigned _count;
	PETSchemaPETDistribution* _distribution;
	SCD_Struct_SI1 _has;
	BOOL _hasKey;
	BOOL _hasDistribution;

}

@property (nonatomic,retain) PETSchemaPETAggregationKey * key;                     //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasKey;                                          //@synthesize hasKey=_hasKey - In the implementation block
@property (assign,nonatomic) unsigned count;                                       //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) BOOL hasCount; 
@property (nonatomic,retain) PETSchemaPETDistribution * distribution;              //@synthesize distribution=_distribution - In the implementation block
@property (assign,nonatomic) BOOL hasDistribution;                                 //@synthesize hasDistribution=_hasDistribution - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(void)setDistribution:(PETSchemaPETDistribution *)arg1 ;
-(PETSchemaPETDistribution *)distribution;
-(BOOL)hasKey;
-(id)dictionaryRepresentation;
-(void)setCount:(unsigned)arg1 ;
-(NSData *)jsonData;
-(unsigned)count;
-(id)initWithDictionary:(id)arg1 ;
-(void)setHasCount:(BOOL)arg1 ;
-(BOOL)hasCount;
-(BOOL)hasDistribution;
-(PETSchemaPETAggregationKey *)key;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasKey:(BOOL)arg1 ;
-(void)setKey:(PETSchemaPETAggregationKey *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasDistribution:(BOOL)arg1 ;
@end

