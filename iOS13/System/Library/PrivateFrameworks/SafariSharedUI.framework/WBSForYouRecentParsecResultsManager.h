/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <SafariSharedUI/WBSForYouRecommendationMediatorDataSource.h>

@protocol OS_dispatch_queue;
@class NSCache, NSObject, NSArray;

@interface WBSForYouRecentParsecResultsManager : WBSForYouRecommendationMediatorDataSource {

	NSCache* _cache;
	NSObject*<OS_dispatch_queue> _internalQueue;

}

@property (nonatomic,copy,readonly) NSArray * recentRecommendations; 
+(id)recommendationsMatchingTopic:(id)arg1 fromArray:(id)arg2 ;
-(void)_createInternalQueueIfNecessary;
-(void)retrieveRecommendationsMatchingTopic:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)appendResultsIfApplicable:(id)arg1 withDelayedExistenceCheck:(BOOL)arg2 ;
-(BOOL)_hasPermissibleResultTypeForResult:(id)arg1 ;
-(id)_bestAcceptableImageForSFResult:(id)arg1 ;
-(id)_cacheEnsuringExistence;
-(NSArray *)recentRecommendations;
-(void)appendResultsIfApplicable:(id)arg1 ;
-(void)clearAllResults;
@end

