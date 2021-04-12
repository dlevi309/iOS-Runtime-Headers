/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WFActionDrawerResultsControlling.h>

@class WFActionDrawerResults, NSArray, UITableView, NSString;

@interface WFActionDrawerCompositeResultsViewController : UIViewController <WFActionDrawerResultsControlling> {

	WFActionDrawerResults* _results;
	NSArray* _suggestionSections;
	NSArray* _actionSections;
	NSArray* _appSections;
	NSArray* _userActivitySections;
	UITableView* _tableView;

}

@property (nonatomic,readonly) WFActionDrawerResults * results;              //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) NSArray * suggestionSections;                 //@synthesize suggestionSections=_suggestionSections - In the implementation block
@property (nonatomic,readonly) NSArray * actionSections;                     //@synthesize actionSections=_actionSections - In the implementation block
@property (nonatomic,readonly) NSArray * appSections;                        //@synthesize appSections=_appSections - In the implementation block
@property (nonatomic,readonly) NSArray * userActivitySections;               //@synthesize userActivitySections=_userActivitySections - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                        //@synthesize tableView=_tableView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WFActionDrawerResults *)results;
-(UITableView *)tableView;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)setTableView:(UITableView *)arg1 ;
-(NSArray *)appSections;
-(void)reloadViews;
-(void)setResults:(id)arg1 animated:(BOOL)arg2 ;
-(id)categorizeResults:(id)arg1 ;
-(id)convertDonationsToActionsForSections:(id)arg1 ;
-(NSArray *)suggestionSections;
-(NSArray *)actionSections;
-(NSArray *)userActivitySections;
@end

