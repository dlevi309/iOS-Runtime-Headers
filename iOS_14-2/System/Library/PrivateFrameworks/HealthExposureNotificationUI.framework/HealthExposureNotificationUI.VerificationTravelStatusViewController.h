/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthExposureNotificationUI.framework/HealthExposureNotificationUI
*/

#import <OnBoardingKit/OBTableWelcomeController.h>
#import <UIKit/UITableViewDelegate.h>

@interface HealthExposureNotificationUI.VerificationTravelStatusViewController : OBTableWelcomeController <UITableViewDelegate> {

	 flow;
	 healthAgencyModel;
	 hasTraveled;
	 dataSource;
	 traveledCell;
	 notTraveledCell;
	 primaryButton;
	 secondaryButton;

}
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(void)didTapCancel;
-(void)viewDidLoad;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 ;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 ;
-(void)viewDidLayoutSubviews;
-(void)didTapPrimaryButton;
-(void)didTapSecondaryButton;
@end

