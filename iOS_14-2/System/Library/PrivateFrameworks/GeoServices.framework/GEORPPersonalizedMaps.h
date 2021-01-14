/*
* Generated on Thursday, January 14, 2021 at 2:21:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEORPAddress;

@interface GEORPPersonalizedMaps : PBCodable <NSCopying> {

	GEORPAddress* _address;
	int _addressType;
	int _placeType;
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasAddressType; 
@property (assign,nonatomic) int addressType; 
@property (assign,nonatomic) BOOL hasPlaceType; 
@property (assign,nonatomic) int placeType; 
@property (nonatomic,readonly) BOOL hasAddress; 
@property (nonatomic,retain) GEORPAddress * address; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(BOOL)hasAddress;
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
-(GEORPAddress *)address;
-(void)setAddress:(GEORPAddress *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

