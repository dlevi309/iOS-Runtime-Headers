/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(PKPrinter *)printer;
-(void)_presentWindow;
-(void)dismissPrinterPickerAnimated:(BOOL)arg1 ;
-(id)initWithPrinterPickerController:(id)arg1 inParentController:(id)arg2 ;
-(void)presentPrinterPickerPanelAnimated:(BOOL)arg1 hostingScene:(id)arg2 ;
-(BOOL)userSelectedPrinter;
-(void)presentPrinterPickerPanelFromRect:(CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3 ;
-(void)presentPrinterPickerPanelFromBarButtonItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)setPrinter:(PKPrinter *)arg1 ;
-(void)cancelPrinting;
-(void)dismissAnimated:(BOOL)arg1 ;
-(void)_keyWindowWillRotate:(id)arg1 ;
-(void)_presentInParentAnimated:(BOOL)arg1 ;
-(BOOL)filtersPrinters;
-(void)printerBrowserViewDidDisappear;
-(void)setUserSelectedPrinter:(BOOL)arg1 ;
-(BOOL)shouldShowPrinter:(id)arg1 ;
-(void)dealloc;
@end

