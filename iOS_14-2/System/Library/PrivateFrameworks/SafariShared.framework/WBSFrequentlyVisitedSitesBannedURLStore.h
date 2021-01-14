/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol OS_dispatch_queue;
@class NSURL, NSObject, NSMutableDictionary;

@interface WBSFrequentlyVisitedSitesBannedURLStore : NSObject {

	NSURL* _storeURL;
	NSObject*<OS_dispatch_queue> _storeQueue;
	NSMutableDictionary* _bannedURLStringsToEntriesMap;

}
-(void)_historyWasCleared:(id)arg1 ;
-(void)addURLString:(id)arg1 ;
-(void)_historyItemsWereRemoved:(id)arg1 ;
-(id)_bannedURLStringsToEntriesMap;
-(void)_writeOutBannedURLStringsAsynchronously;
-(void)removeAllURLStrings;
-(id)initWithStoreURL:(id)arg1 history:(id)arg2 ;
-(BOOL)containsURLString:(id)arg1 ;
-(void)removeURLStrings:(id)arg1 ;
-(id)urlStrings;
-(void)dealloc;
@end

