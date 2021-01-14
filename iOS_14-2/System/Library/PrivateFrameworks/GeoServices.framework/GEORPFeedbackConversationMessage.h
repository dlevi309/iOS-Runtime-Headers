/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
		unsigned wrote_anyField : 1;
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
+(Class)surveyResponseType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSString *)uuid;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(NSString *)comments;
-(void)setComments:(NSString *)arg1 ;
-(BOOL)hasComments;
-(BOOL)hasUuid;
-(void)setPostedBy:(GEORPPostedBy *)arg1 ;
-(void)setPostedAt:(GEORPTimestamp *)arg1 ;
-(BOOL)hasPostedBy;
-(void)addSurveyResponse:(id)arg1 ;
-(unsigned long long)surveyResponsesCount;
-(void)clearSurveyResponses;
-(id)surveyResponseAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasPostedAt;
-(NSMutableArray *)surveyResponses;
-(void)setSurveyResponses:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(GEORPPostedBy *)postedBy;
-(GEORPTimestamp *)postedAt;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

