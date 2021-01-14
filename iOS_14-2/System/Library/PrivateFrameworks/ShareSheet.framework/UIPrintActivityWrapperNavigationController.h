/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPrintInteractionController:(UIPrintInteractionController *)arg1 ;
-(BOOL)presentedPrintInteractionController;
-(void)setPresentedPrintInteractionController:(BOOL)arg1 ;
-(id)initWithPrintInteractionController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewDidLoad;
-(UIPrintInteractionController *)printInteractionController;
@end

