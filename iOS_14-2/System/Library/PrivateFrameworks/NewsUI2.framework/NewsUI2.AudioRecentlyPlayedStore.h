/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <libobjc.A.dylib/FCReadingHistoryObserving.h>

@interface NewsUI2.AudioRecentlyPlayedStore : NSObject <FCReadingHistoryObserving> {

	 recentlyPlayedUpdatedSignal;
	 readingHistory;
	 headlineService;
	 headlineCache;
	 paidBundleConfigManager;

}
-(void)readingHistory:(id)arg1 didRemoveArticlesWithIDs:(id)arg2 ;
-(void)readingHistory:(id)arg1 didAddArticlesWithIDs:(id)arg2 ;
-(void)readingHistory:(id)arg1 didChangeFeaturesForArticles:(id)arg2 ;
-(void)readingHistoryDidClear:(id)arg1 ;
-(id)init;
@end

