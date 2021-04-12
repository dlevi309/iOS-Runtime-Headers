/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBRecordBase, NSMutableArray, NSString;

@interface NTPBForYouConfigRecord : PBCodable <NSCopying> {

	NTPBRecordBase* _base;
	NSMutableArray* _breakingNewsArticleIDs;
	NSString* _configuration;
	NSString* _coverArticlesArticleListID;
	NSMutableArray* _editorialArticleListIDs;
	NSMutableArray* _editorialSectionTagIDs;
	NSString* _moreVideosArticleListID;
	NSMutableArray* _specialEventArticleIDs;
	NSString* _spotlightArticleID;
	NSString* _todayFeedConfiguration;
	NSMutableArray* _todayFeedTopStoriesArticleIDs;
	NSMutableArray* _topStoriesCombinedArticleIDs;
	NSMutableArray* _topVideosArticleIDs;
	NSString* _trendingArticleListID;

}

@property (nonatomic,readonly) BOOL hasBase; 
@property (nonatomic,retain) NTPBRecordBase * base;                                       //@synthesize base=_base - In the implementation block
@property (nonatomic,readonly) BOOL hasConfiguration; 
@property (nonatomic,retain) NSString * configuration;                                    //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) BOOL hasTrendingArticleListID; 
@property (nonatomic,retain) NSString * trendingArticleListID;                            //@synthesize trendingArticleListID=_trendingArticleListID - In the implementation block
@property (nonatomic,readonly) BOOL hasCoverArticlesArticleListID; 
@property (nonatomic,retain) NSString * coverArticlesArticleListID;                       //@synthesize coverArticlesArticleListID=_coverArticlesArticleListID - In the implementation block
@property (nonatomic,retain) NSMutableArray * editorialArticleListIDs;                    //@synthesize editorialArticleListIDs=_editorialArticleListIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * editorialSectionTagIDs;                     //@synthesize editorialSectionTagIDs=_editorialSectionTagIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * breakingNewsArticleIDs;                     //@synthesize breakingNewsArticleIDs=_breakingNewsArticleIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * topStoriesCombinedArticleIDs;               //@synthesize topStoriesCombinedArticleIDs=_topStoriesCombinedArticleIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * specialEventArticleIDs;                     //@synthesize specialEventArticleIDs=_specialEventArticleIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * topVideosArticleIDs;                        //@synthesize topVideosArticleIDs=_topVideosArticleIDs - In the implementation block
@property (nonatomic,readonly) BOOL hasMoreVideosArticleListID; 
@property (nonatomic,retain) NSString * moreVideosArticleListID;                          //@synthesize moreVideosArticleListID=_moreVideosArticleListID - In the implementation block
@property (nonatomic,readonly) BOOL hasSpotlightArticleID; 
@property (nonatomic,retain) NSString * spotlightArticleID;                               //@synthesize spotlightArticleID=_spotlightArticleID - In the implementation block
@property (nonatomic,retain) NSMutableArray * todayFeedTopStoriesArticleIDs;              //@synthesize todayFeedTopStoriesArticleIDs=_todayFeedTopStoriesArticleIDs - In the implementation block
@property (nonatomic,readonly) BOOL hasTodayFeedConfiguration; 
@property (nonatomic,retain) NSString * todayFeedConfiguration;                           //@synthesize todayFeedConfiguration=_todayFeedConfiguration - In the implementation block
+(Class)editorialArticleListIDsType;
+(Class)editorialSectionTagIDsType;
+(Class)breakingNewsArticleIDsType;
+(Class)topStoriesCombinedArticleIDsType;
+(Class)specialEventArticleIDsType;
+(Class)topVideosArticleIDsType;
+(Class)todayFeedTopStoriesArticleIDsType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setConfiguration:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)configuration;
-(void)setBase:(NTPBRecordBase *)arg1 ;
-(NTPBRecordBase *)base;
-(NSString *)trendingArticleListID;
-(void)setTrendingArticleListID:(NSString *)arg1 ;
-(NSMutableArray *)breakingNewsArticleIDs;
-(void)setBreakingNewsArticleIDs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)specialEventArticleIDs;
-(void)setSpecialEventArticleIDs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)topVideosArticleIDs;
-(NSString *)spotlightArticleID;
-(NSMutableArray *)topStoriesCombinedArticleIDs;
-(NSMutableArray *)todayFeedTopStoriesArticleIDs;
-(NSString *)coverArticlesArticleListID;
-(NSMutableArray *)editorialArticleListIDs;
-(NSMutableArray *)editorialSectionTagIDs;
-(NSString *)moreVideosArticleListID;
-(NSString *)todayFeedConfiguration;
-(void)setTodayFeedConfiguration:(NSString *)arg1 ;
-(void)setTopStoriesCombinedArticleIDs:(NSMutableArray *)arg1 ;
-(void)setTodayFeedTopStoriesArticleIDs:(NSMutableArray *)arg1 ;
-(void)setCoverArticlesArticleListID:(NSString *)arg1 ;
-(void)setEditorialArticleListIDs:(NSMutableArray *)arg1 ;
-(void)setEditorialSectionTagIDs:(NSMutableArray *)arg1 ;
-(void)setTopVideosArticleIDs:(NSMutableArray *)arg1 ;
-(void)setMoreVideosArticleListID:(NSString *)arg1 ;
-(void)setSpotlightArticleID:(NSString *)arg1 ;
-(void)addEditorialArticleListIDs:(id)arg1 ;
-(void)addEditorialSectionTagIDs:(id)arg1 ;
-(void)addBreakingNewsArticleIDs:(id)arg1 ;
-(void)addTopStoriesCombinedArticleIDs:(id)arg1 ;
-(void)addSpecialEventArticleIDs:(id)arg1 ;
-(void)addTopVideosArticleIDs:(id)arg1 ;
-(void)addTodayFeedTopStoriesArticleIDs:(id)arg1 ;
-(BOOL)hasBase;
-(BOOL)hasConfiguration;
-(BOOL)hasTrendingArticleListID;
-(BOOL)hasCoverArticlesArticleListID;
-(void)clearEditorialArticleListIDs;
-(unsigned long long)editorialArticleListIDsCount;
-(id)editorialArticleListIDsAtIndex:(unsigned long long)arg1 ;
-(void)clearEditorialSectionTagIDs;
-(unsigned long long)editorialSectionTagIDsCount;
-(id)editorialSectionTagIDsAtIndex:(unsigned long long)arg1 ;
-(void)clearBreakingNewsArticleIDs;
-(unsigned long long)breakingNewsArticleIDsCount;
-(id)breakingNewsArticleIDsAtIndex:(unsigned long long)arg1 ;
-(void)clearTopStoriesCombinedArticleIDs;
-(unsigned long long)topStoriesCombinedArticleIDsCount;
-(id)topStoriesCombinedArticleIDsAtIndex:(unsigned long long)arg1 ;
-(void)clearSpecialEventArticleIDs;
-(unsigned long long)specialEventArticleIDsCount;
-(id)specialEventArticleIDsAtIndex:(unsigned long long)arg1 ;
-(void)clearTopVideosArticleIDs;
-(unsigned long long)topVideosArticleIDsCount;
-(id)topVideosArticleIDsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasMoreVideosArticleListID;
-(BOOL)hasSpotlightArticleID;
-(void)clearTodayFeedTopStoriesArticleIDs;
-(unsigned long long)todayFeedTopStoriesArticleIDsCount;
-(id)todayFeedTopStoriesArticleIDsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasTodayFeedConfiguration;
@end

