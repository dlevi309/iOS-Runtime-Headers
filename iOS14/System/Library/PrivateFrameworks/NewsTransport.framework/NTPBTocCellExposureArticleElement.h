/*
* Generated on Thursday, January 14, 2021 at 2:23:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBTocCellExposureArticleElement : PBCodable <NSCopying> {

	long long _publisherArticleVersionInt64;
	NSString* _articleId;
	int _articleType;
	NSString* _sourceChannelId;
	SCD_Struct_CO1 _has;

}

@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                                //@synthesize articleId=_articleId - In the implementation block
@property (assign,nonatomic) BOOL hasArticleType; 
@property (assign,nonatomic) int articleType;                                     //@synthesize articleType=_articleType - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;                          //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (assign,nonatomic) BOOL hasPublisherArticleVersionInt64; 
@property (assign,nonatomic) long long publisherArticleVersionInt64;              //@synthesize publisherArticleVersionInt64=_publisherArticleVersionInt64 - In the implementation block
-(BOOL)hasArticleType;
-(void)setPublisherArticleVersionInt64:(long long)arg1 ;
-(int)StringAsArticleType:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasSourceChannelId;
-(NSString *)sourceChannelId;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(int)articleType;
-(void)setHasArticleType:(BOOL)arg1 ;
-(void)setHasPublisherArticleVersionInt64:(BOOL)arg1 ;
-(BOOL)hasArticleId;
-(void)mergeFrom:(id)arg1 ;
-(void)setArticleType:(int)arg1 ;
-(void)setArticleId:(NSString *)arg1 ;
-(id)description;
-(NSString *)articleId;
-(BOOL)hasPublisherArticleVersionInt64;
-(long long)publisherArticleVersionInt64;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)articleTypeAsString:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

