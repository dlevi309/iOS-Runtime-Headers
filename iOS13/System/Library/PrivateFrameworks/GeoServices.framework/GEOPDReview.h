/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_rating : 1;
		unsigned wrote_reviewId : 1;
		unsigned wrote_reviewTime : 1;
		unsigned wrote_reviewer : 1;
		unsigned wrote_snippets : 1;
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
+(BOOL)isValid:(id)arg1 ;
+(id)reviewsForPlaceData:(id)arg1 ;
+(Class)snippetType;
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
-(NSMutableArray *)snippets;
-(void)_readReviewer;
-(GEOPDUser *)reviewer;
-(void)setReviewer:(GEOPDUser *)arg1 ;
-(double)reviewTime;
-(void)setReviewTime:(double)arg1 ;
-(void)setHasReviewTime:(BOOL)arg1 ;
-(BOOL)hasReviewTime;
-(BOOL)hasReviewer;
-(GEOPDRating *)rating;
-(id)_bestSnippet;
-(id)_bestSnippetLocale;
-(void)_readSnippets;
-(void)_addNoFlagsSnippet:(id)arg1 ;
-(void)_readReviewId;
-(void)_readRating;
-(NSString *)reviewId;
-(unsigned long long)snippetsCount;
-(void)clearSnippets;
-(id)snippetAtIndex:(unsigned long long)arg1 ;
-(void)addSnippet:(id)arg1 ;
-(void)setReviewId:(NSString *)arg1 ;
-(void)setRating:(GEOPDRating *)arg1 ;
-(void)setSnippets:(NSMutableArray *)arg1 ;
-(BOOL)hasReviewId;
-(BOOL)hasRating;
@end

