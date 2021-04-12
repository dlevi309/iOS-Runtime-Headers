/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol OS_dispatch_queue;
#import <SafariShared/SafariShared-Structs.h>
@class WBSHistoryService, NSObject, NSDate, WBSURLCompletionHistorySnapshot;

@interface WBSHistoryURLCompletionDataStore : NSObject {

	WBSHistoryService* _historyService;
	NSObject*<OS_dispatch_queue> _dataStoreQueue;
	NSDate* _snapshotLastModifiedDate;
	WBSURLCompletionHistorySnapshot* _snapshot;

}
-(id)initWithHistoryService:(id)arg1 ;
-(void)_loadFromDatabaseIfNecessary;
-(Ref<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> >*)_completionItemFromRow:(id)arg1 ;
-(void)_enumerateCompletionItemsForMostRecentVisitsFromDatabase:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> >*)_completionItemFromDatabase:(id)arg1 withVisitDatabaseID:(long long)arg2 ;
-(void)getSnapshotWithCompletionHandler:(/*^block*/id)arg1 ;
@end

