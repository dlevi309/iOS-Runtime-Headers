/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <UIKitCore/UINavigationController.h>
#import <UIKit/UIPrintInteractionControllerDelegate.h>

@class UIPrintInteractionController, NSString;

@interface UIPrintActivityWrapperNavigationController : UINavigationController <UIPrintInteractionControllerDelegate> {

	/*^block*/id _completionHandler;
	BOOL _presentedPrintInteractionController;
	UIPrintInteractionController* _printInteractionController;

}

@property (assign,nonatomic) BOOL presentedPrintInteractionController;                               //@synthesize presentedPrintInteractionController=_presentedPrintInteractionController - In the implementation block
@property (nonatomic,retain) UIPrintInteractionController * printInteractionController;              //@synthesize printInteractionController=_printInteractionController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(UIPrintInteractionController *)printInteractionController;
-(void)setPrintInteractionController:(UIPrintInteractionController *)arg1 ;
-(BOOL)presentedPrintInteractionController;
-(void)setPresentedPrintInteractionController:(BOOL)arg1 ;
-(id)initWithPrintInteractionController:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

