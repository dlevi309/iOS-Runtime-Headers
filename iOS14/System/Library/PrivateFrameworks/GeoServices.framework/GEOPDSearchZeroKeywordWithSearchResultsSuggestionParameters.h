/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDSearchZeroKeywordWithSearchResultsSuggestionParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _blurredHourOfDay;
	unsigned _dayOfWeek;
	unsigned _maxCategories;
	unsigned _maxResultsPerCategory;
	struct {
		unsigned has_blurredHourOfDay : 1;
		unsigned has_dayOfWeek : 1;
		unsigned has_maxCategories : 1;
		unsigned has_maxResultsPerCategory : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasMaxCategories; 
@property (assign,nonatomic) unsigned maxCategories; 
@property (assign,nonatomic) BOOL hasMaxResultsPerCategory; 
@property (assign,nonatomic) unsigned maxResultsPerCategory; 
@property (assign,nonatomic) BOOL hasBlurredHourOfDay; 
@property (assign,nonatomic) unsigned blurredHourOfDay; 
@property (assign,nonatomic) BOOL hasDayOfWeek; 
@property (assign,nonatomic) unsigned dayOfWeek; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)dayOfWeek;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)setDayOfWeek:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setHasDayOfWeek:(BOOL)arg1 ;
-(void)setBlurredHourOfDay:(unsigned)arg1 ;
-(unsigned)blurredHourOfDay;
-(void)setHasBlurredHourOfDay:(BOOL)arg1 ;
-(BOOL)hasBlurredHourOfDay;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setMaxCategories:(unsigned)arg1 ;
-(void)setMaxResultsPerCategory:(unsigned)arg1 ;
-(unsigned)maxCategories;
-(void)setHasMaxCategories:(BOOL)arg1 ;
-(BOOL)hasMaxCategories;
-(unsigned)maxResultsPerCategory;
-(void)setHasMaxResultsPerCategory:(BOOL)arg1 ;
-(BOOL)hasMaxResultsPerCategory;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasDayOfWeek;
@end

