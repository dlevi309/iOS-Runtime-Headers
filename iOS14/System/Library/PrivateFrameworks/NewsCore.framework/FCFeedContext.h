/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FCFeedContext : NSObject <NSCopying> {

	BOOL _isHiddenFeed;
	BOOL _isPaidBundleFeed;
	BOOL _isTopStories;
	BOOL _isEditorial;
	BOOL _isEditorialGems;
	BOOL _isCoverArticles;
	NSString* _sectionID;
	NSString* _channelID;
	NSString* _topicID;

}

@property (nonatomic,copy) NSString * sectionID;                 //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,copy) NSString * channelID;                 //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,copy) NSString * topicID;                   //@synthesize topicID=_topicID - In the implementation block
@property (assign,nonatomic) BOOL isHiddenFeed;                  //@synthesize isHiddenFeed=_isHiddenFeed - In the implementation block
@property (assign,nonatomic) BOOL isPaidBundleFeed;              //@synthesize isPaidBundleFeed=_isPaidBundleFeed - In the implementation block
@property (assign,nonatomic) BOOL isTopStories;                  //@synthesize isTopStories=_isTopStories - In the implementation block
@property (assign,nonatomic) BOOL isEditorial;                   //@synthesize isEditorial=_isEditorial - In the implementation block
@property (assign,nonatomic) BOOL isEditorialGems;               //@synthesize isEditorialGems=_isEditorialGems - In the implementation block
@property (assign,nonatomic) BOOL isCoverArticles;               //@synthesize isCoverArticles=_isCoverArticles - In the implementation block
+(id)feedContextForTopStoriesTag:(id)arg1 ;
+(id)feedContextForEditorialTag:(id)arg1 ;
+(id)feedContextForBreakingNewsChannelID:(id)arg1 ;
+(id)feedContextForCoverArticlesFeed;
+(id)feedContextForChannel:(id)arg1 sectionID:(id)arg2 ;
+(id)feedContextForTopStoriesChannel:(id)arg1 sectionID:(id)arg2 ;
+(id)feedContextForEditorialChannel:(id)arg1 editorialGemsSectionID:(id)arg2 ;
+(id)feedContextForEditorialChannel:(id)arg1 sectionID:(id)arg2 ;
+(id)feedContextForTag:(id)arg1 ;
+(id)feedContextForHiddenFeed;
+(id)feedContextForPaidBundleFeed;
-(void)setChannelID:(NSString *)arg1 ;
-(void)setSectionID:(NSString *)arg1 ;
-(BOOL)isEditorial;
-(BOOL)isEditorialGems;
-(NSString *)sectionID;
-(BOOL)isCoverArticles;
-(BOOL)isTopStories;
-(BOOL)isPaidBundleFeed;
-(void)setTopicID:(NSString *)arg1 ;
-(void)setIsEditorialGems:(BOOL)arg1 ;
-(BOOL)isHiddenFeed;
-(NSString *)channelID;
-(NSString *)topicID;
-(void)setIsTopStories:(BOOL)arg1 ;
-(void)setIsHiddenFeed:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIsEditorial:(BOOL)arg1 ;
-(void)setIsCoverArticles:(BOOL)arg1 ;
-(void)setIsPaidBundleFeed:(BOOL)arg1 ;
@end

