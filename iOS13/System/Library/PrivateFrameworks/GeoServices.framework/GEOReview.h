/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, GEOUser;

@interface GEOReview : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _languageCode;
	double _reviewTime;
	GEOUser* _reviewer;
	double _score;
	NSString* _snippet;
	NSString* _uid;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _isChinaSuppressed;
	struct {
		unsigned has_reviewTime : 1;
		unsigned has_score : 1;
		unsigned has_isChinaSuppressed : 1;
		unsigned read_unknownFields : 1;
		unsigned read_languageCode : 1;
		unsigned read_reviewer : 1;
		unsigned read_snippet : 1;
		unsigned read_uid : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_languageCode : 1;
		unsigned wrote_reviewTime : 1;
		unsigned wrote_reviewer : 1;
		unsigned wrote_score : 1;
		unsigned wrote_snippet : 1;
		unsigned wrote_uid : 1;
		unsigned wrote_isChinaSuppressed : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasSnippet; 
@property (nonatomic,retain) NSString * snippet; 
@property (assign,nonatomic) BOOL hasScore; 
@property (assign,nonatomic) double score; 
@property (assign,nonatomic) BOOL hasReviewTime; 
@property (assign,nonatomic) double reviewTime; 
@property (nonatomic,readonly) BOOL hasReviewer; 
@property (nonatomic,retain) GEOUser * reviewer; 
@property (nonatomic,readonly) BOOL hasUid; 
@property (nonatomic,retain) NSString * uid; 
@property (nonatomic,readonly) BOOL hasLanguageCode; 
@property (nonatomic,retain) NSString * languageCode; 
@property (assign,nonatomic) BOOL hasIsChinaSuppressed; 
@property (assign,nonatomic) BOOL isChinaSuppressed; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSString *)languageCode;
-(id)dictionaryRepresentation;
-(double)score;
-(NSString *)uid;
-(void)writeTo:(id)arg1 ;
-(void)setScore:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasScore:(BOOL)arg1 ;
-(BOOL)hasScore;
-(void)setUid:(NSString *)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readLanguageCode;
-(BOOL)hasLanguageCode;
-(BOOL)hasUid;
-(void)_readSnippet;
-(void)_readReviewer;
-(void)_readUid;
-(NSString *)snippet;
-(GEOUser *)reviewer;
-(void)setSnippet:(NSString *)arg1 ;
-(void)setReviewer:(GEOUser *)arg1 ;
-(BOOL)hasSnippet;
-(double)reviewTime;
-(void)setReviewTime:(double)arg1 ;
-(void)setHasReviewTime:(BOOL)arg1 ;
-(BOOL)hasReviewTime;
-(BOOL)hasReviewer;
-(BOOL)isChinaSuppressed;
-(void)setIsChinaSuppressed:(BOOL)arg1 ;
-(void)setHasIsChinaSuppressed:(BOOL)arg1 ;
-(BOOL)hasIsChinaSuppressed;
@end

