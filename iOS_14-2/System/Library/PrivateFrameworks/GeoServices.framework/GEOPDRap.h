/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDRap : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _placecardRapButtonType;
	SCD_Struct_GE127 _flags;

}

@property (assign,nonatomic) BOOL hasPlacecardRapButtonType; 
@property (assign,nonatomic) int placecardRapButtonType; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(int)StringAsPlacecardRapButtonType:(id)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setPlacecardRapButtonType:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(id)placecardRapButtonTypeAsString:(int)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasPlacecardRapButtonType;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasPlacecardRapButtonType:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)placecardRapButtonType;
@end

