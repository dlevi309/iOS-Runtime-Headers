/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol FCForYouBridgedConfiguration;
@class FCSpecialEventGroupConfig, FCTopStoriesGroupConfig, FCGroupConfig, FCSpotlightGroupConfig, NSArray, FCVideoGroupConfig, NTPBForYouConfigRecord, FCInterestToken, NSString, NSDate;

@interface FCForYouConfig : NSObject <NSCopying> {

	FCSpecialEventGroupConfig* _breakingNewsGroupConfig;
	FCSpecialEventGroupConfig* _specialEventGroupConfig;
	FCTopStoriesGroupConfig* _topStoriesGroupConfig;
	FCGroupConfig* _trendingGroupConfig;
	FCSpotlightGroupConfig* _spotlightGroupConfig;
	FCGroupConfig* _coverArticlesGroupConfig;
	NSArray* _editorialGroupConfigs;
	FCVideoGroupConfig* _topVideosGroupConfig;
	FCVideoGroupConfig* _moreVideosGroupConfig;
	NSArray* _demoGroupConfigs;
	id<FCForYouBridgedConfiguration> _bridgedConfiguration;
	NTPBForYouConfigRecord* _forYouConfigRecord;
	FCInterestToken* _interestToken;

}

@property (nonatomic,retain) NTPBForYouConfigRecord * forYouConfigRecord;                      //@synthesize forYouConfigRecord=_forYouConfigRecord - In the implementation block
@property (nonatomic,retain) FCInterestToken * interestToken;                                  //@synthesize interestToken=_interestToken - In the implementation block
@property (nonatomic,retain) FCSpecialEventGroupConfig * breakingNewsGroupConfig;              //@synthesize breakingNewsGroupConfig=_breakingNewsGroupConfig - In the implementation block
@property (nonatomic,retain) FCSpecialEventGroupConfig * specialEventGroupConfig;              //@synthesize specialEventGroupConfig=_specialEventGroupConfig - In the implementation block
@property (nonatomic,retain) FCTopStoriesGroupConfig * topStoriesGroupConfig;                  //@synthesize topStoriesGroupConfig=_topStoriesGroupConfig - In the implementation block
@property (nonatomic,retain) FCGroupConfig * trendingGroupConfig;                              //@synthesize trendingGroupConfig=_trendingGroupConfig - In the implementation block
@property (nonatomic,retain) FCSpotlightGroupConfig * spotlightGroupConfig;                    //@synthesize spotlightGroupConfig=_spotlightGroupConfig - In the implementation block
@property (nonatomic,retain) FCGroupConfig * coverArticlesGroupConfig;                         //@synthesize coverArticlesGroupConfig=_coverArticlesGroupConfig - In the implementation block
@property (nonatomic,retain) NSArray * editorialGroupConfigs;                                  //@synthesize editorialGroupConfigs=_editorialGroupConfigs - In the implementation block
@property (nonatomic,retain) FCVideoGroupConfig * topVideosGroupConfig;                        //@synthesize topVideosGroupConfig=_topVideosGroupConfig - In the implementation block
@property (nonatomic,retain) FCVideoGroupConfig * moreVideosGroupConfig;                       //@synthesize moreVideosGroupConfig=_moreVideosGroupConfig - In the implementation block
@property (nonatomic,copy) id<FCForYouBridgedConfiguration> bridgedConfiguration;              //@synthesize bridgedConfiguration=_bridgedConfiguration - In the implementation block
@property (nonatomic,readonly) NSArray * demoGroupConfigs;                                     //@synthesize demoGroupConfigs=_demoGroupConfigs - In the implementation block
@property (nonatomic,readonly) NSArray * breakingNewsArticleIDs; 
@property (nonatomic,readonly) NSArray * specialEventArticleIDs; 
@property (nonatomic,readonly) NSArray * todayFeedTopStoriesArticleIDs; 
@property (nonatomic,readonly) NSArray * topStoriesCombinedArticleIDs; 
@property (nonatomic,readonly) NSString * trendingArticleListID; 
@property (nonatomic,readonly) NSString * coverArticlesArticleListID; 
@property (nonatomic,readonly) NSArray * editorialArticleListIDs; 
@property (nonatomic,readonly) NSArray * editorialSectionTagIDs; 
@property (nonatomic,readonly) NSDate * fetchedDate; 
@property (nonatomic,readonly) NSArray * topVideosArticleIDs; 
@property (nonatomic,readonly) NSString * moreVideosArticleListID; 
@property (nonatomic,readonly) NSString * spotlightArticleID; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<FCForYouBridgedConfiguration>)bridgedConfiguration;
-(FCInterestToken *)interestToken;
-(void)setInterestToken:(FCInterestToken *)arg1 ;
-(NSArray *)demoGroupConfigs;
-(NSString *)trendingArticleListID;
-(NSArray *)breakingNewsArticleIDs;
-(NSArray *)specialEventArticleIDs;
-(NSArray *)topVideosArticleIDs;
-(NSString *)spotlightArticleID;
-(NTPBForYouConfigRecord *)forYouConfigRecord;
-(NSArray *)topStoriesCombinedArticleIDs;
-(NSArray *)todayFeedTopStoriesArticleIDs;
-(NSString *)coverArticlesArticleListID;
-(NSArray *)editorialArticleListIDs;
-(NSArray *)editorialSectionTagIDs;
-(NSString *)moreVideosArticleListID;
-(id)initWithRecord:(id)arg1 interestToken:(id)arg2 bridgedConfiguration:(id)arg3 ;
-(NSDate *)fetchedDate;
-(FCSpecialEventGroupConfig *)breakingNewsGroupConfig;
-(void)setBreakingNewsGroupConfig:(FCSpecialEventGroupConfig *)arg1 ;
-(FCSpecialEventGroupConfig *)specialEventGroupConfig;
-(void)setSpecialEventGroupConfig:(FCSpecialEventGroupConfig *)arg1 ;
-(FCTopStoriesGroupConfig *)topStoriesGroupConfig;
-(void)setTopStoriesGroupConfig:(FCTopStoriesGroupConfig *)arg1 ;
-(FCGroupConfig *)trendingGroupConfig;
-(void)setTrendingGroupConfig:(FCGroupConfig *)arg1 ;
-(FCSpotlightGroupConfig *)spotlightGroupConfig;
-(void)setSpotlightGroupConfig:(FCSpotlightGroupConfig *)arg1 ;
-(FCGroupConfig *)coverArticlesGroupConfig;
-(void)setCoverArticlesGroupConfig:(FCGroupConfig *)arg1 ;
-(NSArray *)editorialGroupConfigs;
-(void)setEditorialGroupConfigs:(NSArray *)arg1 ;
-(FCVideoGroupConfig *)topVideosGroupConfig;
-(void)setTopVideosGroupConfig:(FCVideoGroupConfig *)arg1 ;
-(FCVideoGroupConfig *)moreVideosGroupConfig;
-(void)setMoreVideosGroupConfig:(FCVideoGroupConfig *)arg1 ;
-(void)setBridgedConfiguration:(id<FCForYouBridgedConfiguration>)arg1 ;
-(void)setForYouConfigRecord:(NTPBForYouConfigRecord *)arg1 ;
@end

