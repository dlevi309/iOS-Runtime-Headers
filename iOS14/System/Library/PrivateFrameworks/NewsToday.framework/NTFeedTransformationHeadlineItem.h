/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NTFeedTransformationItem.h>

@protocol FCHeadlineProviding;
@class NSString, NSDate, SFSearchResult, NTPBFeedItem, NSURL;

@interface NTFeedTransformationHeadlineItem : NSObject <NTFeedTransformationItem> {

	NSDate* _cacheExpirationDate;
	SFSearchResult* _searchResult;
	id<FCHeadlineProviding> _headline;
	NSURL* _actionURL;

}

@property (nonatomic,copy) id<FCHeadlineProviding> headline;                                     //@synthesize headline=_headline - In the implementation block
@property (nonatomic,copy,readonly) NSURL * actionURL;                                           //@synthesize actionURL=_actionURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) unsigned long long todayItemType; 
@property (nonatomic,copy,readonly) NSString * clusterID; 
@property (nonatomic,copy,readonly) NSDate * cacheCutoffTimeRelativeDate; 
@property (nonatomic,copy,readonly) NSDate * cacheExpirationDate;                                //@synthesize cacheExpirationDate=_cacheExpirationDate - In the implementation block
@property (nonatomic,copy,readonly) SFSearchResult * searchResult;                               //@synthesize searchResult=_searchResult - In the implementation block
@property (nonatomic,readonly) BOOL usesDynamicSlotAllocation; 
@property (nonatomic,readonly) id<FCFeedTransformationItem> feedTransformationItem; 
@property (nonatomic,readonly) BOOL needsFeedItemHeadlinesFetch; 
@property (nonatomic,copy,readonly) NTPBFeedItem * feedItemForHeadlineFetch; 
@property (nonatomic,readonly) unsigned long long preferredDynamicSlotAllocation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<FCHeadlineProviding>)headline;
-(SFSearchResult *)searchResult;
-(id)init;
-(void)setHeadline:(id<FCHeadlineProviding>)arg1 ;
-(unsigned long long)hash;
-(NSURL *)actionURL;
-(NSString *)identifier;
-(NSString *)clusterID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)needsFeedItemHeadlinesFetch;
-(NTPBFeedItem *)feedItemForHeadlineFetch;
-(id)protoitemWithFetchedFeedItemHeadline:(id)arg1 ;
-(id<FCFeedTransformationItem>)feedTransformationItem;
-(unsigned long long)todayItemType;
-(id)initWithHeadline:(id)arg1 cacheExpirationDate:(id)arg2 searchResult:(id)arg3 actionURL:(id)arg4 ;
-(NSDate *)cacheCutoffTimeRelativeDate;
-(NSDate *)cacheExpirationDate;
-(BOOL)usesDynamicSlotAllocation;
@end

