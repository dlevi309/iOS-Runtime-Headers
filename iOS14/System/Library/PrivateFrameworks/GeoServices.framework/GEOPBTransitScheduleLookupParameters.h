/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSData;

@interface GEOPBTransitScheduleLookupParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _lineId;
	unsigned long long _referenceTripId;
	NSData* _routingParameters;
	unsigned long long _transitId;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasLineId; 
@property (assign,nonatomic) unsigned long long lineId; 
@property (assign,nonatomic) BOOL hasTransitId; 
@property (assign,nonatomic) unsigned long long transitId; 
@property (assign,nonatomic) BOOL hasReferenceTripId; 
@property (assign,nonatomic) unsigned long long referenceTripId; 
@property (nonatomic,readonly) BOOL hasRoutingParameters; 
@property (nonatomic,retain) NSData * routingParameters; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(unsigned long long)lineId;
-(void)setReferenceTripId:(unsigned long long)arg1 ;
-(unsigned long long)referenceTripId;
-(void)setHasReferenceTripId:(BOOL)arg1 ;
-(BOOL)hasReferenceTripId;
-(void)setHasLineId:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setTransitId:(unsigned long long)arg1 ;
-(void)setHasTransitId:(BOOL)arg1 ;
-(BOOL)hasTransitId;
-(unsigned long long)hash;
-(BOOL)hasLineId;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)transitId;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)routingParameters;
-(void)setRoutingParameters:(NSData *)arg1 ;
-(BOOL)hasRoutingParameters;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLineId:(unsigned long long)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

