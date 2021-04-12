/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)cancelProgress;
-(double)rotationDelay;
-(void)setDonePrinting:(BOOL)arg1 ;
-(void)cleanupAfterDismiss;
-(id)initWithTitle:(id)arg1 message:(id)arg2 printingProgress:(id)arg3 ;
-(void)show;
-(BOOL)visible;
-(unsigned long long)supportedInterfaceOrientations;
-(void)dismissAnimated:(BOOL)arg1 ;
-(void)doneProgress;
@end

