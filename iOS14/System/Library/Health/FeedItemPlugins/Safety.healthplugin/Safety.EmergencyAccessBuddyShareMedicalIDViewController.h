/*
* Generated on Thursday, January 14, 2021 at 2:29:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/FeedItemPlugins/Safety.healthplugin/Safety
*/

#import <OnBoardingKit/OBWelcomeController.h>

@interface Safety.EmergencyAccessBuddyShareMedicalIDViewController : OBWelcomeController {

	 healthStore;
	 medicalIDCache;
	 shareButton;
	 dontShareButton;

}
-(void)viewDidLoad;
-(void)didTapCancel:(id)arg1 ;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4 ;
-(void)didTapLearnMore:(id)arg1 ;
-(void)didTapShare:(id)arg1 ;
-(void)didTapDontShare:(id)arg1 ;
@end

