/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UISearchBarDelegate.h>

@protocol WFAppSearchViewControllerDelegate;
@class UITableView, UISearchBar, NSArray, NSMutableOrderedSet, NSMutableDictionary, UIImage, NSString;

@interface WFAppSearchViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate> {

	BOOL _allowMultipleSelection;
	id<WFAppSearchViewControllerDelegate> _delegate;
	UITableView* _tableView;
	UISearchBar* _searchBar;
	long long _appSearchType;
	NSArray* _omittedAppBundleIDs;
	NSArray* _apps;
	NSMutableOrderedSet* _selectedApps;
	NSMutableDictionary* _cachedAppIconForBundleId;
	UIImage* _placeholderImage;

}

@property (assign,nonatomic,__weak) UITableView * tableView;                                     //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic,__weak) UISearchBar * searchBar;                                     //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,readonly) long long appSearchType;                                          //@synthesize appSearchType=_appSearchType - In the implementation block
@property (nonatomic,readonly) NSArray * omittedAppBundleIDs;                                    //@synthesize omittedAppBundleIDs=_omittedAppBundleIDs - In the implementation block
@property (nonatomic,readonly) BOOL allowMultipleSelection;                                      //@synthesize allowMultipleSelection=_allowMultipleSelection - In the implementation block
@property (nonatomic,copy) NSArray * apps;                                                       //@synthesize apps=_apps - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * selectedApps;                                 //@synthesize selectedApps=_selectedApps - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedAppIconForBundleId;                     //@synthesize cachedAppIconForBundleId=_cachedAppIconForBundleId - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                                         //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (assign,nonatomic,__weak) id<WFAppSearchViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<WFAppSearchViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFAppSearchViewControllerDelegate>)arg1 ;
-(void)cancel;
-(void)done;
-(void)loadView;
-(UITableView *)tableView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(UISearchBar *)searchBar;
-(void)setSearchBar:(UISearchBar *)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setTableView:(UITableView *)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(UIImage *)placeholderImage;
-(NSArray *)apps;
-(void)setApps:(NSArray *)arg1 ;
-(id)applicationIconImageForBundleIdentifier:(id)arg1 ;
-(NSMutableOrderedSet *)selectedApps;
-(void)setSelectedApps:(NSMutableOrderedSet *)arg1 ;
-(long long)appSearchType;
-(void)updateDoneButtonEnabledState;
-(id)initWithAppSearchType:(long long)arg1 ;
-(id)initWithAppSearchType:(long long)arg1 allowMultipleSelection:(BOOL)arg2 selectedApps:(id)arg3 ;
-(id)initWithAppSearchType:(long long)arg1 omittedAppBundleIDs:(id)arg2 allowMultipleSelection:(BOOL)arg3 selectedApps:(id)arg4 ;
-(void)adjustInsetsForKeyboard;
-(void)loadApps;
-(id)filteredApps;
-(NSArray *)omittedAppBundleIDs;
-(BOOL)allowMultipleSelection;
-(NSMutableDictionary *)cachedAppIconForBundleId;
-(void)setCachedAppIconForBundleId:(NSMutableDictionary *)arg1 ;
@end

