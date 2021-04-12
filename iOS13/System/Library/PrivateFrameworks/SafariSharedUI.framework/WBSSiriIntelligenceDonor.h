/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface WBSSiriIntelligenceDonor : NSObject {

	NSObject*<OS_dispatch_queue> _coreSpotlightDonationSerialQueue;

}
+(id)sharedInstance;
+(id)coreSpotlightPageDonationIdentifier;
+(id)historyItemIdentifierForURL:(id)arg1 ;
+(id)_historyItemIdentifierForURLString:(id)arg1 ;
+(id)_coreSpotlightItemIdentifierForURLString:(id)arg1 ;
+(id)_bookmarkItemIdentifierForURLString:(id)arg1 ;
-(id)init;
-(void)_indexHistoryItemsToCoreSpotlight:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_computeCoreSpotlightIDsForBookmarks:(id)arg1 ;
-(id)_indexedBookmarksIDs:(id*)arg1 ;
-(void)_computeCoreSpotlightIndexingRequirementsForAllBookmarksIDs:(id)arg1 indexedBookmarksIDs:(id)arg2 outIndexIDs:(id*)arg3 outRemoveIDs:(id*)arg4 ;
-(void)_removeCoreSpotlightDataWithIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_searchableItemsForIDs:(id)arg1 allBookmarks:(id)arg2 ;
-(void)_indexCoreSpotlightData:(id)arg1 ;
-(void)_sanitizeAttributeSet:(id)arg1 ;
-(void)donateDataForPageWithURL:(id)arg1 fullPageText:(id)arg2 readerText:(id)arg3 ;
-(void)export30DaysWorthOfHistoryToCoreSpotlightWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)donateSafariBookmarksToCoreSpotlight:(id)arg1 ;
-(void)processRemovedHistoryItems:(id)arg1 ;
-(void)removeAllCoreSpotlightHistoryDataDonatedBySafari;
@end

