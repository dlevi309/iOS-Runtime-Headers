/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBTranslationMap : PBCodable <NSCopying> {

	NSMutableArray* _favoritesLanguageBuckets;
	NSMutableArray* _topicLanguageBuckets;

}

@property (nonatomic,retain) NSMutableArray * topicLanguageBuckets;                  //@synthesize topicLanguageBuckets=_topicLanguageBuckets - In the implementation block
@property (nonatomic,retain) NSMutableArray * favoritesLanguageBuckets;              //@synthesize favoritesLanguageBuckets=_favoritesLanguageBuckets - In the implementation block
+(Class)topicLanguageBucketsType;
+(Class)favoritesLanguageBucketsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)topicLanguageBuckets;
-(NSMutableArray *)favoritesLanguageBuckets;
-(void)addTopicLanguageBuckets:(id)arg1 ;
-(void)addFavoritesLanguageBuckets:(id)arg1 ;
-(void)clearTopicLanguageBuckets;
-(unsigned long long)topicLanguageBucketsCount;
-(id)topicLanguageBucketsAtIndex:(unsigned long long)arg1 ;
-(void)clearFavoritesLanguageBuckets;
-(unsigned long long)favoritesLanguageBucketsCount;
-(id)favoritesLanguageBucketsAtIndex:(unsigned long long)arg1 ;
-(void)setTopicLanguageBuckets:(NSMutableArray *)arg1 ;
-(void)setFavoritesLanguageBuckets:(NSMutableArray *)arg1 ;
@end

