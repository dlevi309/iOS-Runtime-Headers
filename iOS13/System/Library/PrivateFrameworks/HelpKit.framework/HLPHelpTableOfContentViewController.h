/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
*/

#import <HelpKit/HelpKit-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <UIKit/UISearchControllerDelegate.h>

@protocol HLPHelpTableOfContentViewControllerDelegate;
@class UIView, UILabel, UIButton, NSLayoutConstraint, NSArray, HLPHelpLocale, HLPHelpBookController, HLPHelpUsageController, NSMutableArray, UISearchController, HLPHelpSearchIndexController, HLPHelpSearchResultTableViewController, NSString;

@interface HLPHelpTableOfContentViewController : UITableViewController <UISearchBarDelegate, UISearchResultsUpdating, UISearchControllerDelegate> {

	UIView* _tableBackgroundView;
	UIView* _tableFooterSeparatorView;
	UILabel* _copyrightFooterLabel;
	UIButton* _footerViewOverlayButton;
	NSLayoutConstraint* _copyrightFooterLabelHeightConstraint;
	NSLayoutConstraint* _copyrightFooterLabelTopConstraint;
	BOOL _fullBookView;
	id<HLPHelpTableOfContentViewControllerDelegate> _delegate;
	NSArray* _searchTerms;
	HLPHelpLocale* _locale;
	HLPHelpBookController* _helpBookController;
	HLPHelpUsageController* _usageController;
	NSMutableArray* _openSections;
	NSMutableArray* _displayHelpItems;
	UISearchController* _searchController;
	UIView* _tableFooterView;
	HLPHelpSearchIndexController* _helpSearchIndexController;
	HLPHelpSearchResultTableViewController* _searchResultTableViewController;

}

@property (nonatomic,retain) NSMutableArray * openSections;                                                         //@synthesize openSections=_openSections - In the implementation block
@property (nonatomic,retain) NSMutableArray * displayHelpItems;                                                     //@synthesize displayHelpItems=_displayHelpItems - In the implementation block
@property (nonatomic,retain) UISearchController * searchController;                                                 //@synthesize searchController=_searchController - In the implementation block
@property (nonatomic,retain) UIView * tableFooterView;                                                              //@synthesize tableFooterView=_tableFooterView - In the implementation block
@property (nonatomic,retain) HLPHelpSearchIndexController * helpSearchIndexController;                              //@synthesize helpSearchIndexController=_helpSearchIndexController - In the implementation block
@property (nonatomic,retain) HLPHelpSearchResultTableViewController * searchResultTableViewController;              //@synthesize searchResultTableViewController=_searchResultTableViewController - In the implementation block
@property (assign,nonatomic) BOOL fullBookView;                                                                     //@synthesize fullBookView=_fullBookView - In the implementation block
@property (assign,nonatomic,__weak) id<HLPHelpTableOfContentViewControllerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * searchTerms;                                                                 //@synthesize searchTerms=_searchTerms - In the implementation block
@property (nonatomic,retain) HLPHelpLocale * locale;                                                                //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) HLPHelpBookController * helpBookController;                                            //@synthesize helpBookController=_helpBookController - In the implementation block
@property (nonatomic,retain) HLPHelpUsageController * usageController;                                              //@synthesize usageController=_usageController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<HLPHelpTableOfContentViewControllerDelegate>)delegate;
-(void)setDelegate:(id<HLPHelpTableOfContentViewControllerDelegate>)arg1 ;
-(void)setLocale:(HLPHelpLocale *)arg1 ;
-(HLPHelpLocale *)locale;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(UISearchController *)searchController;
-(void)setSearchController:(UISearchController *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setTableFooterView:(UIView *)arg1 ;
-(UIView *)tableFooterView;
-(void)willPresentSearchController:(id)arg1 ;
-(void)willDismissSearchController:(id)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)loadError;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(NSArray *)searchTerms;
-(void)setSearchTerms:(NSArray *)arg1 ;
-(void)cancelSpotlightSearchDelay;
-(void)updateFooterViewBackgroundColor;
-(void)scrollToHelpItem:(id)arg1 deselectImmediately:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)deselectCurrentRow;
-(void)updateFooterViewLayout;
-(void)updateSearchResultViewSeparatorValue;
-(void)setHelpBookController:(HLPHelpBookController *)arg1 ;
-(void)copyrightButtonTapped;
-(void)showHelpBookInfo;
-(void)openHelpItem:(id)arg1 animated:(BOOL)arg2 ;
-(NSMutableArray *)displayHelpItems;
-(void)showTopicItem:(id)arg1 fromTableView:(id)arg2 ;
-(void)appendChildrenForSectionItem:(id)arg1 ;
-(HLPHelpSearchIndexController *)helpSearchIndexController;
-(NSMutableArray *)openSections;
-(void)updateCellSelectionWithScollPosition:(long long)arg1 helpItem:(id)arg2 animated:(BOOL)arg3 ;
-(void)closeSectionItem:(id)arg1 ;
-(long long)numberOfVisibleHelpItemForSectionItem:(id)arg1 ;
-(void)spotlightSearchDelay;
-(HLPHelpSearchResultTableViewController *)searchResultTableViewController;
-(void)updateWithHelpBookController:(id)arg1 ;
-(BOOL)fullBookView;
-(void)setFullBookView:(BOOL)arg1 ;
-(HLPHelpBookController *)helpBookController;
-(HLPHelpUsageController *)usageController;
-(void)setUsageController:(HLPHelpUsageController *)arg1 ;
-(void)setOpenSections:(NSMutableArray *)arg1 ;
-(void)setDisplayHelpItems:(NSMutableArray *)arg1 ;
-(void)setHelpSearchIndexController:(HLPHelpSearchIndexController *)arg1 ;
-(void)setSearchResultTableViewController:(HLPHelpSearchResultTableViewController *)arg1 ;
@end

