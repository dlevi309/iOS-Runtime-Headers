/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthUI/HKTableViewController.h>

@class NSSet, HKDisplayType, HKUnitPreferenceController, NSArray, UIBarButtonItem, UIFont;

@interface WDUnitPreferenceViewController : HKTableViewController {

	NSSet* _units;
	HKDisplayType* _displayType;
	HKUnitPreferenceController* _unitController;
	NSArray* _rows;
	long long _selectedRowIndex;
	long long _originalSelectedRowIndex;
	UIBarButtonItem* _doneButton;
	UIBarButtonItem* _cancelButton;
	BOOL _requiresChangeConfirmation;
	UIFont* _bodyFont;

}

@property (nonatomic,retain) UIFont * bodyFont;                            //@synthesize bodyFont=_bodyFont - In the implementation block
@property (assign,nonatomic) BOOL requiresChangeConfirmation;              //@synthesize requiresChangeConfirmation=_requiresChangeConfirmation - In the implementation block
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setBodyFont:(UIFont *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(UIFont *)bodyFont;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_doneButtonTapped:(id)arg1 ;
-(void)_cancelButtonTapped:(id)arg1 ;
-(id)initWithUnits:(id)arg1 displayType:(id)arg2 unitController:(id)arg3 ;
-(void)setRequiresChangeConfirmation:(BOOL)arg1 ;
-(id)_sortedUnitPreferenceRows;
-(BOOL)requiresChangeConfirmation;
-(void)_updateCurrentUnit:(id)arg1 ;
@end

