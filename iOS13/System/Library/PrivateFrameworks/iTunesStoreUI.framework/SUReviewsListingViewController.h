/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUStructuredPageViewController.h>

@class SUButtonAccessoryView;

@interface SUReviewsListingViewController : SUStructuredPageViewController {

	SUButtonAccessoryView* _accessoryView;

}
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)reloadData;
-(id)_accessoryView;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)_reloadHeaderView;
-(void)reloadForChangedRowCount:(long long)arg1 ;
-(id)newTermsAndConditionsFooter;
-(id)_headerItem;
-(void)_writeAReview:(id)arg1 ;
-(BOOL)_canWriteReview;
@end

