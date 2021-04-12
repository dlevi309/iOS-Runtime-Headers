/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI.BaseCollectionViewController.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <UIKit/UISearchControllerDelegate.h>

@interface GameCenterUI.FriendsListViewController : GameCenterUI.BaseCollectionViewController <UISearchResultsUpdating, UISearchControllerDelegate> {

	 bootstrapPresenter;
	 statePresenter;
	 collectionContent;
	 components;
	 searchController;
	 addFriendsBarButtonItem;

}
-(void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)didDismissSearchController:(id)arg1 ;
-(void)didTapAddFriends;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

