/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
*/

#import <SafariShared/WBSFrequentlyVisitedSitesController.h>

@class NSMutableArray, WebBookmarkCollection;

@interface FrequentlyVisitedSitesController : WBSFrequentlyVisitedSitesController {

	NSMutableArray* _cachedFrequentlyVisitedBookmarks;
	WebBookmarkCollection* _bookmarkCollection;
	BOOL _bookmarksNeedToSave;
	BOOL _ignoreBookmarksFolderChangeNotifications;

}
+(id)sharedController;
-(void)dealloc;
-(id)_canonicalizedFavoritesURLStringSet;
-(id)frequentlyVisitedSites;
-(void)clearFrequentlyVisitedSites;
-(id)initWithBookmarkCollection:(id)arg1 ;
-(void)_receivedBookmarksFolderContentChangedNotification:(id)arg1 ;
-(void)_clearFrequentlyVisitedSitesInBookmarksDB;
-(void)promoteFrequentlyVisitedSite:(id)arg1 toFavoriteAtIndex:(unsigned long long)arg2 ;
-(void)banFrequentlyVisitedSite:(id)arg1 inMemoryBookmarkChangeTrackingAvailable:(BOOL)arg2 ;
-(void)saveFrequentlyVisitedSitesToBookmarksDBWithCompletion:(/*^block*/id)arg1 ;
@end

