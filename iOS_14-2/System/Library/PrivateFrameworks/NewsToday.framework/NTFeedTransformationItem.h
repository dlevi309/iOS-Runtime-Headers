/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

@class NSString, NSDate, SFSearchResult, NTPBFeedItem;


@protocol NTFeedTransformationItem <NSObject,NSCopying>
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
@optional
-(unsigned long long)preferredDynamicSlotAllocation;

@required
-(SFSearchResult *)searchResult;
-(NSString *)identifier;
-(NSString *)clusterID;
-(BOOL)needsFeedItemHeadlinesFetch;
-(NTPBFeedItem *)feedItemForHeadlineFetch;
-(id)protoitemWithFetchedFeedItemHeadline:(id)arg1;
-(id<FCFeedTransformationItem>)feedTransformationItem;
-(unsigned long long)todayItemType;
-(NSDate *)cacheCutoffTimeRelativeDate;
-(NSDate *)cacheExpirationDate;
-(BOOL)usesDynamicSlotAllocation;

@end

