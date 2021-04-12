/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned read_reviews : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_uRL : 1;
		unsigned wrote_maxScore : 1;
		unsigned wrote_provider : 1;
		unsigned wrote_reviews : 1;
		unsigned wrote_score : 1;
		unsigned wrote_numberOfRatings : 1;
		unsigned wrote_numberOfReviews : 1;
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
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)reviewType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setURL:(NSString *)arg1 ;
-(double)score;
-(void)setProvider:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(double)maxScore;
-(void)setMaxScore:(double)arg1 ;
-(void)setScore:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasScore:(BOOL)arg1 ;
-(BOOL)hasScore;
-(NSString *)provider;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readURL;
-(NSString *)uRL;
-(BOOL)hasURL;
-(void)_readProvider;
-(void)_readReviews;
-(void)_addNoFlagsReview:(id)arg1 ;
-(unsigned long long)reviewsCount;
-(void)clearReviews;
-(id)reviewAtIndex:(unsigned long long)arg1 ;
-(void)addReview:(id)arg1 ;
-(NSMutableArray *)reviews;
-(void)setHasMaxScore:(BOOL)arg1 ;
-(BOOL)hasMaxScore;
-(int)numberOfRatings;
-(void)setNumberOfRatings:(int)arg1 ;
-(void)setHasNumberOfRatings:(BOOL)arg1 ;
-(BOOL)hasNumberOfRatings;
-(BOOL)hasProvider;
-(void)setReviews:(NSMutableArray *)arg1 ;
-(int)numberOfReviews;
-(void)setNumberOfReviews:(int)arg1 ;
-(void)setHasNumberOfReviews:(BOOL)arg1 ;
-(BOOL)hasNumberOfReviews;
-(id)initWithSampleSizeForUserRatingScore:(unsigned)arg1 normalizedUserRatingScore:(float)arg2 ;
@end

