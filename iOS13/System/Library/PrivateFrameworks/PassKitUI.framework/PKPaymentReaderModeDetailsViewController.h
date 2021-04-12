/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKPaymentSetupProvisioningFieldsViewController.h>

@protocol OS_dispatch_group;
@class NSObject, NSString, PKPaymentSetupProduct;

@interface PKPaymentReaderModeDetailsViewController : PKPaymentSetupProvisioningFieldsViewController {

	BOOL _termsAccepted;
	NSObject*<OS_dispatch_group> _nextScreenGroup;
	NSString* _titleText;
	NSString* _subtitleText;
	PKPaymentSetupProduct* _product;

}

@property (nonatomic,readonly) PKPaymentSetupProduct * product;              //@synthesize product=_product - In the implementation block
+(BOOL)readerModeProvisioningIsSupported;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)footerView;
-(PKPaymentSetupProduct *)product;
-(id)defaultHeaderViewTitle;
-(id)defaultHeaderViewSubTitle;
-(id)visibleFieldIdentifiers;
-(void)handleNextButtonTapped:(id)arg1 ;
-(id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 product:(id)arg4 ;
-(id)defaultFields;
-(void)_prepareForProvisioningViewController;
-(void)_showTerms;
-(void)_registerLocalDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)_pushReaderModeProvisioningWithCompletion:(/*^block*/id)arg1 ;
-(void)_downloadCardArtIfNecessary:(/*^block*/id)arg1 ;
@end

