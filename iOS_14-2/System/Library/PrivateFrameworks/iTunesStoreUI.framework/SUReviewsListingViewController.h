/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUStructuredPageViewController.h>

@class SUButtonAccessoryView;

@interface SUReviewsListingViewController : SUStructuredPageViewController {

	SUButtonAccessoryView* _accessoryView;

}
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)_headerItem;
-(void)reloadData;
-(id)_accessoryView;
-(void)loadView;
-(void)_reloadHeaderView;
-(void)dealloc;
-(void)reloadForChangedRowCount:(long long)arg1 ;
-(id)newTermsAndConditionsFooter;
-(void)_writeAReview:(id)arg1 ;
-(BOOL)_canWriteReview;
@end

