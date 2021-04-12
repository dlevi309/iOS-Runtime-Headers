/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FCEdgeCacheHint : NSObject <NSCopying> {

	NSString* _groupName;
	NSString* _cacheControlKey;

}

@property (nonatomic,copy,readonly) NSString * groupName;                    //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,copy,readonly) NSString * cacheControlKey;              //@synthesize cacheControlKey=_cacheControlKey - In the implementation block
+(id)edgeCacheHintForTopStories;
+(id)edgeCacheHintForBreaking;
+(id)edgeCacheHintForTrending;
+(id)edgeCacheHintForCoverArticles;
+(id)edgeCacheHintForEditorial;
+(id)edgeCacheHintForToday;
+(id)edgeCacheHintForVideos;
+(id)edgeCacheHintForFeaturedArticles;
+(id)edgeCacheHintForSpotlight;
+(id)edgeCacheHintForMagazineContent;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)groupName;
-(id)initWithGroupName:(id)arg1 cacheControlKey:(id)arg2 ;
-(NSString *)cacheControlKey;
@end

