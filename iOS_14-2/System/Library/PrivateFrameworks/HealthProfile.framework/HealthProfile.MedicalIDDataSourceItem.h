/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthProfile.framework/HealthProfile
*/

#import <libobjc.A.dylib/HKMedicalIDViewControllerDelegate.h>

@interface HealthProfile.MedicalIDDataSourceItem : NSObject <HKMedicalIDViewControllerDelegate> {

	 uniqueIdentifier;
	 text;
	 detailText;
	 showDisclosureIndicator;
	 reuseIdentifier;
	 medicalIDViewController;
	 healthStore;
	 medicalIDCache;
	 presentingViewController;
	 currentMedicalIDDataResultCancellable;

}
-(void)medicalIDViewControllerDidCancel:(id)arg1 ;
-(void)medicalIDViewControllerDidSave:(id)arg1 ;
-(void)medicalIDViewControllerDidDelete:(id)arg1 ;
-(id)init;
-(void)medicalIDUpdatedWithNotification:(id)arg1 ;
@end

