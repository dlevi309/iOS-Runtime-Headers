/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol FCBundleSubscriptionProviderType;
@class NSString, NSSet;

@interface NTCatchUpOperationForYouRequest : NSObject <NSCopying> {

	NSString* _topStoriesChannelID;
	NSSet* _hiddenFeedIDs;
	NSString* _paidBundleFeedID;
	NSSet* _mutedTagIDs;
	NSSet* _purchasedTagIDs;
	NSSet* _subscribedTagIDs;
	id<FCBundleSubscriptionProviderType> _bundleSubscriptionProvider;
	long long _cutoffTime;
	unsigned long long _headlinesPerFeedFetchCount;
	long long _fetchingBin;

}

@property (nonatomic,copy,readonly) NSString * topStoriesChannelID;                                               //@synthesize topStoriesChannelID=_topStoriesChannelID - In the implementation block
@property (nonatomic,copy,readonly) NSSet * hiddenFeedIDs;                                                        //@synthesize hiddenFeedIDs=_hiddenFeedIDs - In the implementation block
@property (nonatomic,copy,readonly) NSString * paidBundleFeedID;                                                  //@synthesize paidBundleFeedID=_paidBundleFeedID - In the implementation block
@property (nonatomic,copy,readonly) NSSet * mutedTagIDs;                                                          //@synthesize mutedTagIDs=_mutedTagIDs - In the implementation block
@property (nonatomic,copy,readonly) NSSet * purchasedTagIDs;                                                      //@synthesize purchasedTagIDs=_purchasedTagIDs - In the implementation block
@property (nonatomic,copy,readonly) NSSet * subscribedTagIDs;                                                     //@synthesize subscribedTagIDs=_subscribedTagIDs - In the implementation block
@property (nonatomic,copy,readonly) id<FCBundleSubscriptionProviderType> bundleSubscriptionProvider;              //@synthesize bundleSubscriptionProvider=_bundleSubscriptionProvider - In the implementation block
@property (nonatomic,readonly) long long cutoffTime;                                                              //@synthesize cutoffTime=_cutoffTime - In the implementation block
@property (nonatomic,readonly) unsigned long long headlinesPerFeedFetchCount;                                     //@synthesize headlinesPerFeedFetchCount=_headlinesPerFeedFetchCount - In the implementation block
@property (nonatomic,readonly) long long fetchingBin;                                                             //@synthesize fetchingBin=_fetchingBin - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)mutedTagIDs;
-(NSSet *)purchasedTagIDs;
-(NSSet *)hiddenFeedIDs;
-(id<FCBundleSubscriptionProviderType>)bundleSubscriptionProvider;
-(NSSet *)subscribedTagIDs;
-(long long)cutoffTime;
-(long long)fetchingBin;
-(unsigned long long)headlinesPerFeedFetchCount;
-(id)initWithForYouTodaySectionSpecificConfig:(id)arg1 topStoriesChannelID:(id)arg2 hiddenFeedIDs:(id)arg3 paidBundleFeedID:(id)arg4 mutedTagIDs:(id)arg5 purchasedTagIDs:(id)arg6 subscribedTagIDs:(id)arg7 bundleSubscriptionProvider:(id)arg8 ;
-(NSString *)topStoriesChannelID;
-(NSString *)paidBundleFeedID;
@end

