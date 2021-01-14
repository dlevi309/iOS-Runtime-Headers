/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)getSnapshotWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_enumerateCompletionItemsForMostRecentVisitsFromDatabase:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> >*)_completionItemFromDatabase:(id)arg1 withVisitDatabaseID:(long long)arg2 ;
@end

