/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/WFActionDrawerActionTableViewCellDelegate.h>
#import <libobjc.A.dylib/WFActionDrawerStateRepresentable.h>
#import <libobjc.A.dylib/WFActionDrawerStateConfigurable.h>
#import <libobjc.A.dylib/WFActionDrawerResultsControlling.h>

@protocol WFActionDrawerResultsViewControllerDelegate;
@class WFActionDrawerResults, NSString, UITableView, UILabel, WFActionDrawerState;

@interface WFActionDrawerResultsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, WFActionDrawerActionTableViewCellDelegate, WFActionDrawerStateRepresentable, WFActionDrawerStateConfigurable, WFActionDrawerResultsControlling> {

	id<WFActionDrawerResultsViewControllerDelegate> _delegate;
	WFActionDrawerResults* _results;
	NSString* _emptyText;
	UITableView* _tableView;
	UILabel* _emptyLabel;

}

@property (assign,nonatomic,__weak) UITableView * tableView;                                               //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * emptyLabel;                                                  //@synthesize emptyLabel=_emptyLabel - In the implementation block
@property (assign,nonatomic,__weak) id<WFActionDrawerResultsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WFActionDrawerResults * results;                                            //@synthesize results=_results - In the implementation block
@property (nonatomic,copy) NSString * emptyText;                                                           //@synthesize emptyText=_emptyText - In the implementation block
@property (assign,nonatomic) BOOL scrollsToTop; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) WFActionDrawerState * state; 
-(id<WFActionDrawerResultsViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFActionDrawerResultsViewControllerDelegate>)arg1 ;
-(WFActionDrawerResults *)results;
-(WFActionDrawerState *)state;
-(void)loadView;
-(UITableView *)tableView;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithTitle:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setScrollsToTop:(BOOL)arg1 ;
-(BOOL)scrollsToTop;
-(void)scrollToTop;
-(BOOL)moveToState:(id)arg1 animated:(BOOL)arg2 ;
-(void)actionCell:(id)arg1 infoButtonTappedForAction:(id)arg2 ;
-(void)setResults:(id)arg1 animated:(BOOL)arg2 ;
-(void)setEmptyText:(NSString *)arg1 ;
-(void)updateEmptyLabelVisibility;
-(NSString *)emptyText;
-(UILabel *)emptyLabel;
-(void)setEmptyLabel:(UILabel *)arg1 ;
@end

