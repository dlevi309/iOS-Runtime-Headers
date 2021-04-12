/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKFeatureTermsAndConditionsViewController.h>

@class PKAccount, PKPaymentWebService, NSString;

@interface PKAccountTermsAndConditionsViewController : PKFeatureTermsAndConditionsViewController {

	PKAccount* _account;
	PKPaymentWebService* _webService;
	NSString* _termsIdentifier;

}
-(id)displayTitle;
-(void)htmlTermsDataWithCompletion:(/*^block*/id)arg1 ;
-(void)_termsDataForIdentifier:(id)arg1 format:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithAccount:(id)arg1 webService:(id)arg2 context:(long long)arg3 termsIdentifier:(id)arg4 ;
-(void)initalTermsDataWithCompletion:(/*^block*/id)arg1 ;
-(void)pdfTermsDataWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)termsShown;
-(void)termsAccepted:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentErrorAlert;
@end

