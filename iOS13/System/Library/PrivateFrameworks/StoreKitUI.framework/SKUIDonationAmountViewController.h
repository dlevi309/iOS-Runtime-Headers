/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIDonationStepViewController.h>
#import <libobjc.A.dylib/SKUIDonationConfigurationObserver.h>

@class SKUIDonationAmountView, SKUIGiftValidationResponse, SKUIGiftPurchaseRequest, SKUIGiftValidator, NSString;

@interface SKUIDonationAmountViewController : SKUIDonationStepViewController <SKUIDonationConfigurationObserver> {

	SKUIDonationAmountView* _amountView;
	SKUIGiftValidationResponse* _lastValidationResponse;
	SKUIGiftPurchaseRequest* _purchaseRequest;
	BOOL _tappedNextWhileValidating;
	SKUIGiftValidator* _validator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(void)_cancelButtonAction:(id)arg1 ;
-(void)_finishValidationWithResponse:(id)arg1 error:(id)arg2 ;
-(void)_finishPurchaseWithResult:(BOOL)arg1 errorMessage:(id)arg2 ;
-(id)initWithCharity:(id)arg1 configuration:(id)arg2 ;
-(void)_donateButtonAction:(id)arg1 ;
-(void)_amountChangedNotification:(id)arg1 ;
-(void)_validateDonation:(id)arg1 ;
-(void)_performActionAfterValidation;
-(void)_setDonationButtonEnabled:(BOOL)arg1 ;
-(void)_reenableAfterFailure;
-(void)donationConfigurationController:(id)arg1 didLoadLogoForCharity:(id)arg2 ;
@end

