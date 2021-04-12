/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)connected:(BOOL)arg1 ;
-(id)initWithPrinter:(id)arg1 ;
-(PKPrinter *)printer;
-(UIPrinterSetupPINView *)PINView;
-(void)showSetup;
-(void)setConnectingView:(UIPrinterSetupConnectingView *)arg1 ;
-(UIPrinterSetupConnectingView *)connectingView;
-(void)connectToPrinter;
-(void)viewWillAppear:(BOOL)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)loadView;
-(void)setPrinter:(PKPrinter *)arg1 ;
-(void)setPINView:(UIPrinterSetupPINView *)arg1 ;
-(void)showFailure;
-(UIScrollView *)scrollView;
-(void)dealloc;
@end

