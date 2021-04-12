/*
* Generated on Monday, March 1, 2021 at 2:32:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBDiscoverMoreInterstitialExposure : PBCodable <NSCopying> {

	int _nextArticleAffordanceType;
	NSString* _tappedNextArticleAffordanceFeedId;
	int _userAction;
	BOOL _withNextArticleAffordance;
	SCD_Struct_NT4 _has;

}

@property (assign,nonatomic) BOOL hasUserAction; 
@property (assign,nonatomic) int userAction;                                            //@synthesize userAction=_userAction - In the implementation block
@property (assign,nonatomic) BOOL hasWithNextArticleAffordance; 
@property (assign,nonatomic) BOOL withNextArticleAffordance;                            //@synthesize withNextArticleAffordance=_withNextArticleAffordance - In the implementation block
@property (assign,nonatomic) BOOL hasNextArticleAffordanceType; 
@property (assign,nonatomic) int nextArticleAffordanceType;                             //@synthesize nextArticleAffordanceType=_nextArticleAffordanceType - In the implementation block
@property (nonatomic,readonly) BOOL hasTappedNextArticleAffordanceFeedId; 
@property (nonatomic,retain) NSString * tappedNextArticleAffordanceFeedId;              //@synthesize tappedNextArticleAffordanceFeedId=_tappedNextArticleAffordanceFeedId - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)userAction;
-(void)setUserAction:(int)arg1 ;
-(void)setHasUserAction:(BOOL)arg1 ;
-(BOOL)hasUserAction;
-(int)nextArticleAffordanceType;
-(void)setNextArticleAffordanceType:(int)arg1 ;
-(void)setHasNextArticleAffordanceType:(BOOL)arg1 ;
-(BOOL)hasNextArticleAffordanceType;
-(id)nextArticleAffordanceTypeAsString:(int)arg1 ;
-(int)StringAsNextArticleAffordanceType:(id)arg1 ;
-(void)setTappedNextArticleAffordanceFeedId:(NSString *)arg1 ;
-(void)setWithNextArticleAffordance:(BOOL)arg1 ;
-(void)setHasWithNextArticleAffordance:(BOOL)arg1 ;
-(BOOL)hasWithNextArticleAffordance;
-(BOOL)hasTappedNextArticleAffordanceFeedId;
-(BOOL)withNextArticleAffordance;
-(NSString *)tappedNextArticleAffordanceFeedId;
@end

