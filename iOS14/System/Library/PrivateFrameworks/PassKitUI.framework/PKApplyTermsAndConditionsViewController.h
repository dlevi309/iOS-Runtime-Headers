/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKFeatureTermsAndConditionsViewController.h>
#import <libobjc.A.dylib/PKViewControllerPreflightable.h>

@class PKApplyController, NSString, CLInUseAssertion;

@interface PKApplyTermsAndConditionsViewController : PKFeatureTermsAndConditionsViewController <PKViewControllerPreflightable> {

	PKApplyController* _applyController;
	NSString* _termsIdentifier;
	CLInUseAssertion* _inUseAssertion;
	BOOL _preflightPDFTerms;

}

@property (assign,nonatomic) BOOL preflightPDFTerms;                //@synthesize preflightPDFTerms=_preflightPDFTerms - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)displayTitle;
-(void)htmlTermsDataWithCompletion:(/*^block*/id)arg1 ;
-(void)initalTermsDataWithCompletion:(/*^block*/id)arg1 ;
-(void)termsShown;
-(void)pdfTermsDataWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)termsAccepted:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentErrorAlert;
-(id)initWithController:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 termsIdentifier:(id)arg4 ;
-(void)setPreflightPDFTerms:(BOOL)arg1 ;
-(BOOL)preflightPDFTerms;
-(void)_terminateSetupFlow;
-(void)dealloc;
@end

