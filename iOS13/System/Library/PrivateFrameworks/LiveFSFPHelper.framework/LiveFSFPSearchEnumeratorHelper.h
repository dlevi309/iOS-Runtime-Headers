/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LiveFSFPHelper.framework/LiveFSFPHelper
*/

#import <LiveFSFPHelper/LiveFSFPHelper-Structs.h>
#import <LiveFSFPHelper/LiveFSFPEnumeratorHelper.h>

@protocol OS_dispatch_queue;
@class NSFileProviderSearchQuery, NSMutableArray, NSObject, NSSortDescriptor;

@interface LiveFSFPSearchEnumeratorHelper : LiveFSFPEnumeratorHelper {

	NSFileProviderSearchQuery* _ourSearchQuery;
	NSMutableArray* searchResults;
	NSObject*<OS_dispatch_queue> _searchWorkQueue;
	NSMutableArray* _pendingReaderBlocks;
	NSSortDescriptor* _sortD;

}

@property (retain) NSSortDescriptor * sortD;              //@synthesize sortD=_sortD - In the implementation block
+(id)criteriaForQuery:(id)arg1 ;
+(id)newForQuery:(id)arg1 withExtension:(id)arg2 ;
-(void)start;
-(void)enumerateItemsForObserver:(id)arg1 startingAtPage:(id)arg2 ;
-(id)initForQuery:(id)arg1 withExtension:(id)arg2 ;
-(void)scheduleReaders;
-(/*^block*/id)copySearchResultBlock;
-(/*^block*/id)copySearchCompletionBlock;
-(void)finallyEnumerateItemsForObserver:(id)arg1 inRange:(NSRange)arg2 ;
-(void)waitForSearchResultsForObserver:(id)arg1 startingAtPage:(id)arg2 ;
-(NSSortDescriptor *)sortD;
-(void)setSortD:(NSSortDescriptor *)arg1 ;
@end

