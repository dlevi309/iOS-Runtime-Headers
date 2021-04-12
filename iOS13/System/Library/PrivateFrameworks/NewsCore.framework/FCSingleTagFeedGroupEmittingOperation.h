/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@interface FCSingleTagFeedGroupEmittingOperation : FCFeedGroupEmittingOperation
-(BOOL)_runningPPT;
-(void)performOperation;
-(void)supplementFeedItems:(id)arg1 fromCursor:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(unsigned long long)feedItemsToFetchForDesiredHeadlineCount:(unsigned long long)arg1 ;
-(id)feedTransformations;
-(void)_fetchOrdinaryHeadlinesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_fetchPinnedHeadlinesWithCompletionHandler:(/*^block*/id)arg1 ;
@end

