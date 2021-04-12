/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UITableViewController.h>

@class UIPrintingProgress, UIPrintingMessageView, UINavigationController, UIWindow;

@interface UIPrintingProgressViewController : UITableViewController {

	UIPrintingProgress* _printingProgress;
	UIPrintingMessageView* _messageView;
	UINavigationController* _navController;
	UIWindow* _window;
	double _rotationDelay;

}
-(void)setMessage:(id)arg1 ;
-(BOOL)visible;
-(void)dismissAnimated:(BOOL)arg1 ;
-(void)show;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)setDonePrinting:(BOOL)arg1 ;
-(void)doneProgress;
-(void)cancelProgress;
-(void)cleanupAfterDismiss;
-(id)initWithTitle:(id)arg1 message:(id)arg2 printingProgress:(id)arg3 ;
-(double)rotationDelay;
@end

