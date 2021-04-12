/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_sessionID : 1;
		unsigned wrote_suggestionEntryMetadata : 1;
		unsigned wrote_suggestionEntry : 1;
		unsigned wrote_suggestionMetadata : 1;
		unsigned wrote_suggestionEntryIndex : 1;
		unsigned wrote_suggestionsEntryListIndex : 1;
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
-(GEOSessionID)sessionID;
-(void)setSessionID:(GEOSessionID)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasSessionID:(BOOL)arg1 ;
-(BOOL)hasSessionID;
-(void)_readSuggestionMetadata;
-(NSData *)suggestionMetadata;
-(void)setSuggestionMetadata:(NSData *)arg1 ;
-(BOOL)hasSuggestionMetadata;
-(void)_readSuggestionEntryMetadata;
-(void)_readSuggestionEntry;
-(NSData *)suggestionEntryMetadata;
-(GEOPDAutocompleteEntry *)suggestionEntry;
-(void)setSuggestionEntryMetadata:(NSData *)arg1 ;
-(void)setSuggestionEntry:(GEOPDAutocompleteEntry *)arg1 ;
-(int)suggestionsEntryListIndex;
-(void)setSuggestionsEntryListIndex:(int)arg1 ;
-(void)setHasSuggestionsEntryListIndex:(BOOL)arg1 ;
-(BOOL)hasSuggestionsEntryListIndex;
-(int)suggestionEntryIndex;
-(void)setSuggestionEntryIndex:(int)arg1 ;
-(void)setHasSuggestionEntryIndex:(BOOL)arg1 ;
-(BOOL)hasSuggestionEntryIndex;
-(BOOL)hasSuggestionEntryMetadata;
-(BOOL)hasSuggestionEntry;
@end

