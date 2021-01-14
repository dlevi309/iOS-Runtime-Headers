/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol OS_dispatch_queue;
#import <SafariShared/SafariShared-Structs.h>
@class NSObject;

@interface WBSHistoryServiceURLCompletion : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	URLCompletionEntryMap* _map;
	unordered_multimap<WTF::RetainPtr<NSString>, WTF::RetainPtr<NSString>, std::__1::hash<RetainPtr<NSString> >, std::__1::equal_to<RetainPtr<NSString> >, std::__1::allocator<std::__1::pair<const WTF::RetainPtr<NSString>, WTF::RetainPtr<NSString> > > >* _redirectSources;

}
-(void)computeFrequentlyVisitedSites:(unsigned long long)arg1 minimalVisitCountScore:(unsigned long long)arg2 disallowList:(id)arg3 allowList:(id)arg4 options:(unsigned long long)arg5 currentTime:(double)arg6 completionHandler:(/*^block*/id)arg7 ;
-(BOOL)queryVisitCounts:(id)arg1 outVisitCountScore:(long long*)arg2 outDailyVisitCounts:(id*)arg3 outWeeklyVisitCounts:(id*)arg4 ;
-(id)_warmUpWithDatabase:(id)arg1 ;
-(void)updateURLString:(id)arg1 autocompleteTriggerData:(id)arg2 ;
-(id)init;
-(void)updateVisit:(id)arg1 title:(id)arg2 ;
-(id)warmUpWithDatabase:(id)arg1 ;
-(void)searchForUserTypedString:(id)arg1 options:(unsigned long long)arg2 currentTime:(double)arg3 enumerationGroup:(id)arg4 enumerationBlock:(/*^block*/id)arg5 ;
-(id)_endOfRedirectChain:(id)arg1 ;
-(void)recordVisit:(id)arg1 sourceVisit:(id)arg2 title:(id)arg3 loadSuccessful:(BOOL)arg4 visitWasFromThisDevice:(BOOL)arg5 increaseVisitCount:(BOOL)arg6 score:(int)arg7 ;
-(void)noteRedirectFromURLString:(id)arg1 toURLString:(id)arg2 ;
-(void)updateVisit:(id)arg1 oldScore:(int)arg2 newScore:(int)arg3 completionHandler:(/*^block*/id)arg4 ;
-(double)lastVisitTimeForURLString:(id)arg1 ;
-(void)removeURLStrings:(id)arg1 ;
-(void)updateItemWithLatestVisit:(id)arg1 database:(id)arg2 ;
@end

