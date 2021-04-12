/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIViewController.h>

@class PKPrinter;

@interface UIPrinterSetupDisplayPINViewController : UIViewController {

	PKPrinter* _printer;

}

@property (nonatomic,retain) PKPrinter * printer;              //@synthesize printer=_printer - In the implementation block
-(void)loadView;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(PKPrinter *)printer;
-(void)setPrinter:(PKPrinter *)arg1 ;
-(id)initWithPrinter:(id)arg1 ;
-(void)enterPIN;
-(void)showDisplayMessage:(long long)arg1 ;
@end

