/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOLocalizedString, GEOStyleAttributes, NSData, GEOPDVenueIdentifier;

@interface GEOPDAutocompleteEntryCategory : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOLocalizedString* _displayName;
	GEOStyleAttributes* _styleAttributes;
	NSData* _suggestionEntryMetadata;
	GEOPDVenueIdentifier* _venueIdentifier;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_displayName : 1;
		unsigned read_styleAttributes : 1;
		unsigned read_suggestionEntryMetadata : 1;
		unsigned read_venueIdentifier : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (nonatomic,retain) GEOLocalizedString * displayName; 
@property (nonatomic,readonly) BOOL hasStyleAttributes; 
@property (nonatomic,retain) GEOStyleAttributes * styleAttributes; 
@property (nonatomic,readonly) BOOL hasSuggestionEntryMetadata; 
@property (nonatomic,retain) NSData * suggestionEntryMetadata; 
@property (nonatomic,readonly) BOOL hasVenueIdentifier; 
@property (nonatomic,retain) GEOPDVenueIdentifier * venueIdentifier; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)hasStyleAttributes;
-(void)setStyleAttributes:(GEOStyleAttributes *)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOStyleAttributes *)styleAttributes;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(GEOPDVenueIdentifier *)venueIdentifier;
-(void)setVenueIdentifier:(GEOPDVenueIdentifier *)arg1 ;
-(BOOL)hasVenueIdentifier;
-(void)setDisplayName:(GEOLocalizedString *)arg1 ;
-(unsigned long long)hash;
-(NSData *)suggestionEntryMetadata;
-(void)setSuggestionEntryMetadata:(NSData *)arg1 ;
-(BOOL)hasSuggestionEntryMetadata;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOLocalizedString *)displayName;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasDisplayName;
@end

