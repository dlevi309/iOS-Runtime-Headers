/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSData, GEOPDAutocompleteEntry;

@interface GEOSuggestionsFeedbackCollection : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOSessionID _sessionID;
	NSData* _suggestionEntryMetadata;
	GEOPDAutocompleteEntry* _suggestionEntry;
	NSData* _suggestionMetadata;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _suggestionEntryIndex;
	int _suggestionsEntryListIndex;
	struct {
		unsigned has_sessionID : 1;
		unsigned has_suggestionEntryIndex : 1;
		unsigned has_suggestionsEntryListIndex : 1;
		unsigned read_suggestionEntryMetadata : 1;
		unsigned read_suggestionEntry : 1;
		unsigned read_suggestionMetadata : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) GEOSessionID sessionID; 
@property (assign,nonatomic) BOOL hasSuggestionsEntryListIndex; 
@property (assign,nonatomic) int suggestionsEntryListIndex; 
@property (assign,nonatomic) BOOL hasSuggestionEntryIndex; 
@property (assign,nonatomic) int suggestionEntryIndex; 
@property (nonatomic,readonly) BOOL hasSuggestionMetadata; 
@property (nonatomic,retain) NSData * suggestionMetadata; 
@property (nonatomic,readonly) BOOL hasSuggestionEntryMetadata; 
@property (nonatomic,retain) NSData * suggestionEntryMetadata; 
@property (nonatomic,readonly) BOOL hasSuggestionEntry; 
@property (nonatomic,retain) GEOPDAutocompleteEntry * suggestionEntry; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)hasSessionID;
-(id)dictionaryRepresentation;
-(GEOSessionID)sessionID;
-(void)setSessionID:(GEOSessionID)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasSuggestionMetadata;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSData *)suggestionMetadata;
-(id)description;
-(void)setHasSessionID:(BOOL)arg1 ;
-(GEOPDAutocompleteEntry *)suggestionEntry;
-(unsigned long long)hash;
-(void)setSuggestionEntry:(GEOPDAutocompleteEntry *)arg1 ;
-(NSData *)suggestionEntryMetadata;
-(void)setSuggestionsEntryListIndex:(int)arg1 ;
-(void)setSuggestionEntryIndex:(int)arg1 ;
-(void)setSuggestionEntryMetadata:(NSData *)arg1 ;
-(int)suggestionsEntryListIndex;
-(void)setHasSuggestionsEntryListIndex:(BOOL)arg1 ;
-(BOOL)hasSuggestionsEntryListIndex;
-(int)suggestionEntryIndex;
-(void)setHasSuggestionEntryIndex:(BOOL)arg1 ;
-(BOOL)hasSuggestionEntryIndex;
-(BOOL)hasSuggestionEntryMetadata;
-(BOOL)hasSuggestionEntry;
-(BOOL)readFrom:(id)arg1 ;
-(void)setSuggestionMetadata:(NSData *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

