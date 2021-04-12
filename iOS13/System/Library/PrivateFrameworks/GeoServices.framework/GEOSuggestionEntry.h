/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE92 _flags;

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
+(BOOL)isValid:(id)arg1 ;
+(Class)namedFeatureType;
+(Class)displayLineType;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readNamedFeatures;
-(void)_addNoFlagsNamedFeature:(id)arg1 ;
-(unsigned long long)namedFeaturesCount;
-(void)clearNamedFeatures;
-(id)namedFeatureAtIndex:(unsigned long long)arg1 ;
-(void)addNamedFeature:(id)arg1 ;
-(NSMutableArray *)namedFeatures;
-(void)setNamedFeatures:(NSMutableArray *)arg1 ;
-(void)_readSuggestionEntryMetadata;
-(NSData *)suggestionEntryMetadata;
-(void)setSuggestionEntryMetadata:(NSData *)arg1 ;
-(BOOL)hasSuggestionEntryMetadata;
-(NSString *)calloutTitle;
-(NSMutableArray *)displayLines;
-(void)setLatlng:(GEOLatLng *)arg1 ;
-(GEOLatLng *)latlng;
-(void)addDisplayLine:(id)arg1 ;
-(unsigned long long)displayLinesCount;
-(void)clearDisplayLines;
-(id)displayLineAtIndex:(unsigned long long)arg1 ;
-(void)setDisplayLines:(NSMutableArray *)arg1 ;
-(void)clearTextHighlights;
-(void)_readDisplayLines;
-(void)_addNoFlagsDisplayLine:(id)arg1 ;
-(void)_readTextHighlights;
-(void)_addNoFlagsTextHighlights:(GEOHighlight)arg1 ;
-(void)_readIconID;
-(void)_readLatlng;
-(void)_readSearchQueryDisplayString;
-(void)_readCalloutTitle;
-(NSString *)iconID;
-(NSString *)searchQueryDisplayString;
-(unsigned long long)textHighlightsCount;
-(GEOHighlight)textHighlightsAtIndex:(unsigned long long)arg1 ;
-(void)addTextHighlights:(GEOHighlight)arg1 ;
-(void)setIconID:(NSString *)arg1 ;
-(void)setSearchQueryDisplayString:(NSString *)arg1 ;
-(void)setCalloutTitle:(NSString *)arg1 ;
-(GEOHighlight*)textHighlights;
-(void)setTextHighlights:(GEOHighlight*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasIconID;
-(BOOL)hasLatlng;
-(BOOL)hasSearchQueryDisplayString;
-(BOOL)hasCalloutTitle;
@end

