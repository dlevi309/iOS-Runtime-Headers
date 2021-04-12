/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE99 _flags;

}

@property (nonatomic,readonly) BOOL hasVenueFilter; 
@property (nonatomic,retain) GEOPDVenueIdentifier * venueFilter; 
@property (assign,nonatomic) BOOL hasVenueSearchType; 
@property (assign,nonatomic) int venueSearchType; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setVenueFilter:(GEOPDVenueIdentifier *)arg1 ;
-(void)setVenueSearchType:(int)arg1 ;
-(GEOPDVenueIdentifier *)venueFilter;
-(BOOL)hasVenueFilter;
-(int)venueSearchType;
-(void)setHasVenueSearchType:(BOOL)arg1 ;
-(BOOL)hasVenueSearchType;
-(id)venueSearchTypeAsString:(int)arg1 ;
-(int)StringAsVenueSearchType:(id)arg1 ;
@end

