/*
* Generated on Monday, March 1, 2021 at 2:32:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface NTPBCategory : PBCodable <NSCopying> {

	NSMutableArray* _categoryHierarchys;
	NSMutableArray* _curatedTagIds;
	NSString* _entityId;
	NSString* _name;
	NSMutableArray* _recommendedChannels;
	NSMutableArray* _recommendedTopics;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasEntityId; 
@property (nonatomic,retain) NSString * entityId;                               //@synthesize entityId=_entityId - In the implementation block
@property (nonatomic,retain) NSMutableArray * recommendedTopics;                //@synthesize recommendedTopics=_recommendedTopics - In the implementation block
@property (nonatomic,retain) NSMutableArray * recommendedChannels;              //@synthesize recommendedChannels=_recommendedChannels - In the implementation block
@property (nonatomic,retain) NSMutableArray * categoryHierarchys;               //@synthesize categoryHierarchys=_categoryHierarchys - In the implementation block
@property (nonatomic,retain) NSMutableArray * curatedTagIds;                    //@synthesize curatedTagIds=_curatedTagIds - In the implementation block
+(Class)recommendedTopicsType;
+(Class)recommendedChannelsType;
+(Class)categoryHierarchyType;
+(Class)curatedTagIdsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasName;
-(NSString *)entityId;
-(void)setEntityId:(NSString *)arg1 ;
-(void)addRecommendedTopics:(id)arg1 ;
-(void)addRecommendedChannels:(id)arg1 ;
-(void)addCategoryHierarchy:(id)arg1 ;
-(void)addCuratedTagIds:(id)arg1 ;
-(BOOL)hasEntityId;
-(void)clearRecommendedTopics;
-(unsigned long long)recommendedTopicsCount;
-(id)recommendedTopicsAtIndex:(unsigned long long)arg1 ;
-(void)clearRecommendedChannels;
-(unsigned long long)recommendedChannelsCount;
-(id)recommendedChannelsAtIndex:(unsigned long long)arg1 ;
-(void)clearCategoryHierarchys;
-(unsigned long long)categoryHierarchysCount;
-(id)categoryHierarchyAtIndex:(unsigned long long)arg1 ;
-(void)clearCuratedTagIds;
-(unsigned long long)curatedTagIdsCount;
-(id)curatedTagIdsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)recommendedTopics;
-(void)setRecommendedTopics:(NSMutableArray *)arg1 ;
-(NSMutableArray *)recommendedChannels;
-(void)setRecommendedChannels:(NSMutableArray *)arg1 ;
-(NSMutableArray *)categoryHierarchys;
-(void)setCategoryHierarchys:(NSMutableArray *)arg1 ;
-(NSMutableArray *)curatedTagIds;
-(void)setCuratedTagIds:(NSMutableArray *)arg1 ;
@end

