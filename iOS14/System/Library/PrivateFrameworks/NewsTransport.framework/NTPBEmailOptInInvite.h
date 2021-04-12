/*
* Generated on Thursday, January 14, 2021 at 2:23:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBEmailOptInInvite : PBCodable <NSCopying> {

	NSString* _articleId;
	int _emailOptInInviteLocation;
	int _newsletterSubscriptionType;
	NSString* _parentFeedId;
	int _parentFeedType;
	int _userAction;
	SCD_Struct_NT2 _has;

}

@property (assign,nonatomic) BOOL hasUserAction; 
@property (assign,nonatomic) int userAction;                                  //@synthesize userAction=_userAction - In the implementation block
@property (assign,nonatomic) BOOL hasEmailOptInInviteLocation; 
@property (assign,nonatomic) int emailOptInInviteLocation;                    //@synthesize emailOptInInviteLocation=_emailOptInInviteLocation - In the implementation block
@property (assign,nonatomic) BOOL hasParentFeedType; 
@property (assign,nonatomic) int parentFeedType;                              //@synthesize parentFeedType=_parentFeedType - In the implementation block
@property (nonatomic,readonly) BOOL hasParentFeedId; 
@property (nonatomic,retain) NSString * parentFeedId;                         //@synthesize parentFeedId=_parentFeedId - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                            //@synthesize articleId=_articleId - In the implementation block
@property (assign,nonatomic) BOOL hasNewsletterSubscriptionType; 
@property (assign,nonatomic) int newsletterSubscriptionType;                  //@synthesize newsletterSubscriptionType=_newsletterSubscriptionType - In the implementation block
-(BOOL)hasParentFeedType;
-(void)setHasParentFeedType:(BOOL)arg1 ;
-(int)parentFeedType;
-(id)dictionaryRepresentation;
-(id)parentFeedTypeAsString:(int)arg1 ;
-(BOOL)hasArticleId;
-(void)mergeFrom:(id)arg1 ;
-(void)setArticleId:(NSString *)arg1 ;
-(id)description;
-(NSString *)articleId;
-(int)userAction;
-(BOOL)hasUserAction;
-(int)emailOptInInviteLocation;
-(void)setEmailOptInInviteLocation:(int)arg1 ;
-(void)setHasEmailOptInInviteLocation:(BOOL)arg1 ;
-(BOOL)hasEmailOptInInviteLocation;
-(void)setNewsletterSubscriptionType:(int)arg1 ;
-(void)setHasNewsletterSubscriptionType:(BOOL)arg1 ;
-(BOOL)hasNewsletterSubscriptionType;
-(int)newsletterSubscriptionType;
-(void)setParentFeedType:(int)arg1 ;
-(unsigned long long)hash;
-(int)StringAsParentFeedType:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setParentFeedId:(NSString *)arg1 ;
-(BOOL)hasParentFeedId;
-(void)setUserAction:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)parentFeedId;
-(void)setHasUserAction:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

