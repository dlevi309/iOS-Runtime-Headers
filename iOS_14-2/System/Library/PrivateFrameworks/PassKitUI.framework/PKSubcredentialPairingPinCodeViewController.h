/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PKPinCodeFieldDelegate.h>
#import <libobjc.A.dylib/PKExplanationViewDelegate.h>
#import <libobjc.A.dylib/PKSubcredentialPairingFlowControllerOperation.h>

@protocol PKSubcredentialPairingFlowControllerProtocol;
@class PKExplanationView, PKPinCodeField, UILabel, UIBarButtonItem, PKSubcredentialPairingFlowControllerContext, NSString;

@interface PKSubcredentialPairingPinCodeViewController : UIViewController <PKPinCodeFieldDelegate, PKExplanationViewDelegate, PKSubcredentialPairingFlowControllerOperation> {

	PKExplanationView* _explainationView;
	PKPinCodeField* _pinCodeView;
	UILabel* _helpLabel;
	CGSize _keyboardSize;
	UIBarButtonItem* _nextButton;
	BOOL _isAdvancing;
	PKSubcredentialPairingFlowControllerContext* _provisioningContext;
	id<PKSubcredentialPairingFlowControllerProtocol> _flowController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) PKSubcredentialPairingFlowControllerContext * provisioningContext;              //@synthesize provisioningContext=_provisioningContext - In the implementation block
@property (nonatomic,readonly) id<PKSubcredentialPairingFlowControllerProtocol> flowController;              //@synthesize flowController=_flowController - In the implementation block
@property (nonatomic,readonly) unsigned long long operation; 
@property (nonatomic,readonly) BOOL suppressFieldDetect; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(unsigned long long)operation;
-(id)initWithFlowController:(id)arg1 context:(id)arg2 ;
-(PKSubcredentialPairingFlowControllerContext *)provisioningContext;
-(void)setProvisioningContext:(PKSubcredentialPairingFlowControllerContext *)arg1 ;
-(void)cancelButtonPressed;
-(void)nextButtonPressed;
-(id)localizedIssuerName;
-(void)pinCodeTextFieldWasUpdated:(id)arg1 isComplete:(BOOL)arg2 ;
-(void)resetPinCode;
-(void)viewDidLoad;
-(BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
-(void)explanationViewDidUpdateLayout:(id)arg1 ;
-(id<PKSubcredentialPairingFlowControllerProtocol>)flowController;
-(BOOL)suppressFieldDetect;
@end

