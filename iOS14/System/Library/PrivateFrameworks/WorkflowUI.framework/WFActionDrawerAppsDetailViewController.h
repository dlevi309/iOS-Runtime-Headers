/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFActionDrawerCompositeResultsViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/WFActionDrawerStateRepresentable.h>
#import <libobjc.A.dylib/WFActionDrawerStateConfigurable.h>

@class NSString, WFActionDrawerState;

@interface WFActionDrawerAppsDetailViewController : WFActionDrawerCompositeResultsViewController <UITableViewDataSource, UITableViewDelegate, WFActionDrawerStateRepresentable, WFActionDrawerStateConfigurable> {

	BOOL _loading;
	NSString* _bundleIdentifier;

}

@property (nonatomic,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL loading;                               //@synthesize loading=_loading - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) WFActionDrawerState * state; 
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)setLoading:(BOOL)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(NSString *)bundleIdentifier;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(BOOL)loading;
-(void)viewDidLoad;
-(WFActionDrawerState *)state;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)reloadViews;
-(BOOL)moveToState:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithCoordinator:(id)arg1 bundleIdentifier:(id)arg2 ;
-(unsigned long long)detailSectionForSection:(long long)arg1 ;
-(long long)detailSectionIndexForIndexPath:(long long)arg1 ;
@end

