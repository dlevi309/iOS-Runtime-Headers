/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_address : 1;
		unsigned wrote_personalizedMaps : 1;
		unsigned wrote_placeRequest : 1;
		unsigned wrote_place : 1;
		unsigned wrote_type : 1;
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(GEORPAddressCorrections *)address;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setAddress:(GEORPAddressCorrections *)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(BOOL)hasAddress;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readAddress;
-(void)_readPlace;
-(GEOPDPlace *)place;
-(void)setPlace:(GEOPDPlace *)arg1 ;
-(BOOL)hasPlace;
-(void)_readPlaceRequest;
-(GEOPDPlaceRequest *)placeRequest;
-(void)setPlaceRequest:(GEOPDPlaceRequest *)arg1 ;
-(BOOL)hasPlaceRequest;
-(void)_readPersonalizedMaps;
-(GEORPPersonalizedMapsContext *)personalizedMaps;
-(void)setPersonalizedMaps:(GEORPPersonalizedMapsContext *)arg1 ;
-(BOOL)hasPersonalizedMaps;
@end

