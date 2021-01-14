/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@interface FCSingleTagFeedGroupEmittingOperation : FCFeedGroupEmittingOperation
-(void)performOperation;
-(void)_fetchOrdinaryHeadlinesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_fetchPinnedHeadlinesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)feedTransformations;
-(BOOL)_runningPPT;
-(void)supplementFeedItems:(id)arg1 fromCursor:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(unsigned long long)feedItemsToFetchForDesiredHeadlineCount:(unsigned long long)arg1 ;
@end

