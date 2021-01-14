/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
		unsigned wrote_anyField : 1;
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
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSString *)displayString;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setDisplayString:(NSString *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(NSData *)suggestionEntryMetadata;
-(void)setSuggestionEntryMetadata:(NSData *)arg1 ;
-(BOOL)hasSuggestionEntryMetadata;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)searchBarDisplayToken;
-(void)setSearchBarDisplayToken:(NSString *)arg1 ;
-(BOOL)hasSearchBarDisplayToken;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasDisplayString;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

