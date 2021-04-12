/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WFActionDrawerResultsControlling.h>

@class WFActionDrawerCoordinator, WFActionDrawerResults, NSArray, UITableView, NSString;

@interface WFActionDrawerCompositeResultsViewController : UIViewController <WFActionDrawerResultsControlling> {

	WFActionDrawerCoordinator* _coordinator;
	WFActionDrawerResults* _results;
	NSArray* _suggestionSections;
	NSArray* _actionSections;
	NSArray* _appSections;
	NSArray* _userActivitySections;
	UITableView* _tableView;

}

@property (nonatomic,__weak,readonly) WFActionDrawerCoordinator * coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,readonly) WFActionDrawerResults * results;                             //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) NSArray * suggestionSections;                                //@synthesize suggestionSections=_suggestionSections - In the implementation block
@property (nonatomic,readonly) NSArray * actionSections;                                    //@synthesize actionSections=_actionSections - In the implementation block
@property (nonatomic,readonly) NSArray * appSections;                                       //@synthesize appSections=_appSections - In the implementation block
@property (nonatomic,readonly) NSArray * userActivitySections;                              //@synthesize userActivitySections=_userActivitySections - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                       //@synthesize tableView=_tableView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WFActionDrawerResults *)results;
-(UITableView *)tableView;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(id)initWithCoordinator:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(WFActionDrawerCoordinator *)coordinator;
-(void)reloadViews;
-(NSArray *)appSections;
-(void)setResults:(id)arg1 animated:(BOOL)arg2 ;
-(id)categorizeResults:(id)arg1 ;
-(id)convertDonationsToActionsForSections:(id)arg1 ;
-(NSArray *)suggestionSections;
-(NSArray *)actionSections;
-(NSArray *)userActivitySections;
@end

