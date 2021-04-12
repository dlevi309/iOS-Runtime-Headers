/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBFeedEngagementMenuExposure : PBCodable <NSCopying> {

	NSString* _articleId;
	NSString* _feedId;
	int _feedMenuType;
	int _feedType;
	NSString* _referencedArticleId;
	SCD_Struct_NT2 _has;

}

@property (assign,nonatomic) BOOL hasFeedType; 
@property (assign,nonatomic) int feedType;                                //@synthesize feedType=_feedType - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedId; 
@property (nonatomic,retain) NSString * feedId;                           //@synthesize feedId=_feedId - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                        //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) BOOL hasReferencedArticleId; 
@property (nonatomic,retain) NSString * referencedArticleId;              //@synthesize referencedArticleId=_referencedArticleId - In the implementation block
@property (assign,nonatomic) BOOL hasFeedMenuType; 
@property (assign,nonatomic) int feedMenuType;                            //@synthesize feedMenuType=_feedMenuType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)feedId;
-(void)setFeedId:(NSString *)arg1 ;
-(BOOL)hasFeedId;
-(int)feedType;
-(void)setFeedType:(int)arg1 ;
-(void)setArticleId:(NSString *)arg1 ;
-(BOOL)hasArticleId;
-(NSString *)articleId;
-(void)setHasFeedType:(BOOL)arg1 ;
-(BOOL)hasFeedType;
-(id)feedTypeAsString:(int)arg1 ;
-(int)StringAsFeedType:(id)arg1 ;
-(void)setReferencedArticleId:(NSString *)arg1 ;
-(BOOL)hasReferencedArticleId;
-(NSString *)referencedArticleId;
-(int)feedMenuType;
-(void)setFeedMenuType:(int)arg1 ;
-(void)setHasFeedMenuType:(BOOL)arg1 ;
-(BOOL)hasFeedMenuType;
@end

