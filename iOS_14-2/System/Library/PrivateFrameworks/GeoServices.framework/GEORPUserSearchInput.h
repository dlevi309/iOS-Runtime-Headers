/*
* Generated on Thursday, January 14, 2021 at 2:21:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
		unsigned wrote_anyField : 1;
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
-(void)setOrigin:(int)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasCoordinate;
-(GEOPDPlace *)place;
-(GEOPDAutocompleteEntry *)autocompleteEntry;
-(int)origin;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(GEOLatLng *)coordinate;
-(BOOL)hasAutocompleteEntry;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)singleLineAddressString;
-(void)setSingleLineAddressString:(NSString *)arg1 ;
-(BOOL)hasSingleLineAddressString;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setAutocompleteEntry:(GEOPDAutocompleteEntry *)arg1 ;
-(id)description;
-(BOOL)hasPlace;
-(void)setCoordinate:(GEOLatLng *)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasSearchString;
-(void)setPlace:(GEOPDPlace *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasOrigin:(BOOL)arg1 ;
-(id)originAsString:(int)arg1 ;
-(int)StringAsOrigin:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setSearchString:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasOrigin;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)searchString;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

