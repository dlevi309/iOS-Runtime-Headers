/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFActionDrawerCompositeResultsViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/WFActionDrawerSiriSuggestionsTableViewCellDelegate.h>
#import <libobjc.A.dylib/WFActionDrawerCategoriesTableViewCellDelegate.h>
#import <libobjc.A.dylib/WFActionDrawerActionTableViewCellDelegate.h>
#import <libobjc.A.dylib/WFActionDrawerStateRepresentable.h>
#import <libobjc.A.dylib/WFActionDrawerStateConfigurable.h>

@protocol WFActionDrawerSuggestionsViewControllerDelegate, NSObject;
@class WFActionDrawerState, WFActionDrawerResultsController, WFActionDrawerCategoriesMetrics, NSArray, NSString;

@interface WFActionDrawerSiriSuggestionsViewController : WFActionDrawerCompositeResultsViewController <UITableViewDelegate, UITableViewDataSource, WFActionDrawerSiriSuggestionsTableViewCellDelegate, WFActionDrawerCategoriesTableViewCellDelegate, WFActionDrawerActionTableViewCellDelegate, WFActionDrawerStateRepresentable, WFActionDrawerStateConfigurable> {

	BOOL _shouldDisplayCategoriesVertically;
	id<WFActionDrawerSuggestionsViewControllerDelegate> _delegate;
	WFActionDrawerResultsController* _actionDrawerResultsController;
	id<NSObject> _actionRegistryFilledNotificationObserver;
	WFActionDrawerCategoriesMetrics* _categoriesMetrics;

}

@property (nonatomic,readonly) NSArray * contentTypeCategories; 
@property (nonatomic,retain) id<NSObject> actionRegistryFilledNotificationObserver;                            //@synthesize actionRegistryFilledNotificationObserver=_actionRegistryFilledNotificationObserver - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayCategoriesVertically;                                           //@synthesize shouldDisplayCategoriesVertically=_shouldDisplayCategoriesVertically - In the implementation block
@property (nonatomic,retain) WFActionDrawerCategoriesMetrics * categoriesMetrics;                              //@synthesize categoriesMetrics=_categoriesMetrics - In the implementation block
@property (assign,nonatomic,__weak) id<WFActionDrawerSuggestionsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WFActionDrawerResultsController * actionDrawerResultsController;                //@synthesize actionDrawerResultsController=_actionDrawerResultsController - In the implementation block
@property (assign,nonatomic) BOOL scrollsToTop; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) WFActionDrawerState * state; 
-(void)dealloc;
-(id<WFActionDrawerSuggestionsViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFActionDrawerSuggestionsViewControllerDelegate>)arg1 ;
-(WFActionDrawerState *)state;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setScrollsToTop:(BOOL)arg1 ;
-(BOOL)scrollsToTop;
-(void)scrollToTop;
-(BOOL)moveToState:(id)arg1 animated:(BOOL)arg2 ;
-(void)actionCell:(id)arg1 infoButtonTappedForAction:(id)arg2 ;
-(void)categoriesTableViewCellDidSelectCategoryApps:(id)arg1 title:(id)arg2 ;
-(void)categoriesTableViewCellDidSelectCategoryFavorites:(id)arg1 title:(id)arg2 ;
-(void)categoriesTableViewCellDidSelectCategoryScripting:(id)arg1 title:(id)arg2 ;
-(void)categoriesTableViewCell:(id)arg1 didSelectCategoryForContentType:(id)arg2 title:(id)arg3 ;
-(void)siriSuggestionsTableViewCell:(id)arg1 didSelectAction:(id)arg2 ;
-(void)siriSuggestionsTableViewCell:(id)arg1 infoButtonTappedForSuggestion:(id)arg2 ;
-(id)initWithActionDrawerResultsController:(id)arg1 ;
-(NSArray *)contentTypeCategories;
-(void)reloadViews;
-(void)setShouldDisplayCategoriesVertically:(BOOL)arg1 ;
-(void)reloadCategoriesSection;
-(WFActionDrawerResultsController *)actionDrawerResultsController;
-(id<NSObject>)actionRegistryFilledNotificationObserver;
-(void)setActionRegistryFilledNotificationObserver:(id<NSObject>)arg1 ;
-(BOOL)shouldDisplayCategoriesVertically;
-(WFActionDrawerCategoriesMetrics *)categoriesMetrics;
-(void)setCategoriesMetrics:(WFActionDrawerCategoriesMetrics *)arg1 ;
@end

