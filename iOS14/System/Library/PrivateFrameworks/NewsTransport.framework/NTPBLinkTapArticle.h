/*
* Generated on Thursday, January 14, 2021 at 2:23:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBLinkTapArticle : PBCodable <NSCopying> {

	NSString* _articleId;
	int _articleType;
	NSString* _linkUrl;
	NSString* _referencedArticleId;
	SCD_Struct_NT3 _has;

}

@property (nonatomic,readonly) BOOL hasLinkUrl; 
@property (nonatomic,retain) NSString * linkUrl;                          //@synthesize linkUrl=_linkUrl - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                        //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) BOOL hasReferencedArticleId; 
@property (nonatomic,retain) NSString * referencedArticleId;              //@synthesize referencedArticleId=_referencedArticleId - In the implementation block
@property (assign,nonatomic) BOOL hasArticleType; 
@property (assign,nonatomic) int articleType;                             //@synthesize articleType=_articleType - In the implementation block
-(BOOL)hasArticleType;
-(int)StringAsArticleType:(id)arg1 ;
-(void)setReferencedArticleId:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(int)articleType;
-(void)setHasArticleType:(BOOL)arg1 ;
-(BOOL)hasArticleId;
-(NSString *)referencedArticleId;
-(void)mergeFrom:(id)arg1 ;
-(void)setArticleType:(int)arg1 ;
-(BOOL)hasReferencedArticleId;
-(void)setArticleId:(NSString *)arg1 ;
-(id)description;
-(NSString *)articleId;
-(NSString *)linkUrl;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setLinkUrl:(NSString *)arg1 ;
-(BOOL)hasLinkUrl;
-(id)articleTypeAsString:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

