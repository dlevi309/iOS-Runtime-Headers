/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)feedContextForTopStoriesChannel:(id)arg1 sectionID:(id)arg2 ;
+(id)feedContextForEditorialChannel:(id)arg1 editorialGemsSectionID:(id)arg2 ;
+(id)feedContextForEditorialChannel:(id)arg1 sectionID:(id)arg2 ;
+(id)feedContextForChannel:(id)arg1 sectionID:(id)arg2 ;
+(id)feedContextForTag:(id)arg1 ;
+(id)feedContextForHiddenFeed;
+(id)feedContextForPaidBundleFeed;
+(id)feedContextForTopStoriesTag:(id)arg1 ;
+(id)feedContextForEditorialTag:(id)arg1 ;
+(id)feedContextForBreakingNewsChannelID:(id)arg1 ;
+(id)feedContextForCoverArticlesFeed;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)sectionID;
-(void)setSectionID:(NSString *)arg1 ;
-(NSString *)topicID;
-(NSString *)channelID;
-(void)setChannelID:(NSString *)arg1 ;
-(BOOL)isEditorial;
-(BOOL)isEditorialGems;
-(BOOL)isTopStories;
-(void)setTopicID:(NSString *)arg1 ;
-(void)setIsTopStories:(BOOL)arg1 ;
-(void)setIsEditorial:(BOOL)arg1 ;
-(void)setIsEditorialGems:(BOOL)arg1 ;
-(void)setIsCoverArticles:(BOOL)arg1 ;
-(void)setIsHiddenFeed:(BOOL)arg1 ;
-(void)setIsPaidBundleFeed:(BOOL)arg1 ;
-(BOOL)isHiddenFeed;
-(BOOL)isPaidBundleFeed;
-(BOOL)isCoverArticles;
@end

