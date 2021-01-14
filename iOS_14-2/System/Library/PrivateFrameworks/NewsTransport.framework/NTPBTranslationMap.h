/*
* Generated on Thursday, January 14, 2021 at 2:23:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTopicLanguageBuckets:(NSMutableArray *)arg1 ;
-(void)setFavoritesLanguageBuckets:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

