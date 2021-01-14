/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFActionDrawerCompositeResultsViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/WFActionDrawerStateRepresentable.h>
#import <libobjc.A.dylib/WFActionDrawerStateConfigurable.h>

@class NSArray, NSString, WFActionDrawerState;

@interface WFActionDrawerSearchResultsViewController : WFActionDrawerCompositeResultsViewController <UITableViewDelegate, UITableViewDataSource, WFActionDrawerStateRepresentable, WFActionDrawerStateConfigurable> {

	NSArray* _combinedActionActivitySections;

}

@property (nonatomic,retain) NSArray * combinedActionActivitySections;              //@synthesize combinedActionActivitySections=_combinedActionActivitySections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) WFActionDrawerState * state; 
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(WFActionDrawerState *)state;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)reloadViews;
-(BOOL)moveToState:(id)arg1 animated:(BOOL)arg2 ;
-(NSArray *)combinedActionActivitySections;
-(void)setCombinedActionActivitySections:(NSArray *)arg1 ;
@end

