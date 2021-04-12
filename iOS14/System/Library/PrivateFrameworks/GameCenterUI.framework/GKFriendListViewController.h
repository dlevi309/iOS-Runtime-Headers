/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UISearchControllerDelegate.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol GKFriendListViewControllerDelegate;
@class NSMutableArray, NSArray, UISearchController, UIActivityIndicatorView, NSString;

@interface GKFriendListViewController : UITableViewController <UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating, UITableViewDelegate, UITableViewDataSource> {

	BOOL _needsShowMoreFooter;
	id<GKFriendListViewControllerDelegate> _delegate;
	NSMutableArray* _friendPlayers;
	NSMutableArray* _recentPlayers;
	NSMutableArray* _allPlayers;
	NSArray* _friendsForDisplay;
	NSArray* _recentsForDisplay;
	NSArray* _allPlayersForDisplay;
	UISearchController* _searchController;
	UIActivityIndicatorView* _activityIndicator;

}

@property (nonatomic,retain) NSMutableArray * friendPlayers;                                      //@synthesize friendPlayers=_friendPlayers - In the implementation block
@property (nonatomic,retain) NSMutableArray * recentPlayers;                                      //@synthesize recentPlayers=_recentPlayers - In the implementation block
@property (nonatomic,retain) NSMutableArray * allPlayers;                                         //@synthesize allPlayers=_allPlayers - In the implementation block
@property (nonatomic,retain) NSArray * friendsForDisplay;                                         //@synthesize friendsForDisplay=_friendsForDisplay - In the implementation block
@property (nonatomic,retain) NSArray * recentsForDisplay;                                         //@synthesize recentsForDisplay=_recentsForDisplay - In the implementation block
@property (nonatomic,retain) NSArray * allPlayersForDisplay;                                      //@synthesize allPlayersForDisplay=_allPlayersForDisplay - In the implementation block
@property (nonatomic,retain) UISearchController * searchController;                               //@synthesize searchController=_searchController - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                         //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (assign,nonatomic) BOOL needsShowMoreFooter;                                            //@synthesize needsShowMoreFooter=_needsShowMoreFooter - In the implementation block
@property (assign,nonatomic,__weak) id<GKFriendListViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(UIActivityIndicatorView *)activityIndicator;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2 ;
-(void)setSearchController:(UISearchController *)arg1 ;
-(UISearchController *)searchController;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)didDismissSearchController:(id)arg1 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id<GKFriendListViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setupSearchController;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)loadData;
-(void)showLoadingIndicator;
-(void)setDelegate:(id<GKFriendListViewControllerDelegate>)arg1 ;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)viewDidLoad;
-(NSMutableArray *)allPlayers;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(NSMutableArray *)friendPlayers;
-(void)addFriends:(id)arg1 ;
-(void)setupNavBar;
-(void)setAllPlayers:(NSMutableArray *)arg1 ;
-(void)setFriendPlayers:(NSMutableArray *)arg1 ;
-(void)setRecentPlayers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)recentPlayers;
-(void)setRecentsForDisplay:(NSArray *)arg1 ;
-(void)loadMoreFriends;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)setFriendsForDisplay:(NSArray *)arg1 ;
-(void)setNeedsShowMoreFooter:(BOOL)arg1 ;
-(NSArray *)friendsForDisplay;
-(BOOL)needsShowMoreFooter;
-(BOOL)tableViewHasFooter:(long long)arg1 ;
-(NSArray *)recentsForDisplay;
-(NSArray *)allPlayersForDisplay;
-(id)getPlayerAtIndexPath:(id)arg1 ;
-(void)reportPlayerAtIndexPath:(id)arg1 ;
-(void)deletePlayerAtIndexPath:(id)arg1 ;
-(void)setAllPlayersForDisplay:(NSArray *)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
@end

