/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthUI/HKTableViewController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@class WDProfile, HKHealthStore, HKBloodTypeObject, HKBiologicalSexObject, NSString, NSDateComponents, NSCalendar, UIDatePicker, UIPickerView, UIBarButtonItem, CNAvatarViewController, WDProfileHeaderView, WDProfileTableViewCell, WDDisplayTypeDescriptionTableFooterView, WDProfileEditableTableViewCell;

@interface WDProfileTableViewController : HKTableViewController <UINavigationControllerDelegate, UIPickerViewDataSource, UIPickerViewDelegate> {

	WDProfile* _profile;
	HKHealthStore* _healthStore;
	HKBloodTypeObject* _bloodTypeObject;
	long long _bloodTypeDisplayValue;
	HKBiologicalSexObject* _biologicalSexObject;
	long long _biologicalSexDisplayValue;
	long long _fitzpatrickSkinTypeDisplayValue;
	long long _wheelchairUseDisplayValue;
	NSString* _firstName;
	NSString* _lastName;
	NSDateComponents* _birthdate;
	NSDateComponents* _birthdateDisplayValue;
	NSCalendar* _gregorianCalendar;
	UIDatePicker* _birthdatePicker;
	UIPickerView* _bloodTypePicker;
	UIPickerView* _biologicalSexPicker;
	UIPickerView* _fitzpatrickSkinTypePicker;
	UIPickerView* _wheelchairUsePicker;
	UIBarButtonItem* _cancelButtonItem;
	CNAvatarViewController* _avatarViewController;
	WDProfileHeaderView* _headerView;
	WDProfileTableViewCell* _birthdateCell;
	WDProfileTableViewCell* _biologicalSexCell;
	WDProfileTableViewCell* _bloodTypeCell;
	WDProfileTableViewCell* _fitzpatrickSkinTypeCell;
	WDProfileTableViewCell* _selectedCell;
	WDProfileTableViewCell* _wheelchairUseCell;
	WDDisplayTypeDescriptionTableFooterView* _footerView;
	BOOL _isCancelling;
	WDProfileEditableTableViewCell* _firstNameCell;
	WDProfileEditableTableViewCell* _lastNameCell;

}

@property (nonatomic,retain) WDProfileEditableTableViewCell * firstNameCell;              //@synthesize firstNameCell=_firstNameCell - In the implementation block
@property (nonatomic,retain) WDProfileEditableTableViewCell * lastNameCell;               //@synthesize lastNameCell=_lastNameCell - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1 ;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(void)_localeDidChange:(id)arg1 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)_timeZoneDidChange:(id)arg1 ;
-(void)_createHeader;
-(void)_createBarButtonItems;
-(void)_createPickers;
-(void)_updatePickersWithDisplayValues;
-(void)_createCells;
-(void)_setFirstAndLastNameOnHeaderAndCells;
-(void)_fetchDataFromHealthStore;
-(void)didClearBirthdate;
-(void)_adjustHeaderFrame;
-(void)_resetSelectedCell;
-(long long)_profileRowIdentifierForIndex:(long long)arg1 ;
-(id)_displayStringForBirthDate:(id)arg1 ;
-(id)_displayStringForBiologicalSex:(long long)arg1 ;
-(id)_displayStringForBloodType:(long long)arg1 ;
-(id)_displayStringForFitzpatrickSkinType:(long long)arg1 ;
-(id)_displayStringForWheelchairUse:(long long)arg1 ;
-(id)_initialBirthdayValue;
-(void)_updateCellsWithDisplayValues;
-(id)_birthdayCalendar;
-(void)birthdateChanged:(id)arg1 ;
-(id)_dateAsAge:(id)arg1 ;
-(void)dismissButtonTapped:(id)arg1 ;
-(WDProfileEditableTableViewCell *)firstNameCell;
-(void)setFirstNameCell:(WDProfileEditableTableViewCell *)arg1 ;
-(WDProfileEditableTableViewCell *)lastNameCell;
-(void)setLastNameCell:(WDProfileEditableTableViewCell *)arg1 ;
@end

