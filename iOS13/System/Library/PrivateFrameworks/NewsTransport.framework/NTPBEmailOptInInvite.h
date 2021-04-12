/*
* Generated on Monday, March 1, 2021 at 2:32:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBEmailOptInInvite : PBCodable <NSCopying> {

	NSString* _articleId;
	int _emailOptInInviteLocation;
	NSString* _parentFeedId;
	int _parentFeedType;
	int _userAction;
	SCD_Struct_NT4 _has;

}

@property (assign,nonatomic) BOOL hasUserAction; 
@property (assign,nonatomic) int userAction;                                //@synthesize userAction=_userAction - In the implementation block
@property (assign,nonatomic) BOOL hasEmailOptInInviteLocation; 
@property (assign,nonatomic) int emailOptInInviteLocation;                  //@synthesize emailOptInInviteLocation=_emailOptInInviteLocation - In the implementation block
@property (assign,nonatomic) BOOL hasParentFeedType; 
@property (assign,nonatomic) int parentFeedType;                            //@synthesize parentFeedType=_parentFeedType - In the implementation block
@property (nonatomic,readonly) BOOL hasParentFeedId; 
@property (nonatomic,retain) NSString * parentFeedId;                       //@synthesize parentFeedId=_parentFeedId - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                          //@synthesize articleId=_articleId - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)userAction;
-(void)setArticleId:(NSString *)arg1 ;
-(BOOL)hasArticleId;
-(NSString *)articleId;
-(void)setParentFeedId:(NSString *)arg1 ;
-(int)parentFeedType;
-(void)setParentFeedType:(int)arg1 ;
-(void)setHasParentFeedType:(BOOL)arg1 ;
-(BOOL)hasParentFeedType;
-(id)parentFeedTypeAsString:(int)arg1 ;
-(int)StringAsParentFeedType:(id)arg1 ;
-(BOOL)hasParentFeedId;
-(NSString *)parentFeedId;
-(void)setUserAction:(int)arg1 ;
-(void)setHasUserAction:(BOOL)arg1 ;
-(BOOL)hasUserAction;
-(int)emailOptInInviteLocation;
-(void)setEmailOptInInviteLocation:(int)arg1 ;
-(void)setHasEmailOptInInviteLocation:(BOOL)arg1 ;
-(BOOL)hasEmailOptInInviteLocation;
@end

