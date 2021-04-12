/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_alternateSearchableNames : 1;
		unsigned wrote_interpretedCategory : 1;
		unsigned wrote_matchedDisplayNameLanguageCode : 1;
		unsigned wrote_matchedDisplayName : 1;
		unsigned wrote_normalizedQuery : 1;
		unsigned wrote_isDefaultName : 1;
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
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readMatchedDisplayName;
-(void)_readNormalizedQuery;
-(void)_readInterpretedCategory;
-(void)_readMatchedDisplayNameLanguageCode;
-(void)_readAlternateSearchableNames;
-(void)_addNoFlagsAlternateSearchableName:(id)arg1 ;
-(NSString *)matchedDisplayName;
-(NSString *)normalizedQuery;
-(NSString *)interpretedCategory;
-(NSString *)matchedDisplayNameLanguageCode;
-(void)setMatchedDisplayName:(NSString *)arg1 ;
-(void)setNormalizedQuery:(NSString *)arg1 ;
-(void)setInterpretedCategory:(NSString *)arg1 ;
-(void)setMatchedDisplayNameLanguageCode:(NSString *)arg1 ;
-(unsigned long long)alternateSearchableNamesCount;
-(void)clearAlternateSearchableNames;
-(id)alternateSearchableNameAtIndex:(unsigned long long)arg1 ;
-(void)addAlternateSearchableName:(id)arg1 ;
-(NSMutableArray *)alternateSearchableNames;
-(BOOL)hasMatchedDisplayName;
-(BOOL)isDefaultName;
-(void)setIsDefaultName:(BOOL)arg1 ;
-(void)setHasIsDefaultName:(BOOL)arg1 ;
-(BOOL)hasIsDefaultName;
-(BOOL)hasNormalizedQuery;
-(BOOL)hasInterpretedCategory;
-(BOOL)hasMatchedDisplayNameLanguageCode;
-(void)setAlternateSearchableNames:(NSMutableArray *)arg1 ;
@end

