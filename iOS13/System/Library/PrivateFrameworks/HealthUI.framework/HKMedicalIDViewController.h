/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/HKMedicalIDViewControllerDelegate.h>
#import <libobjc.A.dylib/HKEmergencyCardDeletionDelegate.h>
#import <libobjc.A.dylib/HKEmergencyCardRowHeightChangeDelegate.h>
#import <libobjc.A.dylib/HKEmergencyCardContactUpdateDelegate.h>

@protocol HKMedicalIDViewControllerDelegate;
@class NSArray, HKEmergencyCardGroupTableItem, HKEmergencyCardNameAndPictureTableItem, HKEmergencyCardContactsTableItem, HKNavigationController, _HKMedicalIDData, HKHealthStore, NSString;

@interface HKMedicalIDViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate, HKMedicalIDViewControllerDelegate, HKEmergencyCardDeletionDelegate, HKEmergencyCardRowHeightChangeDelegate, HKEmergencyCardContactUpdateDelegate> {

	NSArray* _presentableTableItems;
	NSArray* _footers;
	HKEmergencyCardGroupTableItem* _groupItem;
	HKEmergencyCardNameAndPictureTableItem* _nameAndPictureItem;
	HKEmergencyCardContactsTableItem* _contactsItem;
	long long _tableViewStyle;
	BOOL _inBuddy;
	NSArray* _localeItems;
	NSArray* _accumulatedNumberOfRowsForItems;
	int _medicalIDChangedToken;
	HKNavigationController* _medicalIDEditor;
	NSArray* _organDonationItems;
	BOOL _organDonationSignupAvailable;
	BOOL _allowsEditing;
	BOOL _showsDismissButton;
	BOOL _showsDeleteButton;
	BOOL _modernAppearance;
	BOOL _shouldShowHints;
	BOOL _inEditMode;
	_HKMedicalIDData* _medicalID;
	HKHealthStore* _healthStore;
	id<HKMedicalIDViewControllerDelegate> _delegate;
	NSArray* _tableItems;

}

@property (nonatomic,retain) NSArray * tableItems;                                               //@synthesize tableItems=_tableItems - In the implementation block
@property (assign,nonatomic) BOOL inEditMode;                                                    //@synthesize inEditMode=_inEditMode - In the implementation block
@property (nonatomic,retain) _HKMedicalIDData * medicalID;                                       //@synthesize medicalID=_medicalID - In the implementation block
@property (assign,nonatomic) BOOL allowsEditing;                                                 //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic) BOOL showsDismissButton;                                            //@synthesize showsDismissButton=_showsDismissButton - In the implementation block
@property (assign,nonatomic) BOOL showsDeleteButton;                                             //@synthesize showsDeleteButton=_showsDeleteButton - In the implementation block
@property (assign,nonatomic) BOOL modernAppearance;                                              //@synthesize modernAppearance=_modernAppearance - In the implementation block
@property (assign,nonatomic) BOOL shouldShowHints;                                               //@synthesize shouldShowHints=_shouldShowHints - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                                        //@synthesize healthStore=_healthStore - In the implementation block
@property (assign,nonatomic,__weak) id<HKMedicalIDViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSupportedOnThisDevice;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<HKMedicalIDViewControllerDelegate>)delegate;
-(void)setDelegate:(id<HKMedicalIDViewControllerDelegate>)arg1 ;
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setShowsDeleteButton:(BOOL)arg1 ;
-(long long)preferredStatusBarStyle;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)allowsEditing;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(BOOL)_editable;
-(BOOL)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2 ;
-(void)localeDidChange:(id)arg1 ;
-(void)medicalIDViewControllerDidCancel:(id)arg1 ;
-(void)medicalIDViewControllerDidSave:(id)arg1 ;
-(void)medicalIDViewControllerDidDelete:(id)arg1 ;
-(void)setMedicalID:(_HKMedicalIDData *)arg1 ;
-(void)setShowsDismissButton:(BOOL)arg1 ;
-(id)initInEditMode:(BOOL)arg1 ;
-(void)_doneTapped:(id)arg1 ;
-(void)_contactStoreDidChange:(id)arg1 ;
-(BOOL)showsDeleteButton;
-(void)_nextButtonTapped:(id)arg1 ;
-(void)editButtonTapped:(id)arg1 ;
-(id)initInEditMode:(BOOL)arg1 inBuddy:(BOOL)arg2 organDonationSignupAvailable:(BOOL)arg3 ;
-(void)setShouldShowHints:(BOOL)arg1 ;
-(void)_dismissMedicalIDEditor;
-(void)_fetchDemographicInformation;
-(void)timeZoneDidChange:(id)arg1 ;
-(BOOL)shouldShowHints;
-(BOOL)inEditMode;
-(void)setModernAppearance:(BOOL)arg1 ;
-(void)updateNavigationBar;
-(void)_buildTableItems;
-(void)_cancelEditingTapped:(id)arg1 ;
-(void)_doneEditingTapped:(id)arg1 ;
-(void)_reloadTableWithMedicalIDData:(id)arg1 ;
-(_HKMedicalIDData *)medicalID;
-(void)_forceDisableBiometricIfDeviceLocked;
-(void)_updateMedicalIDNameWithDemographicsInformation:(id)arg1 ;
-(NSArray *)tableItems;
-(void)_buildPresentableTableItems;
-(void)_refreshEmergencyContactsAndReload:(BOOL)arg1 ;
-(BOOL)_shouldShowOrganDonation;
-(void)editMedicalID:(id)arg1 ;
-(void)editOrganDonation:(id)arg1 ;
-(void)_showMedicalIDPreviewAsNext;
-(void)_buildEditModeTableItems;
-(void)_buildViewModeTableItems;
-(id)_newViewForFooterInSection:(long long)arg1 ;
-(long long)_preferredOrganDonationOrganization;
-(id)_tableItemForIndexPath:(id)arg1 ;
-(long long)_rowIndexForTableItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_adjustTableViewContentOffsetForVisibleView:(id)arg1 visibleRect:(CGRect)arg2 animated:(BOOL)arg3 ;
-(void)deletionTableItemDidTapDelete:(id)arg1 ;
-(void)tableItem:(id)arg1 heightDidChangeForRowIndex:(long long)arg2 keepRectVisible:(CGRect)arg3 inView:(id)arg4 ;
-(void)tableItemDidBeginEditing:(id)arg1 keepRectVisible:(CGRect)arg2 inView:(id)arg3 ;
-(void)tableItemDidChangeSelection:(id)arg1 keepRectVisible:(CGRect)arg2 inView:(id)arg3 ;
-(void)updateEmergencyContactTableItem;
-(BOOL)showsDismissButton;
-(BOOL)modernAppearance;
-(void)setTableItems:(NSArray *)arg1 ;
-(void)setInEditMode:(BOOL)arg1 ;
@end

