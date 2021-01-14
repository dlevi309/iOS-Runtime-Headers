/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDRating : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _appleRatingCategorys;
	double _maxScore;
	double _score;
	int _numRatingsUsedForScore;
	int _ratingType;
	struct {
		unsigned has_maxScore : 1;
		unsigned has_score : 1;
		unsigned has_numRatingsUsedForScore : 1;
		unsigned has_ratingType : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasRatingType; 
@property (assign,nonatomic) int ratingType; 
@property (assign,nonatomic) BOOL hasScore; 
@property (assign,nonatomic) double score; 
@property (assign,nonatomic) BOOL hasMaxScore; 
@property (assign,nonatomic) double maxScore; 
@property (assign,nonatomic) BOOL hasNumRatingsUsedForScore; 
@property (assign,nonatomic) int numRatingsUsedForScore; 
@property (nonatomic,retain) NSMutableArray * appleRatingCategorys; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)appleRatingCategoryType;
+(BOOL)isValid:(id)arg1 ;
+(id)ratingListForPlaceData:(id)arg1 type:(int)arg2 ;
+(id)ratingForPlaceData:(id)arg1 type:(int)arg2 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasScore;
-(void)setHasScore:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(double)score;
-(double)maxScore;
-(void)setScore:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(int)ratingType;
-(id)displayTitle;
-(void)setRatingType:(int)arg1 ;
-(void)setMaxScore:(double)arg1 ;
-(void)setHasRatingType:(BOOL)arg1 ;
-(void)setNumRatingsUsedForScore:(int)arg1 ;
-(void)addAppleRatingCategory:(id)arg1 ;
-(unsigned long long)appleRatingCategorysCount;
-(BOOL)hasRatingType;
-(void)clearAppleRatingCategorys;
-(id)appleRatingCategoryAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasMaxScore;
-(id)ratingTypeAsString:(int)arg1 ;
-(int)StringAsRatingType:(id)arg1 ;
-(void)setHasMaxScore:(BOOL)arg1 ;
-(int)numRatingsUsedForScore;
-(void)setHasNumRatingsUsedForScore:(BOOL)arg1 ;
-(BOOL)hasNumRatingsUsedForScore;
-(void)setAppleRatingCategorys:(NSMutableArray *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)appleRatingCategorys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

