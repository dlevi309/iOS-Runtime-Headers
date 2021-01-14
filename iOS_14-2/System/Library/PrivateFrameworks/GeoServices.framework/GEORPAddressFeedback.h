/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEORPAddressCorrections, GEORPPersonalizedMapsContext, GEOPDPlaceRequest, GEOPDPlace;

@interface GEORPAddressFeedback : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEORPAddressCorrections* _address;
	GEORPPersonalizedMapsContext* _personalizedMaps;
	GEOPDPlaceRequest* _placeRequest;
	GEOPDPlace* _place;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _type;
	struct {
		unsigned has_type : 1;
		unsigned read_unknownFields : 1;
		unsigned read_address : 1;
		unsigned read_personalizedMaps : 1;
		unsigned read_placeRequest : 1;
		unsigned read_place : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasAddress; 
@property (nonatomic,retain) GEORPAddressCorrections * address; 
@property (nonatomic,readonly) BOOL hasPlace; 
@property (nonatomic,retain) GEOPDPlace * place; 
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (nonatomic,readonly) BOOL hasPersonalizedMaps; 
@property (nonatomic,retain) GEORPPersonalizedMapsContext * personalizedMaps; 
@property (nonatomic,readonly) BOOL hasPlaceRequest; 
@property (nonatomic,retain) GEOPDPlaceRequest * placeRequest; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOPDPlace *)place;
-(BOOL)hasPlaceRequest;
-(id)typeAsString:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(id)init;
-(int)StringAsType:(id)arg1 ;
-(id)jsonRepresentation;
-(BOOL)hasAddress;
-(GEORPPersonalizedMapsContext *)personalizedMaps;
-(void)setPersonalizedMaps:(GEORPPersonalizedMapsContext *)arg1 ;
-(BOOL)hasPersonalizedMaps;
-(BOOL)hasType;
-(GEOPDPlaceRequest *)placeRequest;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(BOOL)hasPlace;
-(GEORPAddressCorrections *)address;
-(void)setAddress:(GEORPAddressCorrections *)arg1 ;
-(int)type;
-(unsigned long long)hash;
-(void)setPlace:(GEOPDPlace *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPlaceRequest:(GEOPDPlaceRequest *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

