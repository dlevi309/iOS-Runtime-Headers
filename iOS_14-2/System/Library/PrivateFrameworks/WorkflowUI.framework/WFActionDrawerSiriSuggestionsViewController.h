/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFActionDrawerCompositeResultsViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/WFActionDrawerStateRepresentable.h>
#import <libobjc.A.dylib/WFActionDrawerStateConfigurable.h>

@protocol NSObject;
@class WFActionDrawerState, WFActionDrawerCategoriesMetrics, NSArray, NSString;

@interface WFActionDrawerSiriSuggestionsViewController : WFActionDrawerCompositeResultsViewController <UITableViewDelegate, UITableViewDataSource, WFActionDrawerStateRepresentable, WFActionDrawerStateConfigurable> {

	BOOL _shouldDisplayCategoriesVertically;
	id<NSObject> _actionRegistryFilledNotificationObserver;
	WFActionDrawerCategoriesMetrics* _categoriesMetrics;

}

@property (nonatomic,readonly) NSArray * contentTypeCategories; 
@property (nonatomic,retain) id<NSObject> actionRegistryFilledNotificationObserver;              //@synthesize actionRegistryFilledNotificationObserver=_actionRegistryFilledNotificationObserver - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayCategoriesVertically;                             //@synthesize shouldDisplayCategoriesVertically=_shouldDisplayCategoriesVertically - In the implementation block
@property (nonatomic,retain) WFActionDrawerCategoriesMetrics * categoriesMetrics;                //@synthesize categoriesMetrics=_categoriesMetrics - In the implementation block
@property (assign,nonatomic) BOOL scrollsToTop; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) WFActionDrawerState * state; 
-(void)viewWillLayoutSubviews;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)setScrollsToTop:(BOOL)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(BOOL)scrollsToTop;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)scrollToTop;
-(void)viewDidLoad;
-(WFActionDrawerState *)state;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
-(void)reloadViews;
-(BOOL)moveToState:(id)arg1 animated:(BOOL)arg2 ;
-(NSArray *)contentTypeCategories;
-(void)setShouldDisplayCategoriesVertically:(BOOL)arg1 ;
-(void)reloadCategoriesSection;
-(id<NSObject>)actionRegistryFilledNotificationObserver;
-(void)setActionRegistryFilledNotificationObserver:(id<NSObject>)arg1 ;
-(BOOL)shouldDisplayCategoriesVertically;
-(WFActionDrawerCategoriesMetrics *)categoriesMetrics;
-(void)setCategoriesMetrics:(WFActionDrawerCategoriesMetrics *)arg1 ;
@end

