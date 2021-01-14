/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSData, GEOPDViewportInfo;

@interface GEOPDPopularNearbySearchParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSData* _suggestionEntryMetadata;
	GEOPDViewportInfo* _viewportInfo;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _maxResults;
	int _searchType;
	struct {
		unsigned has_maxResults : 1;
		unsigned has_searchType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_suggestionEntryMetadata : 1;
		unsigned read_viewportInfo : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasMaxResults; 
@property (assign,nonatomic) unsigned maxResults; 
@property (nonatomic,readonly) BOOL hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo; 
@property (nonatomic,readonly) BOOL hasSuggestionEntryMetadata; 
@property (nonatomic,retain) NSData * suggestionEntryMetadata; 
@property (assign,nonatomic) BOOL hasSearchType; 
@property (assign,nonatomic) int searchType; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(GEOPDViewportInfo *)viewportInfo;
-(int)searchType;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasMaxResults:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasMaxResults;
-(void)mergeFrom:(id)arg1 ;
-(void)setMaxResults:(unsigned)arg1 ;
-(id)initWithData:(id)arg1 ;
-(unsigned)maxResults;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasViewportInfo;
-(id)description;
-(BOOL)hasSearchType;
-(void)setHasSearchType:(BOOL)arg1 ;
-(id)searchTypeAsString:(int)arg1 ;
-(int)StringAsSearchType:(id)arg1 ;
-(unsigned long long)hash;
-(NSData *)suggestionEntryMetadata;
-(void)setSuggestionEntryMetadata:(NSData *)arg1 ;
-(BOOL)hasSuggestionEntryMetadata;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSearchType:(int)arg1 ;
@end

