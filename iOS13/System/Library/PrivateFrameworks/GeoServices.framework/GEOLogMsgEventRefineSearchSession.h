/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, NSMutableArray;

@interface GEOLogMsgEventRefineSearchSession : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _searchString;
	NSMutableArray* _suggestionItems;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _refineSearchType;
	int _searchType;
	struct {
		unsigned has_refineSearchType : 1;
		unsigned has_searchType : 1;
		unsigned read_searchString : 1;
		unsigned read_suggestionItems : 1;
		unsigned wrote_searchString : 1;
		unsigned wrote_suggestionItems : 1;
		unsigned wrote_refineSearchType : 1;
		unsigned wrote_searchType : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasSearchType; 
@property (assign,nonatomic) int searchType; 
@property (assign,nonatomic) BOOL hasRefineSearchType; 
@property (assign,nonatomic) int refineSearchType; 
@property (nonatomic,readonly) BOOL hasSearchString; 
@property (nonatomic,retain) NSString * searchString; 
@property (nonatomic,retain) NSMutableArray * suggestionItems; 
+(BOOL)isValid:(id)arg1 ;
+(Class)suggestionItemType;
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
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)_readSearchString;
-(BOOL)hasSearchString;
-(int)searchType;
-(void)setSearchType:(int)arg1 ;
-(void)setHasSearchType:(BOOL)arg1 ;
-(BOOL)hasSearchType;
-(id)searchTypeAsString:(int)arg1 ;
-(int)StringAsSearchType:(id)arg1 ;
-(void)_readSuggestionItems;
-(void)_addNoFlagsSuggestionItem:(id)arg1 ;
-(unsigned long long)suggestionItemsCount;
-(void)clearSuggestionItems;
-(id)suggestionItemAtIndex:(unsigned long long)arg1 ;
-(void)addSuggestionItem:(id)arg1 ;
-(int)refineSearchType;
-(void)setRefineSearchType:(int)arg1 ;
-(void)setHasRefineSearchType:(BOOL)arg1 ;
-(BOOL)hasRefineSearchType;
-(id)refineSearchTypeAsString:(int)arg1 ;
-(int)StringAsRefineSearchType:(id)arg1 ;
-(NSMutableArray *)suggestionItems;
-(void)setSuggestionItems:(NSMutableArray *)arg1 ;
@end

