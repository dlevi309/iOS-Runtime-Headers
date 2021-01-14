/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)itemAtIndex:(long long)arg1 ;
-(void)setItems:(NSArray *)arg1 ;
-(id)init;
-(id<CNUINavigationListViewControllerDelegate>)delegate;
-(void)expandItem:(id)arg1 ;
-(BOOL)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2 ;
-(void)styleUpdated;
-(void)toggleItem:(id)arg1 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(BOOL)canExpandItem:(id)arg1 ;
-(BOOL)navigationListView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(BOOL)navigationListView:(id)arg1 shouldSelectRowAtIndexPath:(id)arg2 ;
-(void)setNavigationListStyle:(id<CNUINavigationListStyle>)arg1 ;
-(void)navigationListView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(double)cellSeparatorHeight;
-(void)navigationListView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)dequeueReusableStandardCell;
-(id)dequeueReusableDetailCell;
-(id)itemsForItem:(id)arg1 ;
-(CGSize)contentSizeForExpandedItem:(id)arg1 ;
-(CNUINavigationListItem *)expandedItem;
-(void)updateNavigationListView;
-(void)updateNavigationListViewSeparatorStyle;
-(BOOL)canSelectItem:(id)arg1 ;
-(void)reloadNavigationListView;
-(void)updateNavigationListViewStateAnimated:(BOOL)arg1 ;
-(long long)contentAlignment;
-(void)startTrackingRolloverWithGestureRecognizer:(id)arg1 ;
-(void)stopTrackingRollover;
-(void)setExpandedItem:(CNUINavigationListItem *)arg1 ;
-(CNUINavigationListView *)navigationListView;
-(void)setNavigationListView:(CNUINavigationListView *)arg1 ;
-(id<CNUINavigationListStyle>)navigationListStyle;
-(CNUINavigationListViewCellHeightEstimator *)cellHeightEstimator;
-(void)setContentAlignment:(long long)arg1 ;
-(BOOL)showFirstSectionTopSeparator;
-(void)setCellHeightEstimator:(CNUINavigationListViewCellHeightEstimator *)arg1 ;
-(void)setShowFirstSectionTopSeparator:(BOOL)arg1 ;
-(CNUINavigationListItem *)displayedExpandedItem;
-(void)setDisplayedExpandedItem:(CNUINavigationListItem *)arg1 ;
-(BOOL)ignoreParentControllerResize;
-(void)setIgnoreParentControllerResize:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(NSArray *)items;
-(void)setDelegate:(id<CNUINavigationListViewControllerDelegate>)arg1 ;
-(BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

