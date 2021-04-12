/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKTableViewController.h>
#import <libobjc.A.dylib/HKSwitchTableViewCellDelegate.h>
#import <libobjc.A.dylib/HKDocumentPickerViewControllerDelegate.h>
#import <libobjc.A.dylib/HKSourceAuthorizationControllerDelegate.h>
#import <libobjc.A.dylib/HKHealthPrivacyServicePromptController.h>

@protocol HKHealthPrivacyServicePromptControllerDelegate;
@class NSArray, HKHealthStore, HKSource, NSString, NSSet, HKDisplayCategoryController, HKSourceAuthorizationController, UIBarButtonItem;

@interface HKAuthorizationSettingsViewController : HKTableViewController <HKSwitchTableViewCellDelegate, HKDocumentPickerViewControllerDelegate, HKSourceAuthorizationControllerDelegate, HKHealthPrivacyServicePromptController> {

	NSArray* _documents;
	NSArray* _actualSections;
	NSArray* _readingTypeOrdering;
	id<HKHealthPrivacyServicePromptControllerDelegate> _delegate;
	HKHealthStore* _healthStore;
	HKSource* _source;
	long long _style;
	NSString* _updateDescription;
	NSString* _shareDescription;
	NSString* _researchStudyUsageDescription;
	NSSet* _typesToShare;
	NSSet* _typesToRead;
	HKDisplayCategoryController* _displayCategoryController;
	HKSourceAuthorizationController* _sourceAuthorizationController;
	UIBarButtonItem* _cancelButtonItem;
	UIBarButtonItem* _doneButtonItem;

}

@property (nonatomic,retain) HKDisplayCategoryController * displayCategoryController;                         //@synthesize displayCategoryController=_displayCategoryController - In the implementation block
@property (nonatomic,retain) HKSourceAuthorizationController * sourceAuthorizationController;                 //@synthesize sourceAuthorizationController=_sourceAuthorizationController - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * cancelButtonItem;                                              //@synthesize cancelButtonItem=_cancelButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButtonItem;                                                //@synthesize doneButtonItem=_doneButtonItem - In the implementation block
@property (readonly) BOOL isPrompting; 
@property (retain) NSArray * actualSections;                                                                  //@synthesize actualSections=_actualSections - In the implementation block
@property (assign,nonatomic,__weak) id<HKHealthPrivacyServicePromptControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) HKHealthStore * healthStore;                                                   //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) HKSource * source;                                                               //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) long long style;                                                               //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * updateDescription;                                                      //@synthesize updateDescription=_updateDescription - In the implementation block
@property (nonatomic,copy) NSString * shareDescription;                                                       //@synthesize shareDescription=_shareDescription - In the implementation block
@property (nonatomic,copy) NSString * researchStudyUsageDescription;                                          //@synthesize researchStudyUsageDescription=_researchStudyUsageDescription - In the implementation block
@property (nonatomic,retain) NSSet * typesToShare;                                                            //@synthesize typesToShare=_typesToShare - In the implementation block
@property (nonatomic,retain) NSSet * typesToRead;                                                             //@synthesize typesToRead=_typesToRead - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<HKHealthPrivacyServicePromptControllerDelegate>)delegate;
-(void)setDelegate:(id<HKHealthPrivacyServicePromptControllerDelegate>)arg1 ;
-(void)setSource:(HKSource *)arg1 ;
-(HKSource *)source;
-(long long)style;
-(HKHealthStore *)healthStore;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_finishWithError:(id)arg1 ;
-(void)_done:(id)arg1 ;
-(UIBarButtonItem *)cancelButtonItem;
-(void)setCancelButtonItem:(UIBarButtonItem *)arg1 ;
-(void)_addHeaderView;
-(NSString *)updateDescription;
-(void)setResearchStudyUsageDescription:(NSString *)arg1 ;
-(NSString *)researchStudyUsageDescription;
-(void)setDoneButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)doneButtonItem;
-(NSSet *)typesToRead;
-(void)setShareDescription:(NSString *)arg1 ;
-(NSString *)shareDescription;
-(BOOL)shouldPresent;
-(HKDisplayCategoryController *)displayCategoryController;
-(void)switchCellValueChanged:(id)arg1 value:(BOOL)arg2 ;
-(id)initWithHealthStore:(id)arg1 style:(long long)arg2 ;
-(void)reloadAuthorizationSettings;
-(id)sectionsForAuthController:(id)arg1 ;
-(long long)authorizationSectionForSection:(long long)arg1 ;
-(void)setUpdateDescription:(NSString *)arg1 ;
-(void)_addCancelAndDoneButtons;
-(void)documentPickerViewControllerDidFinish:(id)arg1 error:(id)arg2 ;
-(BOOL)isPrompting;
-(void)authorizationController:(id)arg1 parentTypeIsDisabled:(id)arg2 forType:(id)arg3 inSection:(long long)arg4 ;
-(void)authorizationController:(id)arg1 subTypesEnabled:(id)arg2 forType:(id)arg3 inSection:(long long)arg4 ;
-(HKSourceAuthorizationController *)sourceAuthorizationController;
-(void)setActualSections:(NSArray *)arg1 ;
-(id)_localizedSourceExplanationWithDescription:(id)arg1 ;
-(id)_researchStudyExplanationCell;
-(id)_toggleAllCell;
-(id)_authorizationSettingCellForRowAtIndexPath:(id)arg1 ;
-(id)_openAppCell;
-(id)_specialCellWithIdentifier:(id)arg1 ;
-(id)_typeForIndexPath:(id)arg1 section:(long long*)arg2 ;
-(id)_localizedNameForSection:(long long)arg1 type:(id)arg2 ;
-(BOOL)_isTypeEnabledAtIndexPath:(id)arg1 ;
-(void)updateAllowButtonEnabledState;
-(BOOL)_shouldDisplayHealthRecordsRequests;
-(BOOL)_shouldDisplaySharingSection;
-(BOOL)_shouldDisplayReadingSection;
-(void)_configurationFailedWithError:(id)arg1 ;
-(NSSet *)typesToShare;
-(void)setTypesToShare:(NSSet *)arg1 ;
-(void)setTypesToRead:(NSSet *)arg1 ;
-(void)setDisplayCategoryController:(HKDisplayCategoryController *)arg1 ;
-(void)setSourceAuthorizationController:(HKSourceAuthorizationController *)arg1 ;
-(NSArray *)actualSections;
@end

