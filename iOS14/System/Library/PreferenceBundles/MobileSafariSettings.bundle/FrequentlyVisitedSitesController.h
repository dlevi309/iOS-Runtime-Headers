/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
*/

#import <SafariShared/WBSFrequentlyVisitedSitesController.h>

@class WebBookmarkCollection, NSMutableArray;

@interface FrequentlyVisitedSitesController : WBSFrequentlyVisitedSitesController {

	WebBookmarkCollection* _bookmarkCollection;
	BOOL _bookmarksNeedToSave;
	NSMutableArray* _cachedFrequentlyVisitedBookmarks;
	BOOL _ignoreBookmarksFolderChangeNotifications;

}
+(id)sharedController;
-(id)frequentlyVisitedSites;
-(void)promoteFrequentlyVisitedSite:(id)arg1 toFavoriteAtIndex:(unsigned long long)arg2 ;
-(BOOL)_updateCachedFrequentlyVisitedSitesWithCandidates:(id)arg1 ;
-(void)banFrequentlyVisitedSite:(id)arg1 inMemoryBookmarkChangeTrackingAvailable:(BOOL)arg2 ;
-(void)clearFrequentlyVisitedSites;
-(id)_existingIconsDataFromBookmarksDB;
-(void)_clearFrequentlyVisitedSitesInBookmarksDB;
-(id)initWithBookmarkCollection:(id)arg1 ;
-(void)_receivedBookmarksFolderContentChangedNotification:(id)arg1 ;
-(void)saveFrequentlyVisitedSitesToBookmarksDBWithCompletion:(/*^block*/id)arg1 ;
-(id)_canonicalizedFavoritesURLStringSet;
-(BOOL)_saveFrequentlyVisitedSites:(id)arg1 ;
-(void)dealloc;
@end

