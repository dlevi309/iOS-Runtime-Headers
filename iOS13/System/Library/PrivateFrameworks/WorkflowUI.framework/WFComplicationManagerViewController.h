/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewController.h>

@class WFComplicationManagerResultsController;

@interface WFComplicationManagerViewController : UITableViewController {

	WFComplicationManagerResultsController* _resultsController;

}

@property (nonatomic,readonly) WFComplicationManagerResultsController * resultsController;              //@synthesize resultsController=_resultsController - In the implementation block
-(id)init;
-(void)loadView;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(WFComplicationManagerResultsController *)resultsController;
@end

