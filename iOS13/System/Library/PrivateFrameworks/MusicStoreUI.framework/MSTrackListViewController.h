/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
*/

#import <MusicStoreUI/MSStructuredPageViewController.h>
#import <libobjc.A.dylib/MSTrackListHeaderDelegate.h>

@class MSTrackListHeaderView, NSString;

@interface MSTrackListViewController : MSStructuredPageViewController <MSTrackListHeaderDelegate> {

	MSTrackListHeaderView* _headerView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)loadView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)reloadData;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
-(void)_restrictionsChangedNotification:(id)arg1 ;
-(void)_reloadHeaderView;
-(id)newTermsAndConditionsFooter;
-(void)_webViewsLoaded:(id)arg1 ;
-(void)_reloadFooterView;
-(void)_delayedReloadForWebViews;
-(id)_headerArtworkItemImage;
-(id)_newImageDataProvider;
-(id)_newPlaceholderImage;
-(id)_headerArtworkImage;
-(id)purchasableItemsForHeaderView:(id)arg1 ;
@end

