/*
* Generated on Thursday, January 14, 2021 at 2:21:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSMutableArray, GEOLatLng, NSData;

@interface GEOSuggestionEntry : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOHighlight* _textHighlights;
	unsigned long long _textHighlightsCount;
	unsigned long long _textHighlightsSpace;
	NSString* _calloutTitle;
	NSMutableArray* _displayLines;
	NSString* _iconID;
	GEOLatLng* _latlng;
	NSMutableArray* _namedFeatures;
	NSString* _searchQueryDisplayString;
	NSData* _suggestionEntryMetadata;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_textHighlights : 1;
		unsigned read_calloutTitle : 1;
		unsigned read_displayLines : 1;
		unsigned read_iconID : 1;
		unsigned read_latlng : 1;
		unsigned read_namedFeatures : 1;
		unsigned read_searchQueryDisplayString : 1;
		unsigned read_suggestionEntryMetadata : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * displayLines; 
@property (nonatomic,readonly) unsigned long long textHighlightsCount; 
@property (nonatomic,readonly) GEOHighlight* textHighlights; 
@property (nonatomic,readonly) BOOL hasIconID; 
@property (nonatomic,retain) NSString * iconID; 
@property (nonatomic,readonly) BOOL hasLatlng; 
@property (nonatomic,retain) GEOLatLng * latlng; 
@property (nonatomic,readonly) BOOL hasSuggestionEntryMetadata; 
@property (nonatomic,retain) NSData * suggestionEntryMetadata; 
@property (nonatomic,readonly) BOOL hasSearchQueryDisplayString; 
@property (nonatomic,retain) NSString * searchQueryDisplayString; 
@property (nonatomic,readonly) BOOL hasCalloutTitle; 
@property (nonatomic,retain) NSString * calloutTitle; 
@property (nonatomic,retain) NSMutableArray * namedFeatures; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)displayLineType;
+(Class)namedFeatureType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)namedFeaturesCount;
-(id)init;
-(id)jsonRepresentation;
-(GEOLatLng *)latlng;
-(NSString *)iconID;
-(void)setNamedFeatures:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addDisplayLine:(id)arg1 ;
-(unsigned long long)displayLinesCount;
-(void)clearDisplayLines;
-(id)displayLineAtIndex:(unsigned long long)arg1 ;
-(void)setDisplayLines:(NSMutableArray *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)addNamedFeature:(id)arg1 ;
-(id)namedFeatureAtIndex:(unsigned long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasIconID;
-(BOOL)hasLatlng;
-(NSMutableArray *)namedFeatures;
-(id)description;
-(void)setIconID:(NSString *)arg1 ;
-(void)clearTextHighlights;
-(NSString *)searchQueryDisplayString;
-(GEOHighlight*)textHighlights;
-(void)addTextHighlights:(GEOHighlight)arg1 ;
-(void)setSearchQueryDisplayString:(NSString *)arg1 ;
-(void)setCalloutTitle:(NSString *)arg1 ;
-(unsigned long long)textHighlightsCount;
-(GEOHighlight)textHighlightsAtIndex:(unsigned long long)arg1 ;
-(void)setTextHighlights:(GEOHighlight*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasSearchQueryDisplayString;
-(BOOL)hasCalloutTitle;
-(NSString *)calloutTitle;
-(NSMutableArray *)displayLines;
-(unsigned long long)hash;
-(NSData *)suggestionEntryMetadata;
-(void)setSuggestionEntryMetadata:(NSData *)arg1 ;
-(BOOL)hasSuggestionEntryMetadata;
-(void)clearNamedFeatures;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setLatlng:(GEOLatLng *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

