/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WLCardViewDelegate.h>
#import <libobjc.A.dylib/PKPassDeleteHandler.h>
#import <libobjc.A.dylib/PKEditPassesPerformanceTestResponder.h>
#import <libobjc.A.dylib/PKEditPassesDetailsResponder.h>

@class PKGroup, PKPass, PKPassView, UIBarButtonItem, NSString;

@interface PKEditSinglePassViewController : UIViewController <WLCardViewDelegate, PKPassDeleteHandler, PKEditPassesPerformanceTestResponder, PKEditPassesDetailsResponder> {

	PKGroup* _group;
	PKPass* _pass;
	PKPassView* _passView;
	UIBarButtonItem* _deleteBarButton;
	UIBarButtonItem* _flexibleSpace;
	UIBarButtonItem* _infoButton;
	long long _performanceTest;
	NSString* _performanceTestName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)group;
-(void)viewWillLayoutSubviews;
-(BOOL)handleDeletePassRequestWithPass:(id)arg1 forViewController:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_doneButtonPressed;
-(id)pass;
-(id)_barcodePassDetailsViewControllerForBarcodePass:(id)arg1 ;
-(id)_paymentPassDetailsViewControllerForPaymentPass:(id)arg1 ;
-(void)_deletePassPressed;
-(void)_moreButtonPressed;
-(void)passViewSetup;
-(void)enableDeleteButton;
-(void)_deletePassConfirmed;
-(void)disableDeleteButton;
-(void)_didPresentDetailViewController;
-(void)setPerformanceTest:(long long)arg1 ;
-(void)setPerformanceTestName:(id)arg1 ;
-(id)initWithGroup:(id)arg1 pass:(id)arg2 ;
-(void)passWasUpdated:(id)arg1 ;
@end

