/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol FCForYouBridgedConfiguration;
@class FCTopStoriesGroupConfig, FCGroupConfig, FCSpotlightGroupConfig, NSArray, NSString, NTPBForYouConfigRecord, FCInterestToken, NSDate;

@interface FCForYouConfig : NSObject <NSCopying> {

	FCTopStoriesGroupConfig* _topStoriesGroupConfig;
	FCGroupConfig* _trendingGroupConfig;
	FCSpotlightGroupConfig* _spotlightGroupConfig;
	NSArray* _editorialGroupConfigs;
	NSArray* _demoGroupConfigs;
	NSArray* _topVideosArticleIDs;
	NSString* _moreVideosArticleListID;
	id<FCForYouBridgedConfiguration> _bridgedConfiguration;
	NTPBForYouConfigRecord* _forYouConfigRecord;
	FCInterestToken* _interestToken;

}

@property (nonatomic,retain) NTPBForYouConfigRecord * forYouConfigRecord;                      //@synthesize forYouConfigRecord=_forYouConfigRecord - In the implementation block
@property (nonatomic,retain) FCInterestToken * interestToken;                                  //@synthesize interestToken=_interestToken - In the implementation block
@property (nonatomic,retain) FCTopStoriesGroupConfig * topStoriesGroupConfig;                  //@synthesize topStoriesGroupConfig=_topStoriesGroupConfig - In the implementation block
@property (nonatomic,retain) FCGroupConfig * trendingGroupConfig;                              //@synthesize trendingGroupConfig=_trendingGroupConfig - In the implementation block
@property (nonatomic,retain) FCSpotlightGroupConfig * spotlightGroupConfig;                    //@synthesize spotlightGroupConfig=_spotlightGroupConfig - In the implementation block
@property (nonatomic,retain) NSArray * editorialGroupConfigs;                                  //@synthesize editorialGroupConfigs=_editorialGroupConfigs - In the implementation block
@property (nonatomic,copy) id<FCForYouBridgedConfiguration> bridgedConfiguration;              //@synthesize bridgedConfiguration=_bridgedConfiguration - In the implementation block
@property (nonatomic,readonly) NSArray * demoGroupConfigs;                                     //@synthesize demoGroupConfigs=_demoGroupConfigs - In the implementation block
@property (nonatomic,readonly) NSArray * todayFeedTopStoriesArticleIDs; 
@property (nonatomic,readonly) NSString * trendingArticleListID; 
@property (nonatomic,readonly) NSArray * editorialArticleListIDs; 
@property (nonatomic,readonly) NSArray * editorialSectionTagIDs; 
@property (nonatomic,readonly) NSDate * fetchedDate; 
@property (nonatomic,readonly) NSArray * topVideosArticleIDs;                                  //@synthesize topVideosArticleIDs=_topVideosArticleIDs - In the implementation block
@property (nonatomic,readonly) NSString * moreVideosArticleListID;                             //@synthesize moreVideosArticleListID=_moreVideosArticleListID - In the implementation block
@property (nonatomic,readonly) NSString * spotlightArticleID; 
-(NSArray *)todayFeedTopStoriesArticleIDs;
-(void)setInterestToken:(FCInterestToken *)arg1 ;
-(FCInterestToken *)interestToken;
-(id)initWithRecord:(id)arg1 interestToken:(id)arg2 bridgedConfiguration:(id)arg3 ;
-(FCSpotlightGroupConfig *)spotlightGroupConfig;
-(void)setTrendingGroupConfig:(FCGroupConfig *)arg1 ;
-(void)setTopStoriesGroupConfig:(FCTopStoriesGroupConfig *)arg1 ;
-(void)setBridgedConfiguration:(id<FCForYouBridgedConfiguration>)arg1 ;
-(void)setEditorialGroupConfigs:(NSArray *)arg1 ;
-(void)setForYouConfigRecord:(NTPBForYouConfigRecord *)arg1 ;
-(FCGroupConfig *)trendingGroupConfig;
-(NSArray *)editorialArticleListIDs;
-(NSArray *)demoGroupConfigs;
-(NSString *)trendingArticleListID;
-(FCTopStoriesGroupConfig *)topStoriesGroupConfig;
-(NSArray *)topVideosArticleIDs;
-(NSString *)spotlightArticleID;
-(void)setSpotlightGroupConfig:(FCSpotlightGroupConfig *)arg1 ;
-(NTPBForYouConfigRecord *)forYouConfigRecord;
-(id<FCForYouBridgedConfiguration>)bridgedConfiguration;
-(NSString *)moreVideosArticleListID;
-(NSDate *)fetchedDate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)editorialGroupConfigs;
-(NSArray *)editorialSectionTagIDs;
@end

