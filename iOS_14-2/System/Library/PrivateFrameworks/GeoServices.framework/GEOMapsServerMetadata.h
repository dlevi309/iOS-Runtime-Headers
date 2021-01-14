/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, NSData;

@interface GEOMapsServerMetadata : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _mapsSearchResults;
	NSMutableArray* _suggestionEntryMetadataDisplayeds;
	NSData* _suggestionEntryMetadataTappedOn;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_mapsSearchResults : 1;
		unsigned read_suggestionEntryMetadataDisplayeds : 1;
		unsigned read_suggestionEntryMetadataTappedOn : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasSuggestionEntryMetadataTappedOn; 
@property (nonatomic,retain) NSData * suggestionEntryMetadataTappedOn; 
@property (nonatomic,retain) NSMutableArray * suggestionEntryMetadataDisplayeds; 
@property (nonatomic,retain) NSMutableArray * mapsSearchResults; 
+(Class)suggestionEntryMetadataDisplayedType;
+(Class)mapsSearchResultType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSData *)suggestionEntryMetadataTappedOn;
-(NSMutableArray *)suggestionEntryMetadataDisplayeds;
-(void)setSuggestionEntryMetadataTappedOn:(NSData *)arg1 ;
-(void)addSuggestionEntryMetadataDisplayed:(id)arg1 ;
-(NSMutableArray *)mapsSearchResults;
-(void)addMapsSearchResult:(id)arg1 ;
-(unsigned long long)suggestionEntryMetadataDisplayedsCount;
-(unsigned long long)mapsSearchResultsCount;
-(void)clearSuggestionEntryMetadataDisplayeds;
-(id)suggestionEntryMetadataDisplayedAtIndex:(unsigned long long)arg1 ;
-(void)clearMapsSearchResults;
-(id)mapsSearchResultAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasSuggestionEntryMetadataTappedOn;
-(void)setMapsSearchResults:(NSMutableArray *)arg1 ;
-(void)setSuggestionEntryMetadataDisplayeds:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

