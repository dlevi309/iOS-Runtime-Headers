/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NTFeedTransformationItem.h>

@class NTPBTodaySectionConfigWebEmbed, NSString, NSDate, SFSearchResult, NTPBFeedItem;

@interface NTFeedTransformationWebEmbedItem : NSObject <NTFeedTransformationItem> {

	NTPBTodaySectionConfigWebEmbed* _webEmbed;

}

@property (nonatomic,copy,readonly) NTPBTodaySectionConfigWebEmbed * webEmbed;                   //@synthesize webEmbed=_webEmbed - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) unsigned long long todayItemType; 
@property (nonatomic,copy,readonly) NSString * clusterID; 
@property (nonatomic,copy,readonly) NSDate * cacheCutoffTimeRelativeDate; 
@property (nonatomic,copy,readonly) NSDate * cacheExpirationDate; 
@property (nonatomic,copy,readonly) SFSearchResult * searchResult; 
@property (nonatomic,readonly) BOOL usesDynamicSlotAllocation; 
@property (nonatomic,readonly) id<FCFeedTransformationItem> feedTransformationItem; 
@property (nonatomic,readonly) BOOL needsFeedItemHeadlinesFetch; 
@property (nonatomic,copy,readonly) NTPBFeedItem * feedItemForHeadlineFetch; 
@property (nonatomic,readonly) unsigned long long preferredDynamicSlotAllocation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SFSearchResult *)searchResult;
-(id)init;
-(NTPBTodaySectionConfigWebEmbed *)webEmbed;
-(unsigned long long)hash;
-(NSString *)identifier;
-(NSString *)clusterID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)needsFeedItemHeadlinesFetch;
-(NTPBFeedItem *)feedItemForHeadlineFetch;
-(id)protoitemWithFetchedFeedItemHeadline:(id)arg1 ;
-(id<FCFeedTransformationItem>)feedTransformationItem;
-(id)initWithWebEmbed:(id)arg1 ;
-(unsigned long long)todayItemType;
-(NSDate *)cacheCutoffTimeRelativeDate;
-(NSDate *)cacheExpirationDate;
-(BOOL)usesDynamicSlotAllocation;
-(unsigned long long)preferredDynamicSlotAllocation;
@end

