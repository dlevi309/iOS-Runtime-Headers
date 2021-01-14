/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <libobjc.A.dylib/TSPluginDelegate.h>
#import <libobjc.A.dylib/FCReadingHistoryObserving.h>
#import <libobjc.A.dylib/FCReadingListObserving.h>
#import <libobjc.A.dylib/FCBundleSubscriptionChangeObserver.h>

@interface NewsUI2.MagazineFeedDataManager : NSObject <TSPluginDelegate, FCReadingHistoryObserving, FCReadingListObserving, FCBundleSubscriptionChangeObserver> {

	 delegate;
	 feedServiceConfigFetcher;
	 feedService;
	 myMagazinesModule;
	 categoriesModule;
	 paywallModule;
	 accessQueue;
	 prewarmer;
	 pluginManager;
	 lastRefreshDate;
	 subscriptionService;
	 _persistedConfigurationDate;
	 readingHistory;
	 readingList;

}
-(void)readingList:(id)arg1 didAddArticles:(id)arg2 removeArticles:(id)arg3 eventInitiationLevel:(long long)arg4 ;
-(void)bundleSubscriptionDidSubscribe:(id)arg1 ;
-(void)plugin:(id)arg1 didResizePluginModel:(id)arg2 ;
-(void)readingHistory:(id)arg1 didChangeFeaturesForArticles:(id)arg2 ;
-(void)bundleSubscriptionDidExpire:(id)arg1 ;
-(id)init;
@end

