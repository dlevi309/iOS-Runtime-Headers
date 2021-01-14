/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKLinkedApplicationObserver.h>
#import <libobjc.A.dylib/ASCLockupViewDelegate.h>

@class PKPaymentSetupProduct, PKLinkedApplication, ASCLockupView, NSString;

@interface PKPaymentSetupGetAppViewController : PKExplanationViewController <PKLinkedApplicationObserver, ASCLockupViewDelegate> {

	PKPaymentSetupProduct* _product;
	PKLinkedApplication* _linkedApplication;
	ASCLockupView* _appStoreView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateAppStoreViewRequest;
-(void)linkedApplicationDidChangeState:(id)arg1 ;
-(id)initWithPaymentProduct:(id)arg1 setupContext:(long long)arg2 ;
-(void)viewDidLoad;
-(id)presentingViewControllerForLockupView:(id)arg1 ;
-(void)lockupViewDidInvalidateIntrinsicContentSize:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

