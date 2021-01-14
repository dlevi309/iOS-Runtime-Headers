/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/


@protocol FCReadingHistoryObserving <NSObject>
@optional
-(void)readingHistory:(id)arg1 didRemoveArticlesWithIDs:(id)arg2;
-(void)readingHistory:(id)arg1 didAddArticlesWithIDs:(id)arg2;
-(void)readingHistory:(id)arg1 didChangeFeaturesForArticles:(id)arg2;
-(void)readingHistoryLikelyClearedRemotely:(id)arg1;
-(void)readingHistory:(id)arg1 didAddHeadline:(id)arg2 fromGroupType:(long long)arg3 swipedToArticle:(BOOL)arg4 withOnScreenChecker:(/*^block*/id)arg5;
-(void)readingHistory:(id)arg1 didAddHeadline:(id)arg2 fromGroupType:(long long)arg3 swipedToArticle:(BOOL)arg4 withOnScreenChecker:(/*^block*/id)arg5;
-(void)readingHistoryDidClear:(id)arg1;

@end

