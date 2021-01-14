/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <libobjc.A.dylib/TSPluginDelegate.h>
#import <libobjc.A.dylib/FCReadingHistoryObserving.h>
#import <libobjc.A.dylib/FCReadingListObserving.h>

@interface NewsUI2.TagFeedDataManager : NSObject <TSPluginDelegate, FCReadingHistoryObserving, FCReadingListObserving> {

	 delegate;
	 feedServiceConfigFetcher;
	 feedService;
	 headlineService;
	 pluginManager;
	 pluginFactory;
	 accessQueue;
	 readingHistory;
	 readingList;
	 appConfigManager;

}
-(void)readingList:(id)arg1 didAddArticles:(id)arg2 removeArticles:(id)arg3 eventInitiationLevel:(long long)arg4 ;
-(void)plugin:(id)arg1 didResizePluginModel:(id)arg2 ;
-(void)readingHistory:(id)arg1 didChangeFeaturesForArticles:(id)arg2 ;
-(id)init;
@end

