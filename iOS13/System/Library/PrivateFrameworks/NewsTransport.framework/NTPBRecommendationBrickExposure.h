/*
* Generated on Monday, March 1, 2021 at 2:32:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NTPBRecommendationBrickExposure : PBCodable <NSCopying> {

	NSString* _feedId;
	int _feedType;
	int _recommendationBrickType;
	NSMutableArray* _recommendedFeedIds;
	BOOL _exposedFromReferredUser;
	SCD_Struct_NT4 _has;

}

@property (assign,nonatomic) BOOL hasFeedType; 
@property (assign,nonatomic) int feedType;                                     //@synthesize feedType=_feedType - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedId; 
@property (nonatomic,retain) NSString * feedId;                                //@synthesize feedId=_feedId - In the implementation block
@property (nonatomic,retain) NSMutableArray * recommendedFeedIds;              //@synthesize recommendedFeedIds=_recommendedFeedIds - In the implementation block
@property (assign,nonatomic) BOOL hasRecommendationBrickType; 
@property (assign,nonatomic) int recommendationBrickType;                      //@synthesize recommendationBrickType=_recommendationBrickType - In the implementation block
@property (assign,nonatomic) BOOL hasExposedFromReferredUser; 
@property (assign,nonatomic) BOOL exposedFromReferredUser;                     //@synthesize exposedFromReferredUser=_exposedFromReferredUser - In the implementation block
+(Class)recommendedFeedIdsType;
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
-(void)setHasFeedType:(BOOL)arg1 ;
-(BOOL)hasFeedType;
-(id)feedTypeAsString:(int)arg1 ;
-(int)StringAsFeedType:(id)arg1 ;
-(int)recommendationBrickType;
-(void)setRecommendationBrickType:(int)arg1 ;
-(void)setHasRecommendationBrickType:(BOOL)arg1 ;
-(BOOL)hasRecommendationBrickType;
-(id)recommendationBrickTypeAsString:(int)arg1 ;
-(int)StringAsRecommendationBrickType:(id)arg1 ;
-(void)addRecommendedFeedIds:(id)arg1 ;
-(void)clearRecommendedFeedIds;
-(unsigned long long)recommendedFeedIdsCount;
-(id)recommendedFeedIdsAtIndex:(unsigned long long)arg1 ;
-(void)setExposedFromReferredUser:(BOOL)arg1 ;
-(void)setHasExposedFromReferredUser:(BOOL)arg1 ;
-(BOOL)hasExposedFromReferredUser;
-(NSMutableArray *)recommendedFeedIds;
-(void)setRecommendedFeedIds:(NSMutableArray *)arg1 ;
-(BOOL)exposedFromReferredUser;
@end

