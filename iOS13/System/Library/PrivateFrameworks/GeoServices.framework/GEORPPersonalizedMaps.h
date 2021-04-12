/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasAddressType; 
@property (assign,nonatomic) int addressType; 
@property (assign,nonatomic) BOOL hasPlaceType; 
@property (assign,nonatomic) int placeType; 
@property (nonatomic,readonly) BOOL hasAddress; 
@property (nonatomic,retain) GEORPAddress * address; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(GEORPAddress *)address;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)placeType;
-(void)setAddress:(GEORPAddress *)arg1 ;
-(BOOL)hasAddress;
-(void)readAll:(BOOL)arg1 ;
-(int)addressType;
-(void)setAddressType:(int)arg1 ;
-(void)setHasAddressType:(BOOL)arg1 ;
-(BOOL)hasAddressType;
-(id)addressTypeAsString:(int)arg1 ;
-(int)StringAsAddressType:(id)arg1 ;
-(void)setPlaceType:(int)arg1 ;
-(void)setHasPlaceType:(BOOL)arg1 ;
-(BOOL)hasPlaceType;
-(id)placeTypeAsString:(int)arg1 ;
-(int)StringAsPlaceType:(id)arg1 ;
@end

