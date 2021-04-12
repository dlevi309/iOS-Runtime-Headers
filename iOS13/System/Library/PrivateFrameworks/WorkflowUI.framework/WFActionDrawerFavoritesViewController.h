/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFActionDrawerResultsViewController.h>

@class WFActionDrawerResultsController;

@interface WFActionDrawerFavoritesViewController : WFActionDrawerResultsViewController {

	WFActionDrawerResultsController* _actionDrawerResultsController;

}

@property (nonatomic,retain) WFActionDrawerResultsController * actionDrawerResultsController;              //@synthesize actionDrawerResultsController=_actionDrawerResultsController - In the implementation block
-(void)dealloc;
-(id)state;
-(BOOL)moveToState:(id)arg1 animated:(BOOL)arg2 ;
-(WFActionDrawerResultsController *)actionDrawerResultsController;
-(id)initWithTitle:(id)arg1 actionDrawerResultsController:(id)arg2 ;
-(void)updateResults;
-(void)setActionDrawerResultsController:(WFActionDrawerResultsController *)arg1 ;
@end

