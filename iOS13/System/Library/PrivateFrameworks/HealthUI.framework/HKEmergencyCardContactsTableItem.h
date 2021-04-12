/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKEmergencyCardTableItem.h>
#import <libobjc.A.dylib/HKMedicalIDEditorCellEditDelegate.h>
#import <libobjc.A.dylib/_HKEmergencyContactPickerDelegate.h>
#import <libobjc.A.dylib/_HKEmergencyContactRelationshipPickerDelegate.h>

@protocol HKEmergencyCardContactUpdateDelegate;
@class UITableViewCell, _HKEmergencyContact, _HKEmergencyContactPicker, HKCoreTelephonyUtilities;

@interface HKEmergencyCardContactsTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate, _HKEmergencyContactPickerDelegate, _HKEmergencyContactRelationshipPickerDelegate> {

	UITableViewCell* _lastDequeuedAddContactCell;
	_HKEmergencyContact* _selectedContact;
	_HKEmergencyContactPicker* _contactPicker;
	BOOL _selectedContactIsBeingAdded;
	id<HKEmergencyCardContactUpdateDelegate> _delegate;
	HKCoreTelephonyUtilities* _coreTelephonyUtilities;

}

@property (nonatomic,retain) HKCoreTelephonyUtilities * coreTelephonyUtilities;                     //@synthesize coreTelephonyUtilities=_coreTelephonyUtilities - In the implementation block
@property (assign,nonatomic,__weak) id<HKEmergencyCardContactUpdateDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<HKEmergencyCardContactUpdateDelegate>)delegate;
-(void)setDelegate:(id<HKEmergencyCardContactUpdateDelegate>)arg1 ;
-(id)title;
-(long long)numberOfRows;
-(id)initInEditMode:(BOOL)arg1 ;
-(id)titleForHeader;
-(id)titleForFooter;
-(void)emergencyContactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)emergencyContactPicker:(id)arg1 didSelectContactProperty:(id)arg2 ;
-(BOOL)hasPresentableData;
-(id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2 ;
-(BOOL)shouldHighlightRowAtIndex:(long long)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndex:(long long)arg2 ;
-(BOOL)canEditRowAtIndex:(long long)arg1 ;
-(long long)editingStyleForRowAtIndex:(long long)arg1 ;
-(long long)commitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2 ;
-(BOOL)refreshFromData;
-(void)medicalIDEditorCellDidChangeValue:(id)arg1 ;
-(void)medicalIDEditorCellDidTapLabel:(id)arg1 ;
-(void)emergencyContactRelationshipPicker:(id)arg1 didChooseRelationshipNamed:(id)arg2 ;
-(void)emergencyContactRelationshipPickerDidCancel:(id)arg1 ;
-(long long)itemTypeForRowIndex:(long long)arg1 ;
-(long long)contactIndexForRowIndex:(long long)arg1 ;
-(id)_dequeueAndConfigureContactEditCellForIndex:(long long)arg1 inTableView:(id)arg2 ;
-(id)_dequeueAndConfigureContactViewCellForIndex:(long long)arg1 inTableView:(id)arg2 ;
-(void)callEmergencyContact:(id)arg1 ;
-(void)_presentEmergencyContactPicker;
-(void)_addEmergencyContactToData:(id)arg1 ;
-(void)_didSelectContact:(id)arg1 property:(id)arg2 ;
-(HKCoreTelephonyUtilities *)coreTelephonyUtilities;
-(void)setCoreTelephonyUtilities:(HKCoreTelephonyUtilities *)arg1 ;
-(id)viewOnlyTitle;
@end

