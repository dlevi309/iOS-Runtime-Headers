/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_CO1 _has;

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
-(void)setReferencedArticleId:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setFeedId:(NSString *)arg1 ;
-(int)feedType;
-(BOOL)hasArticleId;
-(id)feedTypeAsString:(int)arg1 ;
-(void)setFeedType:(int)arg1 ;
-(int)feedMenuType;
-(void)setFeedMenuType:(int)arg1 ;
-(void)setHasFeedMenuType:(BOOL)arg1 ;
-(BOOL)hasFeedMenuType;
-(NSString *)referencedArticleId;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasReferencedArticleId;
-(void)setArticleId:(NSString *)arg1 ;
-(id)description;
-(BOOL)hasFeedId;
-(NSString *)articleId;
-(int)StringAsFeedType:(id)arg1 ;
-(void)setHasFeedType:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)feedId;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasFeedType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

