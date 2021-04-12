/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol OS_dispatch_queue;
@class NSURL, NSObject, NSMutableDictionary;

@interface WBSFrequentlyVisitedSitesBannedURLStore : NSObject {

	NSURL* _storeURL;
	NSObject*<OS_dispatch_queue> _storeQueue;
	NSMutableDictionary* _bannedURLStringsToEntriesMap;

}
-(void)dealloc;
-(id)urlStrings;
-(void)_historyItemsWereRemoved:(id)arg1 ;
-(void)_historyWasCleared:(id)arg1 ;
-(void)addURLString:(id)arg1 ;
-(BOOL)containsURLString:(id)arg1 ;
-(id)_bannedURLStringsToEntriesMap;
-(void)_writeOutBannedURLStringsAsynchronously;
-(void)removeAllURLStrings;
-(void)removeURLStrings:(id)arg1 ;
-(id)initWithStoreURL:(id)arg1 history:(id)arg2 ;
@end

