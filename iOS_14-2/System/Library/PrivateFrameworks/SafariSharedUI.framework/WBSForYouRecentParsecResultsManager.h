/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)retrieveRecommendationsMatchingTopic:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)appendResultsIfApplicable:(id)arg1 ;
-(void)appendResultsIfApplicable:(id)arg1 withDelayedExistenceCheck:(BOOL)arg2 ;
-(BOOL)_hasPermissibleResultTypeForResult:(id)arg1 ;
-(NSArray *)recentRecommendations;
-(id)_bestAcceptableImageForSFResult:(id)arg1 ;
-(void)_createInternalQueueIfNecessary;
-(void)clearAllResults;
-(id)_cacheEnsuringExistence;
@end

