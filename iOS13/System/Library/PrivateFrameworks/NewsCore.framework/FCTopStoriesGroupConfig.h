/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCGroupConfig.h>

@class NSArray, NSDictionary, NSDate;

@interface FCTopStoriesGroupConfig : FCGroupConfig {

	NSArray* _mandatoryArticleIDPairs;
	NSArray* _optionalArticleIDs;
	NSDictionary* _topStoriesMetadataByArticleID;
	NSDate* _publishDate;

}

@property (nonatomic,retain) NSDictionary * topStoriesMetadataByArticleID;              //@synthesize topStoriesMetadataByArticleID=_topStoriesMetadataByArticleID - In the implementation block
@property (nonatomic,readonly) NSArray * mandatoryArticleIDPairs;                       //@synthesize mandatoryArticleIDPairs=_mandatoryArticleIDPairs - In the implementation block
@property (nonatomic,readonly) NSArray * optionalArticleIDs;                            //@synthesize optionalArticleIDs=_optionalArticleIDs - In the implementation block
@property (nonatomic,readonly) NSDate * publishDate;                                    //@synthesize publishDate=_publishDate - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(NSDate *)publishDate;
-(NSArray *)mandatoryArticleIDPairs;
-(NSArray *)optionalArticleIDs;
-(NSDictionary *)topStoriesMetadataByArticleID;
-(void)setTopStoriesMetadataByArticleID:(NSDictionary *)arg1 ;
@end

