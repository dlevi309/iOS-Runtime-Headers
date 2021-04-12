/*
* Generated on Monday, March 1, 2021 at 2:32:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_NT1 _has;

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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(int)feedback;
-(void)setFeedback:(int)arg1 ;
-(BOOL)hasLanguage;
-(BOOL)hasFeedback;
-(void)setArticleId:(NSString *)arg1 ;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(BOOL)hasArticleId;
-(BOOL)hasSourceChannelId;
-(NSString *)articleId;
-(NSString *)sourceChannelId;
-(void)setTopicId:(NSString *)arg1 ;
-(BOOL)hasTopicId;
-(void)setHasFeedback:(BOOL)arg1 ;
-(NSString *)topicId;
@end

