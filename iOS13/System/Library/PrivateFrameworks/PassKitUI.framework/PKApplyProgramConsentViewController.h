/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKApplyExplanationViewController.h>

@class CLInUseAssertion, NSString;

@interface PKApplyProgramConsentViewController : PKApplyExplanationViewController {

	CLInUseAssertion* _inUseAssertion;
	NSString* _pathTermsIdentifier;
	NSString* _pathIdentifier;

}
-(void)dealloc;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(void)explanationViewDidSelectBodyButton:(id)arg1 ;
-(id)initWithController:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 applyPage:(id)arg4 ;
-(void)_termsAccepted:(BOOL)arg1 ;
@end

