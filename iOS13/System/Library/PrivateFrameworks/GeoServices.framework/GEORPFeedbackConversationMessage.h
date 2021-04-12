/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, GEORPTimestamp, GEORPPostedBy, NSMutableArray;

@interface GEORPFeedbackConversationMessage : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _comments;
	GEORPTimestamp* _postedAt;
	GEORPPostedBy* _postedBy;
	NSMutableArray* _surveyResponses;
	NSString* _uuid;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_comments : 1;
		unsigned read_postedAt : 1;
		unsigned read_postedBy : 1;
		unsigned read_surveyResponses : 1;
		unsigned read_uuid : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_comments : 1;
		unsigned wrote_postedAt : 1;
		unsigned wrote_postedBy : 1;
		unsigned wrote_surveyResponses : 1;
		unsigned wrote_uuid : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasUuid; 
@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,readonly) BOOL hasPostedBy; 
@property (nonatomic,retain) GEORPPostedBy * postedBy; 
@property (nonatomic,readonly) BOOL hasPostedAt; 
@property (nonatomic,retain) GEORPTimestamp * postedAt; 
@property (nonatomic,readonly) BOOL hasComments; 
@property (nonatomic,retain) NSString * comments; 
@property (nonatomic,retain) NSMutableArray * surveyResponses; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)surveyResponseType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readComments;
-(NSString *)comments;
-(void)setComments:(NSString *)arg1 ;
-(BOOL)hasComments;
-(void)_readUuid;
-(void)_readPostedBy;
-(void)_readPostedAt;
-(void)_readSurveyResponses;
-(void)_addNoFlagsSurveyResponse:(id)arg1 ;
-(GEORPPostedBy *)postedBy;
-(GEORPTimestamp *)postedAt;
-(void)setPostedBy:(GEORPPostedBy *)arg1 ;
-(void)setPostedAt:(GEORPTimestamp *)arg1 ;
-(unsigned long long)surveyResponsesCount;
-(void)clearSurveyResponses;
-(id)surveyResponseAtIndex:(unsigned long long)arg1 ;
-(void)addSurveyResponse:(id)arg1 ;
-(NSMutableArray *)surveyResponses;
-(BOOL)hasUuid;
-(BOOL)hasPostedBy;
-(BOOL)hasPostedAt;
-(void)setSurveyResponses:(NSMutableArray *)arg1 ;
@end

