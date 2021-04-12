/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFActionDrawerCompositeResultsViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/WFActionDrawerSiriSuggestionsTableViewCellDelegate.h>
#import <libobjc.A.dylib/WFActionDrawerActionTableViewCellDelegate.h>
#import <libobjc.A.dylib/WFActionDrawerStateRepresentable.h>
#import <libobjc.A.dylib/WFActionDrawerStateConfigurable.h>

@protocol WFActionDrawerAppsDetailViewControllerDelegate;
@class NSString, WFActionDrawerState;

@interface WFActionDrawerAppsDetailViewController : WFActionDrawerCompositeResultsViewController <UITableViewDataSource, UITableViewDelegate, WFActionDrawerSiriSuggestionsTableViewCellDelegate, WFActionDrawerActionTableViewCellDelegate, WFActionDrawerStateRepresentable, WFActionDrawerStateConfigurable> {

	BOOL _loading;
	id<WFActionDrawerAppsDetailViewControllerDelegate> _delegate;
	NSString* _bundleIdentifier;

}

@property (nonatomic,readonly) NSString * bundleIdentifier;                                                   //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL loading;                                                                    //@synthesize loading=_loading - In the implementation block
@property (assign,nonatomic,__weak) id<WFActionDrawerAppsDetailViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) WFActionDrawerState * state; 
-(id<WFActionDrawerAppsDetailViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFActionDrawerAppsDetailViewControllerDelegate>)arg1 ;
-(NSString *)bundleIdentifier;
-(WFActionDrawerState *)state;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)loading;
-(void)setLoading:(BOOL)arg1 ;
-(BOOL)moveToState:(id)arg1 animated:(BOOL)arg2 ;
-(void)actionCell:(id)arg1 infoButtonTappedForAction:(id)arg2 ;
-(void)siriSuggestionsTableViewCell:(id)arg1 didSelectAction:(id)arg2 ;
-(void)siriSuggestionsTableViewCell:(id)arg1 infoButtonTappedForSuggestion:(id)arg2 ;
-(void)reloadViews;
-(unsigned long long)detailSectionForSection:(long long)arg1 ;
-(long long)detailSectionIndexForIndexPath:(long long)arg1 ;
@end

