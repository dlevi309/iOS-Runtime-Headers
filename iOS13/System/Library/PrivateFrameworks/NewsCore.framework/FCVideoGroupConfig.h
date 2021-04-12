/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCGroupConfig.h>

@class NSArray, NSDictionary, NSString;

@interface FCVideoGroupConfig : FCGroupConfig {

	NSArray* _topVideosArticleIDs;
	NSDictionary* _topVideosMetadataByArticleID;
	NSString* _mutingChannelID;

}

@property (nonatomic,copy) NSString * mutingChannelID;                                   //@synthesize mutingChannelID=_mutingChannelID - In the implementation block
@property (nonatomic,readonly) NSArray * topVideosArticleIDs;                            //@synthesize topVideosArticleIDs=_topVideosArticleIDs - In the implementation block
@property (nonatomic,readonly) NSDictionary * topVideosMetadataByArticleID;              //@synthesize topVideosMetadataByArticleID=_topVideosMetadataByArticleID - In the implementation block
@property (nonatomic,readonly) NSString * discoverMoreVideosTitle; 
@property (nonatomic,readonly) NSString * discoverMoreVideosSubtitle; 
@property (nonatomic,readonly) NSString * discoverMoreVideosURLString; 
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)mutingChannelID;
-(NSString *)discoverMoreVideosTitle;
-(NSString *)discoverMoreVideosSubtitle;
-(NSString *)discoverMoreVideosURLString;
-(NSArray *)topVideosArticleIDs;
-(NSDictionary *)topVideosMetadataByArticleID;
-(void)setMutingChannelID:(NSString *)arg1 ;
@end

