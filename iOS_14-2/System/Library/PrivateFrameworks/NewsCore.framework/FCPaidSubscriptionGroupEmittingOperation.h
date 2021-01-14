/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@class FCPaidSubscriptionCursor;

@interface FCPaidSubscriptionGroupEmittingOperation : FCFeedGroupEmittingOperation

@property (nonatomic,retain) FCPaidSubscriptionCursor * fromCursor; 
@property (nonatomic,retain) FCPaidSubscriptionCursor * toCursor; 
@property (nonatomic,retain) FCPaidSubscriptionCursor * resultCursor; 
-(void)performOperation;
-(void)_performOperation;
-(BOOL)alwaysShowExpiredGroups;
-(void)_continueWithEnumerator:(id)arg1 groupedFeedItems:(id)arg2 validPurchasedTagIDs:(id)arg3 ;
-(void)_constructGroupForChannelWithIdentifier:(id)arg1 usingFeedItems:(id)arg2 feedFilterOptions:(long long)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_fetchHeadlinesForFeedItems:(id)arg1 feedContextByFeedID:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)_constructClassicGroupForChannelWithIdentifier:(id)arg1 usingFeedItems:(id)arg2 feedFilterOptions:(long long)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)_feedItemsTransformationWithOptions:(long long)arg1 ;
-(void)_constructSupergroupForChannelWithGroupConfig:(id)arg1 forYouConfig:(id)arg2 usingFeedItems:(id)arg3 feedFilterOptions:(long long)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)_createGroupForChannel:(id)arg1 headlines:(id)arg2 ;
-(id)_additionalFeedItemsTransformationLimitedToNumberOfFeedItems:(unsigned long long)arg1 withOptions:(long long)arg2 ;
-(void)_fetchTagForSourceChannelIdentifier:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_fetchAdditionalFeedItemsForChannel:(id)arg1 feedRange:(id)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)unlimitedBackfill;
@end

