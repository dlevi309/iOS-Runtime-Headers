/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDSSearchTierMetadata : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _endIndex;
	unsigned _startIndex;
	int _tierType;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasTierType; 
@property (assign,nonatomic) int tierType; 
@property (assign,nonatomic) BOOL hasStartIndex; 
@property (assign,nonatomic) unsigned startIndex; 
@property (assign,nonatomic) BOOL hasEndIndex; 
@property (assign,nonatomic) unsigned endIndex; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(unsigned)startIndex;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasEndIndex:(BOOL)arg1 ;
-(BOOL)hasEndIndex;
-(unsigned)endIndex;
-(BOOL)hasTierType;
-(int)tierType;
-(void)setTierType:(int)arg1 ;
-(void)setHasTierType:(BOOL)arg1 ;
-(id)tierTypeAsString:(int)arg1 ;
-(id)jsonRepresentation;
-(int)StringAsTierType:(id)arg1 ;
-(void)setStartIndex:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setEndIndex:(unsigned)arg1 ;
-(BOOL)hasStartIndex;
-(void)setHasStartIndex:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

