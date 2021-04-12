/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NTFeedTransformationItem.h>

@class NSDate, SFSearchResult, NTPBFeedItem, NSString;

@interface NTFeedTransformationFeedItem : NSObject <NTFeedTransformationItem> {

	NSDate* _cacheExpirationDate;
	SFSearchResult* _searchResult;
	NTPBFeedItem* _feedItem;

}

@property (nonatomic,copy,readonly) NTPBFeedItem * feedItem;                                                                 //@synthesize feedItem=_feedItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) unsigned long long todayItemType; 
@property (nonatomic,copy,readonly) NSString * clusterID; 
@property (nonatomic,copy,readonly) NSDate * cacheCutoffTimeRelativeDate; 
@property (nonatomic,copy,readonly) NSDate * cacheExpirationDate;                                                            //@synthesize cacheExpirationDate=_cacheExpirationDate - In the implementation block
@property (nonatomic,copy,readonly) SFSearchResult * searchResult;                                                           //@synthesize searchResult=_searchResult - In the implementation block
@property (getter=isEligibleForLeadingCellAppearance,nonatomic,readonly) BOOL eligibleForLeadingCellAppearance; 
@property (nonatomic,readonly) BOOL usesDynamicSlotAllocation; 
@property (nonatomic,readonly) id<FCFeedTransformationItem> feedTransformationItem; 
@property (nonatomic,readonly) BOOL needsFeedItemHeadlinesFetch; 
@property (nonatomic,copy,readonly) NTPBFeedItem * feedItemForHeadlineFetch; 
@property (nonatomic,readonly) unsigned long long preferredDynamicSlotAllocation; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(SFSearchResult *)searchResult;
-(NSString *)clusterID;
-(NTPBFeedItem *)feedItem;
-(BOOL)needsFeedItemHeadlinesFetch;
-(NTPBFeedItem *)feedItemForHeadlineFetch;
-(id)protoitemWithFetchedFeedItemHeadline:(id)arg1 ;
-(id<FCFeedTransformationItem>)feedTransformationItem;
-(unsigned long long)todayItemType;
-(id)initWithFeedItem:(id)arg1 cacheExpirationDate:(id)arg2 ;
-(NSDate *)cacheCutoffTimeRelativeDate;
-(NSDate *)cacheExpirationDate;
-(BOOL)isEligibleForLeadingCellAppearance;
-(BOOL)usesDynamicSlotAllocation;
@end

