/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString;

@interface GEOPDAutocompleteResultSection : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _entries;
	NSString* _name;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _numVisibleResults;
	int _suggestionType;
	int _type;
	BOOL _enforceServerResultsOrder;
	BOOL _shouldInterleaveClientResults;
	struct {
		unsigned has_numVisibleResults : 1;
		unsigned has_suggestionType : 1;
		unsigned has_type : 1;
		unsigned has_enforceServerResultsOrder : 1;
		unsigned has_shouldInterleaveClientResults : 1;
		unsigned read_unknownFields : 1;
		unsigned read_entries : 1;
		unsigned read_name : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_entries : 1;
		unsigned wrote_name : 1;
		unsigned wrote_numVisibleResults : 1;
		unsigned wrote_suggestionType : 1;
		unsigned wrote_type : 1;
		unsigned wrote_enforceServerResultsOrder : 1;
		unsigned wrote_shouldInterleaveClientResults : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSMutableArray * entries; 
@property (assign,nonatomic) BOOL hasSuggestionType; 
@property (assign,nonatomic) int suggestionType; 
@property (assign,nonatomic) BOOL hasNumVisibleResults; 
@property (assign,nonatomic) int numVisibleResults; 
@property (assign,nonatomic) BOOL hasShouldInterleaveClientResults; 
@property (assign,nonatomic) BOOL shouldInterleaveClientResults; 
@property (assign,nonatomic) BOOL hasEnforceServerResultsOrder; 
@property (assign,nonatomic) BOOL enforceServerResultsOrder; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)entriesType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(int)suggestionType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(BOOL)hasName;
-(void)setEntries:(NSMutableArray *)arg1 ;
-(NSMutableArray *)entries;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readName;
-(void)clearSensitiveFields;
-(BOOL)shouldInterleaveClientResults;
-(BOOL)enforceServerResultsOrder;
-(void)_readEntries;
-(void)_addNoFlagsEntries:(id)arg1 ;
-(unsigned long long)entriesCount;
-(void)clearEntries;
-(id)entriesAtIndex:(unsigned long long)arg1 ;
-(void)addEntries:(id)arg1 ;
-(void)setSuggestionType:(int)arg1 ;
-(void)setHasSuggestionType:(BOOL)arg1 ;
-(BOOL)hasSuggestionType;
-(id)suggestionTypeAsString:(int)arg1 ;
-(int)StringAsSuggestionType:(id)arg1 ;
-(int)numVisibleResults;
-(void)setNumVisibleResults:(int)arg1 ;
-(void)setHasNumVisibleResults:(BOOL)arg1 ;
-(BOOL)hasNumVisibleResults;
-(void)setShouldInterleaveClientResults:(BOOL)arg1 ;
-(void)setHasShouldInterleaveClientResults:(BOOL)arg1 ;
-(BOOL)hasShouldInterleaveClientResults;
-(void)setEnforceServerResultsOrder:(BOOL)arg1 ;
-(void)setHasEnforceServerResultsOrder:(BOOL)arg1 ;
-(BOOL)hasEnforceServerResultsOrder;
@end

