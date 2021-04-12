/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIViewController.h>

@class PKPrinter;

@interface UIPrinterSetupDisplayPINViewController : UIViewController {

	PKPrinter* _printer;

}

@property (nonatomic,retain) PKPrinter * printer;              //@synthesize printer=_printer - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(id)initWithPrinter:(id)arg1 ;
-(PKPrinter *)printer;
-(void)enterPIN;
-(void)showDisplayMessage:(long long)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)setPrinter:(PKPrinter *)arg1 ;
@end

