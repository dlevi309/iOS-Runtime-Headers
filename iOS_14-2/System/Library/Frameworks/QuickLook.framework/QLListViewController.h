/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKitCore/UINavigationController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@protocol QLListViewControllerDelegate;
@class UIPopoverPresentationController, UITableViewController, QLItem, QLPreviewItemStore, QLListCellManager, NSArray, UIBarButtonItem, NSString;

@interface QLListViewController : UINavigationController <UITableViewDataSource, UITableViewDelegate, UIPopoverPresentationControllerDelegate> {

	UIPopoverPresentationController* _presentationController;
	UITableViewController* _tableViewController;
	QLItem* _currentPreviewItem;
	QLPreviewItemStore* _previewItemStore;
	QLListCellManager* _cellManager;
	NSArray* _itemsWithFolders;
	id<QLListViewControllerDelegate> _archiveDelegate;
	UIBarButtonItem* _barButton;

}

@property (__weak) id<QLListViewControllerDelegate> archiveDelegate;              //@synthesize archiveDelegate=_archiveDelegate - In the implementation block
@property (assign,nonatomic,__weak) UIBarButtonItem * barButton;                  //@synthesize barButton=_barButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareForPopoverPresentation:(id)arg1 ;
-(id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<QLListViewControllerDelegate>)archiveDelegate;
-(void)_addPath:(id)arg1 fromPreviewItem:(id)arg2 intoArray:(id)arg3 ;
-(id)initWithPreviewItemStore:(id)arg1 currentPreviewItem:(id)arg2 ;
-(void)setBarButton:(UIBarButtonItem *)arg1 ;
-(void)setArchiveDelegate:(id<QLListViewControllerDelegate>)arg1 ;
-(UIBarButtonItem *)barButton;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)_dismiss;
-(void)_generateItemsAndFolders;
-(void)_updateNavigationBarVisibilityForPresentationStyle:(long long)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

