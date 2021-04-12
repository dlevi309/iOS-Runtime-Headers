/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_suggestionEntryMetadata : 1;
		unsigned wrote_suggestionMetadata : 1;
		unsigned wrote_entriesType : 1;
		unsigned wrote_listType : 1;
		unsigned wrote_includeRankingFeatures : 1;
		unsigned wrote_normalizePOIs : 1;
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
-(id)init;
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
-(void)_readSuggestionMetadata;
-(NSData *)suggestionMetadata;
-(void)setSuggestionMetadata:(NSData *)arg1 ;
-(BOOL)hasSuggestionMetadata;
-(void)_readSuggestionEntryMetadata;
-(NSData *)suggestionEntryMetadata;
-(void)setSuggestionEntryMetadata:(NSData *)arg1 ;
-(BOOL)hasSuggestionEntryMetadata;
-(int)listType;
-(void)setListType:(int)arg1 ;
-(void)setHasListType:(BOOL)arg1 ;
-(BOOL)hasListType;
-(id)listTypeAsString:(int)arg1 ;
-(int)StringAsListType:(id)arg1 ;
-(int)entriesType;
-(void)setEntriesType:(int)arg1 ;
-(void)setHasEntriesType:(BOOL)arg1 ;
-(BOOL)hasEntriesType;
-(id)entriesTypeAsString:(int)arg1 ;
-(int)StringAsEntriesType:(id)arg1 ;
-(BOOL)normalizePOIs;
-(void)setNormalizePOIs:(BOOL)arg1 ;
-(void)setHasNormalizePOIs:(BOOL)arg1 ;
-(BOOL)hasNormalizePOIs;
-(BOOL)includeRankingFeatures;
-(void)setIncludeRankingFeatures:(BOOL)arg1 ;
-(void)setHasIncludeRankingFeatures:(BOOL)arg1 ;
-(BOOL)hasIncludeRankingFeatures;
@end

