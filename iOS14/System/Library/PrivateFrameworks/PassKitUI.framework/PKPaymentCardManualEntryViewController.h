/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKPaymentSetupProvisioningFieldsViewController.h>
#import <libobjc.A.dylib/PKPaymentSetupDisambiguationViewControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentSetupBrowseProductsViewControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentCameraCaptureViewControllerDelegate.h>

@class NSArray, NSString;

@interface PKPaymentCardManualEntryViewController : PKPaymentSetupProvisioningFieldsViewController <PKPaymentSetupDisambiguationViewControllerDelegate, PKPaymentSetupBrowseProductsViewControllerDelegate, PKPaymentCameraCaptureViewControllerDelegate> {

	NSArray* _pendingCameraCaptureObjects;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)newPaymentEligibilityRequest;
-(void)_performRequirementsWithCompletion:(/*^block*/id)arg1 ;
-(id)defaultFields;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)readonlyFieldIdentifiers;
-(void)performNextActionForProvisioningState:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)_shouldUseInlineSecondaryProvisioningFlow;
-(void)_captureFromCamera:(id)arg1 ;
-(void)_cameraCaptureCancelButtonPressed:(id)arg1 ;
-(void)_dismissCameraCaptureViewController:(id)arg1 ;
-(void)updateFieldsModelWithCameraCaptureObjects:(id)arg1 ;
-(void)_performSecondaryWithCompletion:(/*^block*/id)arg1 ;
-(void)_performDisambiguationWithCompletion:(/*^block*/id)arg1 ;
-(void)_processPendingCameraCaptureObjects;
-(void)_pushSecondaryPaymentSetupViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)_performInlineSecondaryWithCompletion:(/*^block*/id)arg1 ;
-(void)fieldCellEditableTextFieldValueDidChange:(id)arg1 ;
-(void)cameraCaptureViewControllerDidFail:(id)arg1 ;
-(void)cameraCaptureViewController:(id)arg1 didRecognizeObjects:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)browseProductsViewController:(id)arg1 didSelectProduct:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)defaultHeaderViewTitle;
-(id)defaultHeaderViewSubTitle;
-(id)visibleFieldIdentifiers;
-(void)disambiguationViewController:(id)arg1 didSelectProduct:(id)arg2 ;
-(void)disambiguationViewControllerSetupLater:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

