/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/WFActionDrawerStateRepresentable.h>
#import <libobjc.A.dylib/WFActionDrawerStateConfigurable.h>
#import <libobjc.A.dylib/WFActionDrawerResultsControlling.h>

@class WFActionDrawerCoordinator, WFActionDrawerResults, NSString, UITableView, UILabel, WFActionDrawerState;

@interface WFActionDrawerResultsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, WFActionDrawerStateRepresentable, WFActionDrawerStateConfigurable, WFActionDrawerResultsControlling> {

	WFActionDrawerCoordinator* _coordinator;
	WFActionDrawerResults* _results;
	NSString* _emptyText;
	UITableView* _tableView;
	UILabel* _emptyLabel;

}

@property (assign,nonatomic,__weak) UITableView * tableView;                                //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * emptyLabel;                                   //@synthesize emptyLabel=_emptyLabel - In the implementation block
@property (nonatomic,__weak,readonly) WFActionDrawerCoordinator * coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,readonly) WFActionDrawerResults * results;                             //@synthesize results=_results - In the implementation block
@property (nonatomic,copy) NSString * emptyText;                                            //@synthesize emptyText=_emptyText - In the implementation block
@property (assign,nonatomic) BOOL scrollsToTop; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) WFActionDrawerState * state; 
-(WFActionDrawerResults *)results;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)setScrollsToTop:(BOOL)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(BOOL)scrollsToTop;
-(UITableView *)tableView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollToTop;
-(void)setTableView:(UITableView *)arg1 ;
-(WFActionDrawerState *)state;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(WFActionDrawerCoordinator *)coordinator;
-(BOOL)moveToState:(id)arg1 animated:(BOOL)arg2 ;
-(void)setResults:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithTitle:(id)arg1 coordinator:(id)arg2 ;
-(void)setEmptyText:(NSString *)arg1 ;
-(void)updateEmptyLabelVisibility;
-(NSString *)emptyText;
-(UILabel *)emptyLabel;
-(void)setEmptyLabel:(UILabel *)arg1 ;
@end

