/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_displayName : 1;
		unsigned wrote_styleAttributes : 1;
		unsigned wrote_suggestionEntryMetadata : 1;
		unsigned wrote_venueIdentifier : 1;
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(GEOLocalizedString *)displayName;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDisplayName:(GEOLocalizedString *)arg1 ;
-(GEOStyleAttributes *)styleAttributes;
-(void)setStyleAttributes:(GEOStyleAttributes *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readStyleAttributes;
-(BOOL)hasStyleAttributes;
-(void)_readSuggestionEntryMetadata;
-(NSData *)suggestionEntryMetadata;
-(void)setSuggestionEntryMetadata:(NSData *)arg1 ;
-(BOOL)hasSuggestionEntryMetadata;
-(void)_readDisplayName;
-(void)_readVenueIdentifier;
-(GEOPDVenueIdentifier *)venueIdentifier;
-(void)setVenueIdentifier:(GEOPDVenueIdentifier *)arg1 ;
-(BOOL)hasDisplayName;
-(BOOL)hasVenueIdentifier;
@end

