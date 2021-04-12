/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/WBSURLCompletionDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject, WBSURLCompletionDatabase, NSString;

@interface WBSURLCompletionHistorySnapshot : NSObject <WBSURLCompletionDataSource> {

	NSObject*<OS_dispatch_queue> _completionDatabaseQueue;
	WBSURLCompletionDatabase* _completionDatabase;
	unique_ptr<std::__1::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> >, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> > > >, std::__1::default_delete<std::__1::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> >, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> > > > > >* _items;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithItems:(unique_ptr<std::__1::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> >, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> > > >, std::__1::default_delete<std::__1::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> >, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> > > > > >*)arg1 ;
-(void)getBestMatchesForTypedString:(id)arg1 limit:(unsigned long long)arg2 forQueryID:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)fakeBookmarkMatchDataWithURLString:(id)arg1 title:(id)arg2 shouldPreload:(BOOL)arg3 ;
-(void)enumerateMatchDataForTypedStringHint:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)_matchSnapshotForCompletionMatch:(id)arg1 ;
@end

