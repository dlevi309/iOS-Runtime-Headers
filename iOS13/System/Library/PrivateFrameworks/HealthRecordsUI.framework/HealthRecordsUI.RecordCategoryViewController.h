/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WDMedicalRecordCountProviderObserver.h>

@interface HealthRecordsUI.RecordCategoryViewController : UIViewController <WDMedicalRecordCountProviderObserver> {

	 category;
	 healthRecordsStore;
	 preferredSegment;
	 factory;
	 countProvider;
	 currentViewController;
	 displayMode;
	 isModePickerHidden;
	 $__lazy_storage_$_modePicker;
	 $__lazy_storage_$_navigationPalette;
	 $__lazy_storage_$_lastUpdatedViewController;
	 $__lazy_storage_$_alphabeticalViewController;

}
-(void)medicalRecordCountProvider:(id)arg1 didUpdateCountForSampleTypes:(id)arg2 ;
-(void)medicalRecordCountProvider:(id)arg1 didUpdateCountForCategories:(id)arg2 ;
-(void)medicalRecordCountProviderDidUpdateAllRecordsCount:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)tapToRadar:(id)arg1 ;
-(void)modePickerDidChange:(id)arg1 ;
@end

