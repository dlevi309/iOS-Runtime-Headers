/*
* Generated on Thursday, January 14, 2021 at 2:29:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/FeedItemPlugins/Safety.healthplugin/Safety
*/

#import <libobjc.A.dylib/HKMedicalIDViewControllerDelegate.h>

@interface Safety.EmergencySOSContactsSpecifierDataSource : NSObject <HKMedicalIDViewControllerDelegate> {

	 healthStore;
	 medicalIDCache;
	 contacts;
	 emergencyContactsSpecifiers;
	 eventHandler;
	 presentationContext;

}
-(void)medicalIDViewControllerDidCancel:(id)arg1 ;
-(void)medicalIDViewControllerDidSave:(id)arg1 ;
-(void)medicalIDViewControllerDidFinish:(id)arg1 ;
-(id)init;
-(void)didSelectEmergencyContacts;
-(void)openEmergencyContactsFooterLink;
-(id)getContactNumberForContactSpecifier:(id)arg1 ;
-(void)medicalIDDidUpdate;
@end

