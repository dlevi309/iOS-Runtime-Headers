/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBRecordBase, NSString, NSMutableArray;

@interface NTPBForYouConfigRecord : PBCodable <NSCopying> {

	NTPBRecordBase* _base;
	NSString* _configuration;
	NSMutableArray* _editorialArticleListIDs;
	NSMutableArray* _editorialSectionTagIDs;
	NSString* _spotlightArticleID;
	NSString* _todayFeedConfiguration;
	NSMutableArray* _todayFeedTopStoriesArticleIDs;
	NSString* _trendingArticleListID;

}

@property (nonatomic,readonly) BOOL hasBase; 
@property (nonatomic,retain) NTPBRecordBase * base;                                       //@synthesize base=_base - In the implementation block
@property (nonatomic,readonly) BOOL hasConfiguration; 
@property (nonatomic,retain) NSString * configuration;                                    //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) BOOL hasTrendingArticleListID; 
@property (nonatomic,retain) NSString * trendingArticleListID;                            //@synthesize trendingArticleListID=_trendingArticleListID - In the implementation block
@property (nonatomic,retain) NSMutableArray * editorialArticleListIDs;                    //@synthesize editorialArticleListIDs=_editorialArticleListIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * editorialSectionTagIDs;                     //@synthesize editorialSectionTagIDs=_editorialSectionTagIDs - In the implementation block
@property (nonatomic,readonly) BOOL hasSpotlightArticleID; 
@property (nonatomic,retain) NSString * spotlightArticleID;                               //@synthesize spotlightArticleID=_spotlightArticleID - In the implementation block
@property (nonatomic,retain) NSMutableArray * todayFeedTopStoriesArticleIDs;              //@synthesize todayFeedTopStoriesArticleIDs=_todayFeedTopStoriesArticleIDs - In the implementation block
@property (nonatomic,readonly) BOOL hasTodayFeedConfiguration; 
@property (nonatomic,retain) NSString * todayFeedConfiguration;                           //@synthesize todayFeedConfiguration=_todayFeedConfiguration - In the implementation block
+(Class)editorialSectionTagIDsType;
+(Class)editorialArticleListIDsType;
+(Class)todayFeedTopStoriesArticleIDsType;
-(id)dictionaryRepresentation;
-(NSMutableArray *)todayFeedTopStoriesArticleIDs;
-(void)setEditorialSectionTagIDs:(NSMutableArray *)arg1 ;
-(NTPBRecordBase *)base;
-(BOOL)hasTrendingArticleListID;
-(void)addEditorialArticleListIDs:(id)arg1 ;
-(void)setBase:(NTPBRecordBase *)arg1 ;
-(void)clearEditorialSectionTagIDs;
-(BOOL)hasBase;
-(void)setEditorialArticleListIDs:(NSMutableArray *)arg1 ;
-(id)editorialSectionTagIDsAtIndex:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasConfiguration;
-(unsigned long long)editorialArticleListIDsCount;
-(void)addEditorialSectionTagIDs:(id)arg1 ;
-(id)todayFeedTopStoriesArticleIDsAtIndex:(unsigned long long)arg1 ;
-(void)setSpotlightArticleID:(NSString *)arg1 ;
-(void)setTrendingArticleListID:(NSString *)arg1 ;
-(id)description;
-(NSString *)configuration;
-(unsigned long long)editorialSectionTagIDsCount;
-(NSMutableArray *)editorialArticleListIDs;
-(void)clearTodayFeedTopStoriesArticleIDs;
-(unsigned long long)todayFeedTopStoriesArticleIDsCount;
-(NSString *)trendingArticleListID;
-(BOOL)hasSpotlightArticleID;
-(BOOL)hasTodayFeedConfiguration;
-(NSString *)spotlightArticleID;
-(unsigned long long)hash;
-(void)setTodayFeedTopStoriesArticleIDs:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)clearEditorialArticleListIDs;
-(void)addTodayFeedTopStoriesArticleIDs:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)editorialArticleListIDsAtIndex:(unsigned long long)arg1 ;
-(NSString *)todayFeedConfiguration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)editorialSectionTagIDs;
-(void)setTodayFeedConfiguration:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setConfiguration:(NSString *)arg1 ;
@end

