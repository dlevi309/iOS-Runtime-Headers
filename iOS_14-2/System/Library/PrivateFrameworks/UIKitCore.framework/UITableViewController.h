/*
* Generated on Thursday, January 14, 2021 at 2:20:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKitCore/_UIKeyboardAutoRespondingScrollViewController.h>
#import <UIKit/UITableViewFocusDelegateLegacy.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>
#import <UIKit/UIViewControllerPreviewingDelegate_Deprecated.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UIAutoRespondingScrollViewControllerKeyboardSupport, UITableViewDataSource, _UIFilteredDataSource, UITableView, UIRefreshControl, NSString;

@interface UITableViewController : UIViewController <_UIKeyboardAutoRespondingScrollViewController, UITableViewFocusDelegateLegacy, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Deprecated, UITableViewDelegate, UITableViewDataSource> {

	long long _tableViewStyle;
	UIAutoRespondingScrollViewControllerKeyboardSupport* _keyboardSupport;
	UITableViewDataSource* _staticDataSource;
	struct {
		unsigned clearsSelectionOnViewWillAppear : 1;
		unsigned insetsApplied : 1;
		unsigned adjustingInsets : 1;
	}  _tableViewControllerFlags;
	_UIFilteredDataSource* _filteredDataSource;
	long long _filteredDataType;

}

@property (setter=_setStaticDataSource:,getter=_staticDataSource,nonatomic,retain) UITableViewDataSource * staticDataSource; 
@property (nonatomic,retain) UITableView * tableView; 
@property (assign,nonatomic) BOOL clearsSelectionOnViewWillAppear; 
@property (nonatomic,retain) UIRefreshControl * refreshControl; 
@property (getter=_scrollView,nonatomic,retain,readonly) UIScrollView*<_UIKeyboardAutoRespondingScrollView> scrollView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)willPresentPreviewViewController:(id)arg1 forLocation:(CGPoint)arg2 inSourceView:(id)arg3 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)_scrollView;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)init;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)willPresentPreviewViewController:(id)arg1 forPosition:(CGPoint)arg2 inSourceView:(id)arg3 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(UITableView *)tableView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)willPresentPreviewViewController:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)_existingTableView;
-(void)setRefreshControl:(UIRefreshControl *)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_limitedUIDidChange;
-(void)_setStaticDataSource:(id)arg1 ;
-(long long)_filteredDataType;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_shouldRespondToPreviewingMethods;
-(id)previewViewControllerForLocation:(CGPoint)arg1 inSourceView:(id)arg2 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setClearsSelectionOnViewWillAppear:(BOOL)arg1 ;
-(void)_setFilteredDataType:(long long)arg1 ;
-(BOOL)clearsSelectionOnViewWillAppear;
-(UIRefreshControl *)refreshControl;
-(void)_applyDefaultDataSourceToTable:(id)arg1 ;
-(id)_staticDataSource;
-(void)_refreshFilteredDataSourceFilterTypeForScreen:(id)arg1 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(long long)_resolvedDataSourceFilterTypeForScreen:(id)arg1 ;
-(id)previewViewControllerForRowAtIndexPath:(id)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(BOOL)_viewControllerWasSelected;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

