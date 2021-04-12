/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSKPopoverBasedViewController.h>

@class UIViewController, TSADebugTableViewController;

@interface TSADebugViewController : TSKPopoverBasedViewController {

	UIViewController* _delegate;
	TSADebugTableViewController* _debugTableViewController;

}
-(void)dealloc;
-(id)initWithDelegate:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)hideIt:(id)arg1 ;
-(void)addItemWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(void)showIt:(id)arg1 ;
-(void)toggleVisible:(id)arg1 ;
@end

