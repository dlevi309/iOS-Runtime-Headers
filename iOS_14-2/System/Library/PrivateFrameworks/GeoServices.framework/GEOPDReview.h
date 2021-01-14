/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDRating, NSString, GEOPDUser, NSMutableArray;

@interface GEOPDReview : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDRating* _rating;
	NSString* _reviewId;
	double _reviewTime;
	GEOPDUser* _reviewer;
	NSMutableArray* _snippets;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_reviewTime : 1;
		unsigned read_unknownFields : 1;
		unsigned read_rating : 1;
		unsigned read_reviewId : 1;
		unsigned read_reviewer : 1;
		unsigned read_snippets : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * snippets; 
@property (assign,nonatomic) BOOL hasReviewTime; 
@property (assign,nonatomic) double reviewTime; 
@property (nonatomic,readonly) BOOL hasReviewer; 
@property (nonatomic,retain) GEOPDUser * reviewer; 
@property (nonatomic,readonly) BOOL hasReviewId; 
@property (nonatomic,retain) NSString * reviewId; 
@property (nonatomic,readonly) BOOL hasRating; 
@property (nonatomic,retain) GEOPDRating * rating; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)snippetType;
+(BOOL)isValid:(id)arg1 ;
+(id)reviewsForPlaceData:(id)arg1 ;
-(GEOPDRating *)rating;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(NSMutableArray *)snippets;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasRating;
-(id)initWithData:(id)arg1 ;
-(void)setRating:(GEOPDRating *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(GEOPDUser *)reviewer;
-(double)reviewTime;
-(void)addSnippet:(id)arg1 ;
-(void)setReviewTime:(double)arg1 ;
-(void)setReviewer:(GEOPDUser *)arg1 ;
-(void)setReviewId:(NSString *)arg1 ;
-(unsigned long long)snippetsCount;
-(void)clearSnippets;
-(id)snippetAtIndex:(unsigned long long)arg1 ;
-(void)setSnippets:(NSMutableArray *)arg1 ;
-(void)setHasReviewTime:(BOOL)arg1 ;
-(BOOL)hasReviewTime;
-(BOOL)hasReviewer;
-(BOOL)hasReviewId;
-(id)description;
-(NSString *)reviewId;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)_bestSnippet;
-(id)_bestSnippetLocale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

