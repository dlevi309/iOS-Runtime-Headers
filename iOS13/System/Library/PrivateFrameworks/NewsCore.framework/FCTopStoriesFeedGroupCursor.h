/*
* Generated on Monday, March 1, 2021 at 2:32:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCFeedGroupEmittingCursor.h>

@class NSDate, NSArray;

@interface FCTopStoriesFeedGroupCursor : FCFeedGroupEmittingCursor {

	BOOL _collapsed;
	NSDate* _publishDate;
	NSArray* _articleIDs;
	NSDate* _optionalStoriesLastRefreshDate;

}

@property (nonatomic,copy) NSDate * publishDate;                                 //@synthesize publishDate=_publishDate - In the implementation block
@property (nonatomic,copy) NSArray * articleIDs;                                 //@synthesize articleIDs=_articleIDs - In the implementation block
@property (nonatomic,copy) NSDate * optionalStoriesLastRefreshDate;              //@synthesize optionalStoriesLastRefreshDate=_optionalStoriesLastRefreshDate - In the implementation block
@property (assign,getter=isCollapsed,nonatomic) BOOL collapsed;                  //@synthesize collapsed=_collapsed - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isCollapsed;
-(void)setCollapsed:(BOOL)arg1 ;
-(NSDate *)publishDate;
-(void)setPublishDate:(NSDate *)arg1 ;
-(void)setArticleIDs:(NSArray *)arg1 ;
-(NSArray *)articleIDs;
-(NSDate *)optionalStoriesLastRefreshDate;
-(void)setOptionalStoriesLastRefreshDate:(NSDate *)arg1 ;
@end

