/*
* Generated on Monday, March 1, 2021 at 2:35:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/FeedItemPlugins/MedicalID.healthplugin/MedicalID
*/

#import <HealthExperienceUI/HealthExperienceUI.SuggestedActionTileViewController.h>
#import <libobjc.A.dylib/HKMedicalIDViewControllerDelegate.h>

@interface MedicalID.MedicalIDTileViewController : HealthExperienceUI.SuggestedActionTileViewController <HKMedicalIDViewControllerDelegate> {

	 context;
	 showsSeparator;

}
-(void)medicalIDViewControllerDidCancel:(id)arg1 ;
-(void)medicalIDViewControllerDidSave:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)didTapAction:(id)arg1 ;
@end

