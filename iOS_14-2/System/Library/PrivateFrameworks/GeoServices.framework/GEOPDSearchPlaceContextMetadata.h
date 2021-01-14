/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString;

@interface GEOPDSearchPlaceContextMetadata : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _alternateSearchableNames;
	NSString* _interpretedCategory;
	NSString* _matchedDisplayNameLanguageCode;
	NSString* _matchedDisplayName;
	NSString* _normalizedQuery;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _isDefaultName;
	struct {
		unsigned has_isDefaultName : 1;
		unsigned read_unknownFields : 1;
		unsigned read_alternateSearchableNames : 1;
		unsigned read_interpretedCategory : 1;
		unsigned read_matchedDisplayNameLanguageCode : 1;
		unsigned read_matchedDisplayName : 1;
		unsigned read_normalizedQuery : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasMatchedDisplayName; 
@property (nonatomic,retain) NSString * matchedDisplayName; 
@property (assign,nonatomic) BOOL hasIsDefaultName; 
@property (assign,nonatomic) BOOL isDefaultName; 
@property (nonatomic,readonly) BOOL hasNormalizedQuery; 
@property (nonatomic,retain) NSString * normalizedQuery; 
@property (nonatomic,readonly) BOOL hasInterpretedCategory; 
@property (nonatomic,retain) NSString * interpretedCategory; 
@property (nonatomic,readonly) BOOL hasMatchedDisplayNameLanguageCode; 
@property (nonatomic,retain) NSString * matchedDisplayNameLanguageCode; 
@property (nonatomic,retain) NSMutableArray * alternateSearchableNames; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)alternateSearchableNameType;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(unsigned long long)alternateSearchableNamesCount;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)isDefaultName;
-(NSString *)matchedDisplayName;
-(NSString *)matchedDisplayNameLanguageCode;
-(void)setIsDefaultName:(BOOL)arg1 ;
-(void)setMatchedDisplayName:(NSString *)arg1 ;
-(void)setHasIsDefaultName:(BOOL)arg1 ;
-(void)setMatchedDisplayNameLanguageCode:(NSString *)arg1 ;
-(BOOL)hasIsDefaultName;
-(BOOL)hasMatchedDisplayName;
-(BOOL)hasMatchedDisplayNameLanguageCode;
-(void)mergeFrom:(id)arg1 ;
-(void)setAlternateSearchableNames:(NSMutableArray *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSMutableArray *)alternateSearchableNames;
-(NSString *)normalizedQuery;
-(NSString *)interpretedCategory;
-(void)setNormalizedQuery:(NSString *)arg1 ;
-(void)setInterpretedCategory:(NSString *)arg1 ;
-(BOOL)hasNormalizedQuery;
-(BOOL)hasInterpretedCategory;
-(id)description;
-(unsigned long long)hash;
-(void)addAlternateSearchableName:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)clearAlternateSearchableNames;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)alternateSearchableNameAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

