/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)edgeCacheHintForSpotlight;
+(id)edgeCacheHintForFeaturedArticles;
+(id)edgeCacheHintForLocalNews;
+(id)edgeCacheHintForAudioContent;
+(id)edgeCacheHintForTopStories;
+(id)edgeCacheHintForEditorial;
+(id)edgeCacheHintForEvergreenArticles;
+(id)edgeCacheHintForToday;
+(id)edgeCacheHintForTrending;
+(id)edgeCacheHintForMagazineContent;
+(id)edgeCacheHintForForYouConfig;
-(NSString *)groupName;
-(NSString *)cacheControlKey;
-(id)initWithGroupName:(id)arg1 cacheControlKey:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

