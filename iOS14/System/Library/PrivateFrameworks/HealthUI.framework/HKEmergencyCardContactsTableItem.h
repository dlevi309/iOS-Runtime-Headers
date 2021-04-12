/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKEmergencyCardTableItem.h>
#import <libobjc.A.dylib/HKMedicalIDEditorCellEditDelegate.h>
#import <libobjc.A.dylib/HKEmergencyContactPickerDelegate.h>
#import <libobjc.A.dylib/HKEmergencyContactRelationshipPickerDelegate.h>

@protocol HKEmergencyCardContactUpdateDelegate;
@class UITableViewCell, _HKEmergencyContact, HKEmergencyContactPicker, HKCoreTelephonyUtilities;

@interface HKEmergencyCardContactsTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate, HKEmergencyContactPickerDelegate, HKEmergencyContactRelationshipPickerDelegate> {

	UITableViewCell* _lastDequeuedAddContactCell;
	_HKEmergencyContact* _selectedContact;
	HKEmergencyContactPicker* _contactPicker;
	BOOL _selectedContactIsBeingAdded;
	id<HKEmergencyCardContactUpdateDelegate> _delegate;
	HKCoreTelephonyUtilities* _coreTelephonyUtilities;

}

@property (nonatomic,retain) HKCoreTelephonyUtilities * coreTelephonyUtilities;                     //@synthesize coreTelephonyUtilities=_coreTelephonyUtilities - In the implementation block
@property (assign,nonatomic,__weak) id<HKEmergencyCardContactUpdateDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<HKEmergencyCardContactUpdateDelegate>)delegate;
-(id)titleForHeader;
-(id)titleForFooter;
-(long long)numberOfRows;
-(void)setDelegate:(id<HKEmergencyCardContactUpdateDelegate>)arg1 ;
-(id)initInEditMode:(BOOL)arg1 ;
-(id)title;
-(BOOL)hasPresentableData;
-(void)medicalIDEditorCellDidChangeValue:(id)arg1 ;
-(void)medicalIDEditorCellDidTapLabel:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2 ;
-(BOOL)shouldHighlightRowAtIndex:(long long)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndex:(long long)arg2 ;
-(BOOL)canEditRowAtIndex:(long long)arg1 ;
-(long long)editingStyleForRowAtIndex:(long long)arg1 ;
-(long long)commitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2 ;
-(long long)itemTypeForRowIndex:(long long)arg1 ;
-(id)_footerAttributedText;
-(long long)contactIndexForRowIndex:(long long)arg1 ;
-(id)_footerAttributedTextForSecondaryProfile;
-(id)_footerAttributedTextForPrimaryProfile;
-(id)_footerTextForSecondaryProfile;
-(id)_footerTextWithGivenName:(id)arg1 ;
-(id)_dequeueAndConfigureContactEditCellForIndex:(long long)arg1 inTableView:(id)arg2 ;
-(id)_dequeueAndConfigureContactViewCellForIndex:(long long)arg1 inTableView:(id)arg2 ;
-(void)callEmergencyContact:(id)arg1 ;
-(void)_presentEmergencyContactPicker;
-(void)_addEmergencyContactToData:(id)arg1 ;
-(void)_didSelectContact:(id)arg1 property:(id)arg2 ;
-(HKCoreTelephonyUtilities *)coreTelephonyUtilities;
-(void)setCoreTelephonyUtilities:(HKCoreTelephonyUtilities *)arg1 ;
-(void)emergencyContactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)emergencyContactPicker:(id)arg1 didSelectContactProperty:(id)arg2 ;
-(void)emergencyContactRelationshipPicker:(id)arg1 didChooseRelationshipNamed:(id)arg2 ;
-(void)emergencyContactRelationshipPickerDidCancel:(id)arg1 ;
-(BOOL)refreshFromData:(BOOL)arg1 ;
-(id)viewOnlyTitle;
@end

