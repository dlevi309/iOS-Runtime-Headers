/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKOrganDonationBaseViewController.h>

@class HKOrganDonationConnectionManager, HKOrganDonationRegistrant;

@interface HKOrganDonationConfirmUpdateViewController : HKOrganDonationBaseViewController {

	HKOrganDonationConnectionManager* _connectionManager;
	HKOrganDonationRegistrant* _registrant;

}
-(id)titleString;
-(id)titleImage;
-(id)bodyString;
-(id)bottomAnchoredButtons;
-(void)buttonAtIndexTapped:(long long)arg1 ;
-(void)updateButtonTapped:(id)arg1 ;
-(id)initWithRegistrant:(id)arg1 medicalIDData:(id)arg2 connectionManager:(id)arg3 ;
@end

