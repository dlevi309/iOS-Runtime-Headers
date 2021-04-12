/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, NSString;

@interface GEOLogMsgEventClientACSuggestions : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _entries;
	long long _overallLatencyInMs;
	NSMutableArray* _queryTokens;
	NSString* _query;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _keypressStatus;
	int _selectedIndex;
	int _selectedSectionIndex;
	int _trigger;
	int _withinSectionSelectedIndex;
	BOOL _isRerankerTriggered;
	BOOL _isRetainedQuery;
	BOOL _shouldDifferentiateClientAndServerResults;
	struct {
		unsigned has_overallLatencyInMs : 1;
		unsigned has_keypressStatus : 1;
		unsigned has_selectedIndex : 1;
		unsigned has_selectedSectionIndex : 1;
		unsigned has_trigger : 1;
		unsigned has_withinSectionSelectedIndex : 1;
		unsigned has_isRerankerTriggered : 1;
		unsigned has_isRetainedQuery : 1;
		unsigned has_shouldDifferentiateClientAndServerResults : 1;
		unsigned read_entries : 1;
		unsigned read_queryTokens : 1;
		unsigned read_query : 1;
		unsigned wrote_entries : 1;
		unsigned wrote_overallLatencyInMs : 1;
		unsigned wrote_queryTokens : 1;
		unsigned wrote_query : 1;
		unsigned wrote_keypressStatus : 1;
		unsigned wrote_selectedIndex : 1;
		unsigned wrote_selectedSectionIndex : 1;
		unsigned wrote_trigger : 1;
		unsigned wrote_withinSectionSelectedIndex : 1;
		unsigned wrote_isRerankerTriggered : 1;
		unsigned wrote_isRetainedQuery : 1;
		unsigned wrote_shouldDifferentiateClientAndServerResults : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasQuery; 
@property (nonatomic,retain) NSString * query; 
@property (nonatomic,retain) NSMutableArray * queryTokens; 
@property (nonatomic,retain) NSMutableArray * entries; 
@property (assign,nonatomic) BOOL hasSelectedIndex; 
@property (assign,nonatomic) int selectedIndex; 
@property (assign,nonatomic) BOOL hasTrigger; 
@property (assign,nonatomic) int trigger; 
@property (assign,nonatomic) BOOL hasKeypressStatus; 
@property (assign,nonatomic) int keypressStatus; 
@property (assign,nonatomic) BOOL hasWithinSectionSelectedIndex; 
@property (assign,nonatomic) int withinSectionSelectedIndex; 
@property (assign,nonatomic) BOOL hasSelectedSectionIndex; 
@property (assign,nonatomic) int selectedSectionIndex; 
@property (assign,nonatomic) BOOL hasIsRetainedQuery; 
@property (assign,nonatomic) BOOL isRetainedQuery; 
@property (assign,nonatomic) BOOL hasIsRerankerTriggered; 
@property (assign,nonatomic) BOOL isRerankerTriggered; 
@property (assign,nonatomic) BOOL hasOverallLatencyInMs; 
@property (assign,nonatomic) long long overallLatencyInMs; 
@property (assign,nonatomic) BOOL hasShouldDifferentiateClientAndServerResults; 
@property (assign,nonatomic) BOOL shouldDifferentiateClientAndServerResults; 
+(BOOL)isValid:(id)arg1 ;
+(Class)entriesType;
+(Class)queryTokensType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSString *)query;
-(id)dictionaryRepresentation;
-(void)setQuery:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setEntries:(NSMutableArray *)arg1 ;
-(NSMutableArray *)entries;
-(int)selectedIndex;
-(void)setSelectedIndex:(int)arg1 ;
-(int)trigger;
-(void)readAll:(BOOL)arg1 ;
-(void)_readQuery;
-(BOOL)hasQuery;
-(BOOL)shouldDifferentiateClientAndServerResults;
-(void)setShouldDifferentiateClientAndServerResults:(BOOL)arg1 ;
-(void)setHasShouldDifferentiateClientAndServerResults:(BOOL)arg1 ;
-(BOOL)hasShouldDifferentiateClientAndServerResults;
-(void)setTrigger:(int)arg1 ;
-(void)setHasTrigger:(BOOL)arg1 ;
-(BOOL)hasTrigger;
-(id)triggerAsString:(int)arg1 ;
-(int)StringAsTrigger:(id)arg1 ;
-(void)_readQueryTokens;
-(void)_addNoFlagsQueryTokens:(id)arg1 ;
-(void)_readEntries;
-(void)_addNoFlagsEntries:(id)arg1 ;
-(NSMutableArray *)queryTokens;
-(unsigned long long)queryTokensCount;
-(void)clearQueryTokens;
-(id)queryTokensAtIndex:(unsigned long long)arg1 ;
-(void)addQueryTokens:(id)arg1 ;
-(unsigned long long)entriesCount;
-(void)clearEntries;
-(id)entriesAtIndex:(unsigned long long)arg1 ;
-(void)addEntries:(id)arg1 ;
-(void)setQueryTokens:(NSMutableArray *)arg1 ;
-(void)setHasSelectedIndex:(BOOL)arg1 ;
-(BOOL)hasSelectedIndex;
-(int)keypressStatus;
-(void)setKeypressStatus:(int)arg1 ;
-(void)setHasKeypressStatus:(BOOL)arg1 ;
-(BOOL)hasKeypressStatus;
-(id)keypressStatusAsString:(int)arg1 ;
-(int)StringAsKeypressStatus:(id)arg1 ;
-(int)withinSectionSelectedIndex;
-(void)setWithinSectionSelectedIndex:(int)arg1 ;
-(void)setHasWithinSectionSelectedIndex:(BOOL)arg1 ;
-(BOOL)hasWithinSectionSelectedIndex;
-(int)selectedSectionIndex;
-(void)setSelectedSectionIndex:(int)arg1 ;
-(void)setHasSelectedSectionIndex:(BOOL)arg1 ;
-(BOOL)hasSelectedSectionIndex;
-(BOOL)isRetainedQuery;
-(void)setIsRetainedQuery:(BOOL)arg1 ;
-(void)setHasIsRetainedQuery:(BOOL)arg1 ;
-(BOOL)hasIsRetainedQuery;
-(BOOL)isRerankerTriggered;
-(void)setIsRerankerTriggered:(BOOL)arg1 ;
-(void)setHasIsRerankerTriggered:(BOOL)arg1 ;
-(BOOL)hasIsRerankerTriggered;
-(long long)overallLatencyInMs;
-(void)setOverallLatencyInMs:(long long)arg1 ;
-(void)setHasOverallLatencyInMs:(BOOL)arg1 ;
-(BOOL)hasOverallLatencyInMs;
@end

