/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOTrafficProbeFlow : PBCodable <NSCopying> {

	unsigned _aggregationCount;
	unsigned _aggregationWindowSeconds;
	unsigned _partialTraversalAggregationCount;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasAggregationCount; 
@property (assign,nonatomic) unsigned aggregationCount; 
@property (assign,nonatomic) BOOL hasAggregationWindowSeconds; 
@property (assign,nonatomic) unsigned aggregationWindowSeconds; 
@property (assign,nonatomic) BOOL hasPartialTraversalAggregationCount; 
@property (assign,nonatomic) unsigned partialTraversalAggregationCount; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setAggregationCount:(unsigned)arg1 ;
-(void)setAggregationWindowSeconds:(unsigned)arg1 ;
-(void)setPartialTraversalAggregationCount:(unsigned)arg1 ;
-(unsigned)aggregationCount;
-(void)setHasAggregationCount:(BOOL)arg1 ;
-(BOOL)hasAggregationCount;
-(unsigned)aggregationWindowSeconds;
-(void)setHasAggregationWindowSeconds:(BOOL)arg1 ;
-(BOOL)hasAggregationWindowSeconds;
-(unsigned)partialTraversalAggregationCount;
-(void)setHasPartialTraversalAggregationCount:(BOOL)arg1 ;
-(BOOL)hasPartialTraversalAggregationCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

