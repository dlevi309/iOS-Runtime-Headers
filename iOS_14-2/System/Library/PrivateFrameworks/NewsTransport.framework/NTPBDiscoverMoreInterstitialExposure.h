/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_NT5 _has;

}

@property (assign,nonatomic) BOOL hasUserAction; 
@property (assign,nonatomic) int userAction;                                            //@synthesize userAction=_userAction - In the implementation block
@property (assign,nonatomic) BOOL hasWithNextArticleAffordance; 
@property (assign,nonatomic) BOOL withNextArticleAffordance;                            //@synthesize withNextArticleAffordance=_withNextArticleAffordance - In the implementation block
@property (assign,nonatomic) BOOL hasNextArticleAffordanceType; 
@property (assign,nonatomic) int nextArticleAffordanceType;                             //@synthesize nextArticleAffordanceType=_nextArticleAffordanceType - In the implementation block
@property (nonatomic,readonly) BOOL hasTappedNextArticleAffordanceFeedId; 
@property (nonatomic,retain) NSString * tappedNextArticleAffordanceFeedId;              //@synthesize tappedNextArticleAffordanceFeedId=_tappedNextArticleAffordanceFeedId - In the implementation block
-(BOOL)hasNextArticleAffordanceType;
-(id)dictionaryRepresentation;
-(void)setNextArticleAffordanceType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)nextArticleAffordanceTypeAsString:(int)arg1 ;
-(id)description;
-(int)StringAsNextArticleAffordanceType:(id)arg1 ;
-(int)userAction;
-(void)setHasNextArticleAffordanceType:(BOOL)arg1 ;
-(BOOL)hasUserAction;
-(unsigned long long)hash;
-(void)setTappedNextArticleAffordanceFeedId:(NSString *)arg1 ;
-(void)setWithNextArticleAffordance:(BOOL)arg1 ;
-(void)setHasWithNextArticleAffordance:(BOOL)arg1 ;
-(BOOL)hasWithNextArticleAffordance;
-(BOOL)hasTappedNextArticleAffordanceFeedId;
-(BOOL)withNextArticleAffordance;
-(NSString *)tappedNextArticleAffordanceFeedId;
-(int)nextArticleAffordanceType;
-(BOOL)readFrom:(id)arg1 ;
-(void)setUserAction:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasUserAction:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

