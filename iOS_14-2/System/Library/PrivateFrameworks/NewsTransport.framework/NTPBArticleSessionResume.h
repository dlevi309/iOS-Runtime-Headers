/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NTPBArticleSessionResume : PBCodable <NSCopying> {

	long long _publisherArticleVersion;
	NSString* _articleId;
	int _articleType;
	NSData* _articleViewingSessionId;
	NSString* _sourceChannelId;
	SCD_Struct_CO1 _has;

}

@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                           //@synthesize articleId=_articleId - In the implementation block
@property (assign,nonatomic) BOOL hasArticleType; 
@property (assign,nonatomic) int articleType;                                //@synthesize articleType=_articleType - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;                     //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (assign,nonatomic) BOOL hasPublisherArticleVersion; 
@property (assign,nonatomic) long long publisherArticleVersion;              //@synthesize publisherArticleVersion=_publisherArticleVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleViewingSessionId; 
@property (nonatomic,retain) NSData * articleViewingSessionId;               //@synthesize articleViewingSessionId=_articleViewingSessionId - In the implementation block
-(BOOL)hasArticleType;
-(int)StringAsArticleType:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasSourceChannelId;
-(BOOL)hasArticleViewingSessionId;
-(void)setArticleViewingSessionId:(NSData *)arg1 ;
-(NSString *)sourceChannelId;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(NSData *)articleViewingSessionId;
-(int)articleType;
-(void)setHasArticleType:(BOOL)arg1 ;
-(BOOL)hasArticleId;
-(void)mergeFrom:(id)arg1 ;
-(void)setPublisherArticleVersion:(long long)arg1 ;
-(long long)publisherArticleVersion;
-(void)setArticleType:(int)arg1 ;
-(void)setArticleId:(NSString *)arg1 ;
-(void)setHasPublisherArticleVersion:(BOOL)arg1 ;
-(id)description;
-(NSString *)articleId;
-(unsigned long long)hash;
-(BOOL)hasPublisherArticleVersion;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)articleTypeAsString:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

