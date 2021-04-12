/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CNUINavigationListViewDataSource.h>
#import <libobjc.A.dylib/CNUINavigationListViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol CNUINavigationListViewControllerDelegate, CNUINavigationListStyle;
@class CNUINavigationListView, NSArray, CNUINavigationListItem, CNUINavigationListViewCellHeightEstimator, NSString;

@interface CNUINavigationListViewController : UIViewController <CNUINavigationListViewDataSource, CNUINavigationListViewDelegate, UITableViewDataSource, UITableViewDelegate> {

	BOOL _showFirstSectionTopSeparator;
	BOOL _ignoreParentControllerResize;
	CNUINavigationListView* _navigationListView;
	NSArray* _items;
	CNUINavigationListItem* _expandedItem;
	id<CNUINavigationListViewControllerDelegate> _delegate;
	id<CNUINavigationListStyle> _navigationListStyle;
	long long _contentAlignment;
	CNUINavigationListViewCellHeightEstimator* _cellHeightEstimator;
	CNUINavigationListItem* _displayedExpandedItem;

}

@property (nonatomic,retain) CNUINavigationListView * navigationListView;                                  //@synthesize navigationListView=_navigationListView - In the implementation block
@property (nonatomic,retain) CNUINavigationListViewCellHeightEstimator * cellHeightEstimator;              //@synthesize cellHeightEstimator=_cellHeightEstimator - In the implementation block
@property (nonatomic,retain) CNUINavigationListItem * displayedExpandedItem;                               //@synthesize displayedExpandedItem=_displayedExpandedItem - In the implementation block
@property (assign,nonatomic) BOOL ignoreParentControllerResize;                                            //@synthesize ignoreParentControllerResize=_ignoreParentControllerResize - In the implementation block
@property (nonatomic,copy) NSArray * items;                                                                //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) CNUINavigationListItem * expandedItem;                                        //@synthesize expandedItem=_expandedItem - In the implementation block
@property (assign,nonatomic,__weak) id<CNUINavigationListViewControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<CNUINavigationListStyle> navigationListStyle;                              //@synthesize navigationListStyle=_navigationListStyle - In the implementation block
@property (assign,nonatomic) long long contentAlignment;                                                   //@synthesize contentAlignment=_contentAlignment - In the implementation block
@property (assign,nonatomic) BOOL showFirstSectionTopSeparator;                                            //@synthesize showFirstSectionTopSeparator=_showFirstSectionTopSeparator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)itemRequiresDetailCell:(id)arg1 ;
-(id)init;
-(id<CNUINavigationListViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CNUINavigationListViewControllerDelegate>)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2 ;
-(id)itemAtIndex:(long long)arg1 ;
-(BOOL)navigationListView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(BOOL)navigationListView:(id)arg1 shouldSelectRowAtIndexPath:(id)arg2 ;
-(void)navigationListView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)navigationListView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setNavigationListStyle:(id<CNUINavigationListStyle>)arg1 ;
-(void)styleUpdated;
-(double)cellSeparatorHeight;
-(void)expandItem:(id)arg1 ;
-(void)toggleItem:(id)arg1 ;
-(BOOL)canExpandItem:(id)arg1 ;
-(id)dequeueReusableStandardCell;
-(id)dequeueReusableDetailCell;
-(id)itemAtIndexPath:(id)arg1 ;
-(id)itemsForItem:(id)arg1 ;
-(CGSize)contentSizeForExpandedItem:(id)arg1 ;
-(void)updateNavigationListView;
-(void)updateNavigationListViewSeparatorStyle;
-(void)reloadNavigationListView;
-(void)updateNavigationListViewStateAnimated:(BOOL)arg1 ;
-(BOOL)canSelectItem:(id)arg1 ;
-(void)startTrackingRolloverWithGestureRecognizer:(id)arg1 ;
-(void)stopTrackingRollover;
-(CNUINavigationListView *)navigationListView;
-(void)setNavigationListView:(CNUINavigationListView *)arg1 ;
-(CNUINavigationListItem *)expandedItem;
-(void)setExpandedItem:(CNUINavigationListItem *)arg1 ;
-(id<CNUINavigationListStyle>)navigationListStyle;
-(long long)contentAlignment;
-(void)setContentAlignment:(long long)arg1 ;
-(BOOL)showFirstSectionTopSeparator;
-(void)setShowFirstSectionTopSeparator:(BOOL)arg1 ;
-(CNUINavigationListViewCellHeightEstimator *)cellHeightEstimator;
-(void)setCellHeightEstimator:(CNUINavigationListViewCellHeightEstimator *)arg1 ;
-(CNUINavigationListItem *)displayedExpandedItem;
-(void)setDisplayedExpandedItem:(CNUINavigationListItem *)arg1 ;
-(BOOL)ignoreParentControllerResize;
-(void)setIgnoreParentControllerResize:(BOOL)arg1 ;
@end

