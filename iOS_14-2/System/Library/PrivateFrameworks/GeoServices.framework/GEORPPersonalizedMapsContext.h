/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEORPPersonalizedMapsContext : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _addressType;
	int _placeType;
	struct {
		unsigned has_addressType : 1;
		unsigned has_placeType : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasAddressType; 
@property (assign,nonatomic) int addressType; 
@property (assign,nonatomic) BOOL hasPlaceType; 
@property (assign,nonatomic) int placeType; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(int)placeType;
-(void)setAddressType:(int)arg1 ;
-(void)setPlaceType:(int)arg1 ;
-(int)addressType;
-(void)setHasAddressType:(BOOL)arg1 ;
-(BOOL)hasAddressType;
-(id)addressTypeAsString:(int)arg1 ;
-(int)StringAsAddressType:(id)arg1 ;
-(void)setHasPlaceType:(BOOL)arg1 ;
-(BOOL)hasPlaceType;
-(id)placeTypeAsString:(int)arg1 ;
-(int)StringAsPlaceType:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

