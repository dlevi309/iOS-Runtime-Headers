/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPDVenueIdentifier;

@interface GEOPDSSearchVenueFilter : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDVenueIdentifier* _venueFilter;
	int _venueSearchType;
	struct {
		unsigned has_venueSearchType : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasVenueFilter; 
@property (nonatomic,retain) GEOPDVenueIdentifier * venueFilter; 
@property (assign,nonatomic) BOOL hasVenueSearchType; 
@property (assign,nonatomic) int venueSearchType; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)setVenueSearchType:(int)arg1 ;
-(int)venueSearchType;
-(void)setHasVenueSearchType:(BOOL)arg1 ;
-(BOOL)hasVenueSearchType;
-(id)venueSearchTypeAsString:(int)arg1 ;
-(int)StringAsVenueSearchType:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEOPDVenueIdentifier *)venueFilter;
-(void)setVenueFilter:(GEOPDVenueIdentifier *)arg1 ;
-(BOOL)hasVenueFilter;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

