/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
*/

#import <libobjc.A.dylib/FCReadingHistoryObserving.h>
#import <libobjc.A.dylib/FCReadingListObserving.h>

@interface NewsArticles.EndOfArticleDataManager : NSObject <FCReadingHistoryObserving, FCReadingListObserving> {

	 delegate;
	 articleRecirculationService;
	 legacyNativeAdService;
	 readingHistory;
	 readingList;

}
-(void)readingList:(id)arg1 didAddArticles:(id)arg2 removeArticles:(id)arg3 eventInitiationLevel:(long long)arg4 ;
-(void)readingHistory:(id)arg1 didChangeFeaturesForArticles:(id)arg2 ;
-(id)init;
@end

