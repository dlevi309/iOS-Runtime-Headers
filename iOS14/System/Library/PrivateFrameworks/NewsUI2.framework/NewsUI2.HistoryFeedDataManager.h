/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <libobjc.A.dylib/FCReadingHistoryObserving.h>
#import <libobjc.A.dylib/FCReadingListObserving.h>

@interface NewsUI2.HistoryFeedDataManager : NSObject <FCReadingHistoryObserving, FCReadingListObserving> {

	 delegate;
	 clearReadingHistoryManager;
	 newsletterManager;
	 personalizationData;
	 readingHistory;
	 readingList;
	 headlineService;
	 accessQueue;
	 chunkSize;

}
-(void)readingList:(id)arg1 didAddArticles:(id)arg2 removeArticles:(id)arg3 eventInitiationLevel:(long long)arg4 ;
-(void)readingHistory:(id)arg1 didRemoveArticlesWithIDs:(id)arg2 ;
-(void)readingHistory:(id)arg1 didAddArticlesWithIDs:(id)arg2 ;
-(void)readingHistory:(id)arg1 didChangeFeaturesForArticles:(id)arg2 ;
-(void)readingHistoryDidClear:(id)arg1 ;
-(id)init;
@end

