/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKExplanationViewController.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/PKExplanationViewControllerDelegate.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class NSString, PKEducationPhone, PKWatchDeviceImageOverlayView;

@interface PKBarcodePaymentOnboardingViewController : PKExplanationViewController <UITextViewDelegate, PKExplanationViewControllerDelegate> {

	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	NSString* _issuerName;
	PKEducationPhone* _educationPhone;
	PKWatchDeviceImageOverlayView* _watchView;
	/*^block*/id _continueHandler;

}

@property (nonatomic,copy) id continueHandler;                      //@synthesize continueHandler=_continueHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(id)continueHandler;
-(void)setContinueHandler:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(id)_imageForWatchView;
-(void)_terminateSetupFlow;
-(void)explanationViewControllerDidSelectCancel:(id)arg1 ;
-(void)explanationViewControllerDidSelectDone:(id)arg1 ;
-(id)initWithIssuerName:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 ;
@end

