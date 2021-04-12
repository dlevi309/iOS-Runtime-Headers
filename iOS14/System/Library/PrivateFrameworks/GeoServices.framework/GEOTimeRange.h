/*
* Generated on Thursday, January 14, 2021 at 2:21:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOTimeRange : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _from;
	unsigned _to;
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasFrom; 
@property (assign,nonatomic) unsigned from; 
@property (assign,nonatomic) BOOL hasTo; 
@property (assign,nonatomic) unsigned to; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(unsigned)to;
-(id)dictionaryRepresentation;
-(unsigned)from;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasTo;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)setTo:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasFrom;
-(id)initWithDictionary:(id)arg1 ;
-(void)setHasTo:(BOOL)arg1 ;
-(id)description;
-(void)setHasFrom:(BOOL)arg1 ;
-(void)setFrom:(unsigned)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithPlaceDataTimeRange:(GEOPDLocalTimeRange*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

