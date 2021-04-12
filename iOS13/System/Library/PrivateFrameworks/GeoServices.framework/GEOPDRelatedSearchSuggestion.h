/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSData;

@interface GEOPDRelatedSearchSuggestion : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _displayString;
	NSString* _searchBarDisplayToken;
	NSData* _suggestionEntryMetadata;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_displayString : 1;
		unsigned read_searchBarDisplayToken : 1;
		unsigned read_suggestionEntryMetadata : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_displayString : 1;
		unsigned wrote_searchBarDisplayToken : 1;
		unsigned wrote_suggestionEntryMetadata : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasDisplayString; 
@property (nonatomic,retain) NSString * displayString; 
@property (nonatomic,readonly) BOOL hasSuggestionEntryMetadata; 
@property (nonatomic,retain) NSData * suggestionEntryMetadata; 
@property (nonatomic,readonly) BOOL hasSearchBarDisplayToken; 
@property (nonatomic,retain) NSString * searchBarDisplayToken; 
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
-(NSString *)displayString;
-(void)setDisplayString:(NSString *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readSuggestionEntryMetadata;
-(NSData *)suggestionEntryMetadata;
-(void)setSuggestionEntryMetadata:(NSData *)arg1 ;
-(BOOL)hasSuggestionEntryMetadata;
-(void)_readDisplayString;
-(BOOL)hasDisplayString;
-(NSString *)searchBarDisplayToken;
-(void)_readSearchBarDisplayToken;
-(void)setSearchBarDisplayToken:(NSString *)arg1 ;
-(BOOL)hasSearchBarDisplayToken;
@end

