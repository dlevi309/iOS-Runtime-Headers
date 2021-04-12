/*
* Generated on Thursday, January 14, 2021 at 2:21:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSMutableArray;

@interface GEORating : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _uRL;
	double _maxScore;
	NSString* _provider;
	NSString* _ratingCategoryId;
	NSMutableArray* _reviews;
	double _score;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _numberOfRatings;
	int _numberOfReviews;
	struct {
		unsigned has_maxScore : 1;
		unsigned has_score : 1;
		unsigned has_numberOfRatings : 1;
		unsigned has_numberOfReviews : 1;
		unsigned read_unknownFields : 1;
		unsigned read_uRL : 1;
		unsigned read_provider : 1;
		unsigned read_ratingCategoryId : 1;
		unsigned read_reviews : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasScore; 
@property (assign,nonatomic) double score; 
@property (assign,nonatomic) BOOL hasMaxScore; 
@property (assign,nonatomic) double maxScore; 
@property (assign,nonatomic) BOOL hasNumberOfRatings; 
@property (assign,nonatomic) int numberOfRatings; 
@property (nonatomic,readonly) BOOL hasProvider; 
@property (nonatomic,retain) NSString * provider; 
@property (nonatomic,readonly) BOOL hasURL; 
@property (nonatomic,retain) NSString * uRL; 
@property (nonatomic,retain) NSMutableArray * reviews; 
@property (assign,nonatomic) BOOL hasNumberOfReviews; 
@property (assign,nonatomic) int numberOfReviews; 
@property (nonatomic,readonly) BOOL hasRatingCategoryId; 
@property (nonatomic,retain) NSString * ratingCategoryId; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)reviewType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasURL;
-(void)setProvider:(NSString *)arg1 ;
-(BOOL)hasScore;
-(void)setHasScore:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(NSString *)provider;
-(double)score;
-(double)maxScore;
-(void)setURL:(NSString *)arg1 ;
-(NSString *)uRL;
-(void)setScore:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)reviews;
-(id)initWithData:(id)arg1 ;
-(id)initWithSampleSizeForUserRatingScore:(unsigned)arg1 normalizedUserRatingScore:(float)arg2 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasProvider;
-(void)addReview:(id)arg1 ;
-(void)setReviews:(NSMutableArray *)arg1 ;
-(void)setMaxScore:(double)arg1 ;
-(BOOL)hasMaxScore;
-(void)setHasMaxScore:(BOOL)arg1 ;
-(id)description;
-(NSString *)ratingCategoryId;
-(void)setNumberOfRatings:(int)arg1 ;
-(void)setNumberOfReviews:(int)arg1 ;
-(void)setRatingCategoryId:(NSString *)arg1 ;
-(unsigned long long)reviewsCount;
-(void)clearReviews;
-(id)reviewAtIndex:(unsigned long long)arg1 ;
-(int)numberOfRatings;
-(void)setHasNumberOfRatings:(BOOL)arg1 ;
-(BOOL)hasNumberOfRatings;
-(int)numberOfReviews;
-(void)setHasNumberOfReviews:(BOOL)arg1 ;
-(BOOL)hasNumberOfReviews;
-(BOOL)hasRatingCategoryId;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

