/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKApplyExplanationViewController.h>

@class CLInUseAssertion, NSString;

@interface PKApplyProgramConsentViewController : PKApplyExplanationViewController {

	CLInUseAssertion* _inUseAssertion;
	NSString* _pathTermsIdentifier;
	NSString* _pathIdentifier;

}
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(void)explanationViewDidSelectBodyButton:(id)arg1 ;
-(id)initWithController:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 applyPage:(id)arg4 ;
-(void)_termsAccepted:(BOOL)arg1 ;
-(void)dealloc;
@end

