/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, NSString;

@interface GEOLogMsgStateSuggestions : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _displayedResults;
	NSString* _searchString;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _acSequenceNumber;
	int _searchFieldType;
	int _selectedIndex;
	struct {
		unsigned has_acSequenceNumber : 1;
		unsigned has_searchFieldType : 1;
		unsigned has_selectedIndex : 1;
		unsigned read_displayedResults : 1;
		unsigned read_searchString : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasSearchString; 
@property (nonatomic,retain) NSString * searchString; 
@property (nonatomic,retain) NSMutableArray * displayedResults; 
@property (assign,nonatomic) BOOL hasSelectedIndex; 
@property (assign,nonatomic) int selectedIndex; 
@property (assign,nonatomic) BOOL hasSearchFieldType; 
@property (assign,nonatomic) int searchFieldType; 
@property (assign,nonatomic) BOOL hasAcSequenceNumber; 
@property (assign,nonatomic) int acSequenceNumber; 
+(Class)displayedResultType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)displayedResultsCount;
-(void)clearDisplayedResults;
-(id)displayedResultAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)displayedResults;
-(void)setDisplayedResults:(NSMutableArray *)arg1 ;
-(int)searchFieldType;
-(BOOL)hasSearchFieldType;
-(void)setHasSearchFieldType:(BOOL)arg1 ;
-(id)searchFieldTypeAsString:(int)arg1 ;
-(int)StringAsSearchFieldType:(id)arg1 ;
-(int)acSequenceNumber;
-(void)setHasAcSequenceNumber:(BOOL)arg1 ;
-(BOOL)hasAcSequenceNumber;
-(id)initWithData:(id)arg1 ;
-(void)setHasSelectedIndex:(BOOL)arg1 ;
-(BOOL)hasSelectedIndex;
-(id)initWithDictionary:(id)arg1 ;
-(void)setSelectedIndex:(int)arg1 ;
-(id)description;
-(int)selectedIndex;
-(unsigned long long)hash;
-(BOOL)hasSearchString;
-(void)setSearchFieldType:(int)arg1 ;
-(void)setAcSequenceNumber:(int)arg1 ;
-(void)addDisplayedResult:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setSearchString:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)searchString;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

