/*
* Generated on Thursday, January 14, 2021 at 2:24:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKOrganDonationBaseViewController.h>

@class HKOrganDonationConnectionManager, HKOrganDonationRegistrant;

@interface HKOrganDonationConfirmUpdateViewController : HKOrganDonationBaseViewController {

	HKOrganDonationConnectionManager* _connectionManager;
	HKOrganDonationRegistrant* _registrant;

}
-(id)titleImage;
-(id)bodyString;
-(void)updateButtonTapped:(id)arg1 ;
-(id)bottomAnchoredButtons;
-(void)buttonAtIndexTapped:(long long)arg1 ;
-(id)titleString;
-(id)initWithRegistrant:(id)arg1 medicalIDData:(id)arg2 connectionManager:(id)arg3 ;
@end

