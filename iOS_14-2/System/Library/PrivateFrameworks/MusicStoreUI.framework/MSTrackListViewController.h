/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)reloadData;
-(void)loadView;
-(void)_reloadHeaderView;
-(void)dealloc;
-(void)_restrictionsChangedNotification:(id)arg1 ;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
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

