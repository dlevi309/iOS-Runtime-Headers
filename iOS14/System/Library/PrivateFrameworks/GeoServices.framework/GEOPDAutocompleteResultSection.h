/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
		unsigned wrote_anyField : 1;
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
+(Class)entriesType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setEntries:(NSMutableArray *)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasName;
-(id)init;
-(int)StringAsType:(id)arg1 ;
-(id)jsonRepresentation;
-(void)clearSensitiveFields;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSMutableArray *)entries;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(unsigned long long)entriesCount;
-(void)setSuggestionType:(int)arg1 ;
-(void)setNumVisibleResults:(int)arg1 ;
-(void)setShouldInterleaveClientResults:(BOOL)arg1 ;
-(void)setEnforceServerResultsOrder:(BOOL)arg1 ;
-(void)clearEntries;
-(id)entriesAtIndex:(unsigned long long)arg1 ;
-(void)setHasSuggestionType:(BOOL)arg1 ;
-(BOOL)hasSuggestionType;
-(int)numVisibleResults;
-(id)suggestionTypeAsString:(int)arg1 ;
-(int)StringAsSuggestionType:(id)arg1 ;
-(void)setHasNumVisibleResults:(BOOL)arg1 ;
-(BOOL)hasNumVisibleResults;
-(BOOL)shouldInterleaveClientResults;
-(void)setHasShouldInterleaveClientResults:(BOOL)arg1 ;
-(BOOL)hasShouldInterleaveClientResults;
-(BOOL)enforceServerResultsOrder;
-(BOOL)hasEnforceServerResultsOrder;
-(void)setHasEnforceServerResultsOrder:(BOOL)arg1 ;
-(int)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)suggestionType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addEntries:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

