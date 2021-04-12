/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)dayOfWeek;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned)blurredHourOfDay;
-(void)setBlurredHourOfDay:(unsigned)arg1 ;
-(void)setHasBlurredHourOfDay:(BOOL)arg1 ;
-(BOOL)hasBlurredHourOfDay;
-(void)setDayOfWeek:(unsigned)arg1 ;
-(void)setHasDayOfWeek:(BOOL)arg1 ;
-(BOOL)hasDayOfWeek;
-(unsigned)maxCategories;
-(void)setMaxCategories:(unsigned)arg1 ;
-(void)setHasMaxCategories:(BOOL)arg1 ;
-(BOOL)hasMaxCategories;
-(unsigned)maxResultsPerCategory;
-(void)setMaxResultsPerCategory:(unsigned)arg1 ;
-(void)setHasMaxResultsPerCategory:(BOOL)arg1 ;
-(BOOL)hasMaxResultsPerCategory;
@end

