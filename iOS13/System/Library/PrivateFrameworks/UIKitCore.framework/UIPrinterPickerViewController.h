/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIPrinterBrowserOwner.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class UIViewController, UIPrinterPickerController, UINavigationController, UIPrinterBrowserViewController, UIPopoverController, UIWindow, PKPrinter, NSString;

@interface UIPrinterPickerViewController : UIViewController <UIPrinterBrowserOwner, UINavigationControllerDelegate> {

	UIViewController* _parentController;
	UIPrinterPickerController* _printerPickerController;
	UINavigationController* _navigationController;
	UIPrinterBrowserViewController* _printerBrowserViewController;
	UIViewController* _originalViewControllerInNav;
	id _originalNavControllerDelegate;
	UIPopoverController* _poverController;
	UIWindow* _window;
	BOOL _dismissed;
	BOOL _animated;
	BOOL _observingRotation;
	BOOL _parentHasNoPopover;
	BOOL _userSelectedPrinter;
	PKPrinter* _printer;

}

@property (nonatomic,retain) PKPrinter * printer;                   //@synthesize printer=_printer - In the implementation block
@property (assign) BOOL userSelectedPrinter;                        //@synthesize userSelectedPrinter=_userSelectedPrinter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)cancelPrinting;
-(PKPrinter *)printer;
-(void)setPrinter:(PKPrinter *)arg1 ;
-(void)printerBrowserViewDidDisappear;
-(void)_keyWindowWillRotate:(id)arg1 ;
-(void)_presentInParentAnimated:(BOOL)arg1 ;
-(BOOL)filtersPrinters;
-(void)setUserSelectedPrinter:(BOOL)arg1 ;
-(BOOL)shouldShowPrinter:(id)arg1 ;
-(void)_presentWindow;
-(void)dismissPrinterPickerAnimated:(BOOL)arg1 ;
-(id)initWithPrinterPickerController:(id)arg1 inParentController:(id)arg2 ;
-(void)presentPrinterPickerPanelAnimated:(BOOL)arg1 ;
-(void)presentPrinterPickerPanelFromRect:(CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3 ;
-(void)presentPrinterPickerPanelFromBarButtonItem:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)userSelectedPrinter;
@end

