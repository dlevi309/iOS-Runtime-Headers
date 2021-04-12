/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFActionDrawerCompositeResultsViewController.h>
#import <libobjc.A.dylib/WFActionDrawerSiriSuggestionsTableViewCellDelegate.h>
#import <libobjc.A.dylib/WFActionDrawerAppsTableViewCellDelegate.h>
#import <libobjc.A.dylib/WFActionDrawerActionTableViewCellDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/WFActionDrawerStateRepresentable.h>
#import <libobjc.A.dylib/WFActionDrawerStateConfigurable.h>

@protocol WFActionDrawerSearchResultsViewControllerDelegate;
@class NSArray, NSString, WFActionDrawerState;

@interface WFActionDrawerSearchResultsViewController : WFActionDrawerCompositeResultsViewController <WFActionDrawerSiriSuggestionsTableViewCellDelegate, WFActionDrawerAppsTableViewCellDelegate, WFActionDrawerActionTableViewCellDelegate, UITableViewDelegate, UITableViewDataSource, WFActionDrawerStateRepresentable, WFActionDrawerStateConfigurable> {

	id<WFActionDrawerSearchResultsViewControllerDelegate> _delegate;
	NSArray* _combinedActionActivitySections;

}

@property (nonatomic,retain) NSArray * combinedActionActivitySections;                                           //@synthesize combinedActionActivitySections=_combinedActionActivitySections - In the implementation block
@property (assign,nonatomic,__weak) id<WFActionDrawerSearchResultsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) WFActionDrawerState * state; 
-(id<WFActionDrawerSearchResultsViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFActionDrawerSearchResultsViewControllerDelegate>)arg1 ;
-(WFActionDrawerState *)state;
-(void)loadView;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)moveToState:(id)arg1 animated:(BOOL)arg2 ;
-(void)actionCell:(id)arg1 infoButtonTappedForAction:(id)arg2 ;
-(void)siriSuggestionsTableViewCell:(id)arg1 didSelectAction:(id)arg2 ;
-(void)siriSuggestionsTableViewCell:(id)arg1 infoButtonTappedForSuggestion:(id)arg2 ;
-(void)reloadViews;
-(void)appsTableViewCell:(id)arg1 didSelectAppWithBundleIdentifier:(id)arg2 ;
-(NSArray *)combinedActionActivitySections;
-(void)setCombinedActionActivitySections:(NSArray *)arg1 ;
@end

