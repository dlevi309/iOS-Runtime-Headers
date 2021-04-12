/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOPDAutocompleteEntry, GEOLatLng, GEOPDPlace, NSString;

@interface GEORPUserSearchInput : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOPDAutocompleteEntry* _autocompleteEntry;
	GEOLatLng* _coordinate;
	GEOPDPlace* _place;
	NSString* _searchString;
	NSString* _singleLineAddressString;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _origin;
	struct {
		unsigned has_origin : 1;
		unsigned read_autocompleteEntry : 1;
		unsigned read_coordinate : 1;
		unsigned read_place : 1;
		unsigned read_searchString : 1;
		unsigned read_singleLineAddressString : 1;
		unsigned wrote_autocompleteEntry : 1;
		unsigned wrote_coordinate : 1;
		unsigned wrote_place : 1;
		unsigned wrote_searchString : 1;
		unsigned wrote_singleLineAddressString : 1;
		unsigned wrote_origin : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasSearchString; 
@property (nonatomic,retain) NSString * searchString; 
@property (nonatomic,readonly) BOOL hasSingleLineAddressString; 
@property (nonatomic,retain) NSString * singleLineAddressString; 
@property (nonatomic,readonly) BOOL hasPlace; 
@property (nonatomic,retain) GEOPDPlace * place; 
@property (nonatomic,readonly) BOOL hasAutocompleteEntry; 
@property (nonatomic,retain) GEOPDAutocompleteEntry * autocompleteEntry; 
@property (nonatomic,readonly) BOOL hasCoordinate; 
@property (nonatomic,retain) GEOLatLng * coordinate; 
@property (assign,nonatomic) BOOL hasOrigin; 
@property (assign,nonatomic) int origin; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(GEOLatLng *)coordinate;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(int)origin;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCoordinate:(GEOLatLng *)arg1 ;
-(void)setOrigin:(int)arg1 ;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)_readSearchString;
-(BOOL)hasSearchString;
-(void)_readPlace;
-(GEOPDPlace *)place;
-(void)setPlace:(GEOPDPlace *)arg1 ;
-(BOOL)hasPlace;
-(void)_readCoordinate;
-(BOOL)hasCoordinate;
-(GEOPDAutocompleteEntry *)autocompleteEntry;
-(void)setAutocompleteEntry:(GEOPDAutocompleteEntry *)arg1 ;
-(BOOL)hasAutocompleteEntry;
-(BOOL)hasOrigin;
-(void)setHasOrigin:(BOOL)arg1 ;
-(id)originAsString:(int)arg1 ;
-(int)StringAsOrigin:(id)arg1 ;
-(void)_readSingleLineAddressString;
-(void)_readAutocompleteEntry;
-(NSString *)singleLineAddressString;
-(void)setSingleLineAddressString:(NSString *)arg1 ;
-(BOOL)hasSingleLineAddressString;
@end

