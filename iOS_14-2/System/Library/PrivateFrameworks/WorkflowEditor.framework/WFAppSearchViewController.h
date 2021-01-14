/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UISearchBarDelegate.h>

@protocol WFAppSearchViewControllerDelegate;
@class UITableView, NSArray, NSMutableOrderedSet, NSMutableDictionary, UIImage, NSString;

@interface WFAppSearchViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate> {

	BOOL _allowMultipleSelection;
	id<WFAppSearchViewControllerDelegate> _delegate;
	UITableView* _tableView;
	long long _appSearchType;
	NSArray* _omittedAppBundleIDs;
	NSArray* _apps;
	NSMutableOrderedSet* _selectedApps;
	NSMutableDictionary* _cachedAppIconForBundleId;
	UIImage* _placeholderImage;

}

@property (assign,nonatomic,__weak) UITableView * tableView;                                     //@synthesize tableView=_tableView - In the implementation block
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
-(void)setApps:(NSArray *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)init;
-(void)updateDoneButtonEnabledState;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id<WFAppSearchViewControllerDelegate>)delegate;
-(UITableView *)tableView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(NSArray *)apps;
-(void)done;
-(void)setDelegate:(id<WFAppSearchViewControllerDelegate>)arg1 ;
-(UIImage *)placeholderImage;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(void)loadView;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)cancel;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(id)applicationIconImageForBundleIdentifier:(id)arg1 ;
-(long long)appSearchType;
-(id)initWithAppSearchType:(long long)arg1 ;
-(id)initWithAppSearchType:(long long)arg1 allowMultipleSelection:(BOOL)arg2 selectedApps:(id)arg3 ;
-(id)initWithAppSearchType:(long long)arg1 omittedAppBundleIDs:(id)arg2 allowMultipleSelection:(BOOL)arg3 selectedApps:(id)arg4 ;
-(void)adjustInsetsForKeyboard;
-(void)loadApps;
-(id)filteredApps;
-(NSArray *)omittedAppBundleIDs;
-(BOOL)allowMultipleSelection;
-(NSMutableOrderedSet *)selectedApps;
-(void)setSelectedApps:(NSMutableOrderedSet *)arg1 ;
-(NSMutableDictionary *)cachedAppIconForBundleId;
-(void)setCachedAppIconForBundleId:(NSMutableDictionary *)arg1 ;
@end

