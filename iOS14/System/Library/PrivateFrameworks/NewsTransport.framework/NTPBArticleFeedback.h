/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBArticleFeedback : PBCodable <NSCopying> {

	NSString* _articleId;
	int _feedback;
	NSString* _language;
	NSString* _sourceChannelId;
	NSString* _topicId;
	SCD_Struct_NT3 _has;

}

@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;              //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                    //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) BOOL hasTopicId; 
@property (nonatomic,retain) NSString * topicId;                      //@synthesize topicId=_topicId - In the implementation block
@property (nonatomic,readonly) BOOL hasLanguage; 
@property (nonatomic,retain) NSString * language;                     //@synthesize language=_language - In the implementation block
@property (assign,nonatomic) BOOL hasFeedback; 
@property (assign,nonatomic) int feedback;                            //@synthesize feedback=_feedback - In the implementation block
-(void)setFeedback:(int)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasSourceChannelId;
-(BOOL)hasFeedback;
-(int)feedback;
-(NSString *)sourceChannelId;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(void)setHasFeedback:(BOOL)arg1 ;
-(BOOL)hasLanguage;
-(BOOL)hasArticleId;
-(void)setLanguage:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)topicId;
-(BOOL)hasTopicId;
-(void)setArticleId:(NSString *)arg1 ;
-(id)description;
-(NSString *)articleId;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
-(void)setTopicId:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

