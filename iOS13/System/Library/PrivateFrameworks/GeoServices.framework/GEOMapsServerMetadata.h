/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_mapsSearchResults : 1;
		unsigned wrote_suggestionEntryMetadataDisplayeds : 1;
		unsigned wrote_suggestionEntryMetadataTappedOn : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasSuggestionEntryMetadataTappedOn; 
@property (nonatomic,retain) NSData * suggestionEntryMetadataTappedOn; 
@property (nonatomic,retain) NSMutableArray * suggestionEntryMetadataDisplayeds; 
@property (nonatomic,retain) NSMutableArray * mapsSearchResults; 
+(BOOL)isValid:(id)arg1 ;
+(Class)suggestionEntryMetadataDisplayedType;
+(Class)mapsSearchResultType;
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
-(void)_readSuggestionEntryMetadataTappedOn;
-(void)_readSuggestionEntryMetadataDisplayeds;
-(void)_addNoFlagsSuggestionEntryMetadataDisplayed:(id)arg1 ;
-(void)_readMapsSearchResults;
-(void)_addNoFlagsMapsSearchResult:(id)arg1 ;
-(NSData *)suggestionEntryMetadataTappedOn;
-(NSMutableArray *)suggestionEntryMetadataDisplayeds;
-(void)setSuggestionEntryMetadataTappedOn:(NSData *)arg1 ;
-(unsigned long long)suggestionEntryMetadataDisplayedsCount;
-(void)clearSuggestionEntryMetadataDisplayeds;
-(id)suggestionEntryMetadataDisplayedAtIndex:(unsigned long long)arg1 ;
-(void)addSuggestionEntryMetadataDisplayed:(id)arg1 ;
-(unsigned long long)mapsSearchResultsCount;
-(void)clearMapsSearchResults;
-(id)mapsSearchResultAtIndex:(unsigned long long)arg1 ;
-(void)addMapsSearchResult:(id)arg1 ;
-(BOOL)hasSuggestionEntryMetadataTappedOn;
-(void)setSuggestionEntryMetadataDisplayeds:(NSMutableArray *)arg1 ;
-(NSMutableArray *)mapsSearchResults;
-(void)setMapsSearchResults:(NSMutableArray *)arg1 ;
@end

