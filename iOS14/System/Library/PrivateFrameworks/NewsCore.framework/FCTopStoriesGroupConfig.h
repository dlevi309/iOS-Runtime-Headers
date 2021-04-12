/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDictionary *)topStoriesMetadataByArticleID;
-(NSArray *)mandatoryArticleIDPairs;
-(id)initWithDictionary:(id)arg1 ;
-(void)setTopStoriesMetadataByArticleID:(NSDictionary *)arg1 ;
-(NSDate *)publishDate;
-(NSArray *)optionalArticleIDs;
@end

