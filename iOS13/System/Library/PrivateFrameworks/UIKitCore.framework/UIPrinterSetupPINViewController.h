/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIViewController.h>

@class PKPrinter, UIPrinterSetupConnectingView, UIPrinterSetupPINView, UIScrollView;

@interface UIPrinterSetupPINViewController : UIViewController {

	PKPrinter* _printer;
	UIPrinterSetupConnectingView* _connectingView;
	UIPrinterSetupPINView* _PINView;
	UIScrollView* _scrollView;

}

@property (nonatomic,retain) PKPrinter * printer;                                        //@synthesize printer=_printer - In the implementation block
@property (nonatomic,retain) UIPrinterSetupConnectingView * connectingView;              //@synthesize connectingView=_connectingView - In the implementation block
@property (nonatomic,retain) UIPrinterSetupPINView * PINView;                            //@synthesize PINView=_PINView - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                  //@synthesize scrollView=_scrollView - In the implementation block
-(void)dealloc;
-(void)connected:(BOOL)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(PKPrinter *)printer;
-(void)setPrinter:(PKPrinter *)arg1 ;
-(id)initWithPrinter:(id)arg1 ;
-(void)setConnectingView:(UIPrinterSetupConnectingView *)arg1 ;
-(UIPrinterSetupConnectingView *)connectingView;
-(void)setPINView:(UIPrinterSetupPINView *)arg1 ;
-(void)connectToPrinter;
-(void)showSetup;
-(void)showFailure;
-(UIPrinterSetupPINView *)PINView;
@end

