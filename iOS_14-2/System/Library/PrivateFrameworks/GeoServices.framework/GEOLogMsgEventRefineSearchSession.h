/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasSearchType; 
@property (assign,nonatomic) int searchType; 
@property (assign,nonatomic) BOOL hasRefineSearchType; 
@property (assign,nonatomic) int refineSearchType; 
@property (nonatomic,readonly) BOOL hasSearchString; 
@property (nonatomic,retain) NSString * searchString; 
@property (nonatomic,retain) NSMutableArray * suggestionItems; 
+(Class)suggestionItemType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(int)searchType;
-(void)readAll:(BOOL)arg1 ;
-(void)addSuggestionItem:(id)arg1 ;
-(NSMutableArray *)suggestionItems;
-(void)setRefineSearchType:(int)arg1 ;
-(unsigned long long)suggestionItemsCount;
-(void)clearSuggestionItems;
-(id)suggestionItemAtIndex:(unsigned long long)arg1 ;
-(int)refineSearchType;
-(void)setHasRefineSearchType:(BOOL)arg1 ;
-(BOOL)hasRefineSearchType;
-(id)refineSearchTypeAsString:(int)arg1 ;
-(int)StringAsRefineSearchType:(id)arg1 ;
-(void)setSuggestionItems:(NSMutableArray *)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(BOOL)hasSearchType;
-(void)setHasSearchType:(BOOL)arg1 ;
-(id)searchTypeAsString:(int)arg1 ;
-(int)StringAsSearchType:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasSearchString;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setSearchString:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)searchString;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSearchType:(int)arg1 ;
@end

