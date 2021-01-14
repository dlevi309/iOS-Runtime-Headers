/*
* Generated on Thursday, January 14, 2021 at 2:21:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSData;

@interface GEOSuggestionsOptions : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSData* _suggestionEntryMetadata;
	NSData* _suggestionMetadata;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _entriesType;
	int _listType;
	BOOL _includeRankingFeatures;
	BOOL _normalizePOIs;
	struct {
		unsigned has_entriesType : 1;
		unsigned has_listType : 1;
		unsigned has_includeRankingFeatures : 1;
		unsigned has_normalizePOIs : 1;
		unsigned read_unknownFields : 1;
		unsigned read_suggestionEntryMetadata : 1;
		unsigned read_suggestionMetadata : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasListType; 
@property (assign,nonatomic) int listType; 
@property (assign,nonatomic) BOOL hasEntriesType; 
@property (assign,nonatomic) int entriesType; 
@property (nonatomic,readonly) BOOL hasSuggestionMetadata; 
@property (nonatomic,retain) NSData * suggestionMetadata; 
@property (nonatomic,readonly) BOOL hasSuggestionEntryMetadata; 
@property (nonatomic,retain) NSData * suggestionEntryMetadata; 
@property (assign,nonatomic) BOOL hasNormalizePOIs; 
@property (assign,nonatomic) BOOL normalizePOIs; 
@property (assign,nonatomic) BOOL hasIncludeRankingFeatures; 
@property (assign,nonatomic) BOOL includeRankingFeatures; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasSuggestionMetadata;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSData *)suggestionMetadata;
-(id)description;
-(void)setEntriesType:(int)arg1 ;
-(void)setNormalizePOIs:(BOOL)arg1 ;
-(void)setIncludeRankingFeatures:(BOOL)arg1 ;
-(void)setHasEntriesType:(BOOL)arg1 ;
-(BOOL)hasEntriesType;
-(id)entriesTypeAsString:(int)arg1 ;
-(int)StringAsEntriesType:(id)arg1 ;
-(BOOL)normalizePOIs;
-(void)setHasNormalizePOIs:(BOOL)arg1 ;
-(BOOL)hasNormalizePOIs;
-(BOOL)includeRankingFeatures;
-(void)setHasIncludeRankingFeatures:(BOOL)arg1 ;
-(BOOL)hasIncludeRankingFeatures;
-(int)listType;
-(int)entriesType;
-(unsigned long long)hash;
-(NSData *)suggestionEntryMetadata;
-(void)setSuggestionEntryMetadata:(NSData *)arg1 ;
-(BOOL)hasSuggestionEntryMetadata;
-(BOOL)readFrom:(id)arg1 ;
-(void)setSuggestionMetadata:(NSData *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setListType:(int)arg1 ;
-(void)setHasListType:(BOOL)arg1 ;
-(BOOL)hasListType;
-(id)listTypeAsString:(int)arg1 ;
-(int)StringAsListType:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

