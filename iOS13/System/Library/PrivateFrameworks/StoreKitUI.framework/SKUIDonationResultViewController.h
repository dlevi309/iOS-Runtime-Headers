/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIDonationStepViewController.h>
#import <libobjc.A.dylib/SKUIDonationConfigurationObserver.h>

@class SKUIGiftAmount, SKUIDonationResultView, NSString;

@interface SKUIDonationResultViewController : SKUIDonationStepViewController <SKUIDonationConfigurationObserver> {

	SKUIGiftAmount* _donationAmount;
	SKUIDonationResultView* _resultView;

}

@property (nonatomic,copy) SKUIGiftAmount * donationAmount;              //@synthesize donationAmount=_donationAmount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(void)_doneButtonAction:(id)arg1 ;
-(id)initWithCharity:(id)arg1 configuration:(id)arg2 ;
-(void)setDonationAmount:(SKUIGiftAmount *)arg1 ;
-(void)donationConfigurationController:(id)arg1 didLoadLogoForCharity:(id)arg2 ;
-(SKUIGiftAmount *)donationAmount;
@end

