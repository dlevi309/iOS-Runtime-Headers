/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKEmergencyCardTableItem.h>
#import <libobjc.A.dylib/HKMedicalIDEditorCellEditDelegate.h>
#import <libobjc.A.dylib/HKSpokenLanguagesViewControllerDelegate.h>

@protocol HKEmergencyCardPrimaryLanguageUpdateDelegate;
@class HKMedicalIDEditorLanguageCell, _HKMedicalIDMultilineStringCell, NSArray, HKSpokenLanguage;

@interface HKEmergencyCardPrimaryLanguageTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate, HKSpokenLanguagesViewControllerDelegate> {

	HKMedicalIDEditorLanguageCell* _editableCell;
	_HKMedicalIDMultilineStringCell* _displayCell;
	BOOL _isEditing;
	NSArray* _mostLikelyLanguages;
	NSArray* _allSpokenLanguages;
	HKSpokenLanguage* _currentLanguage;
	id<HKEmergencyCardPrimaryLanguageUpdateDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<HKEmergencyCardPrimaryLanguageUpdateDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<HKEmergencyCardPrimaryLanguageUpdateDelegate>)delegate;
-(void)setDelegate:(id<HKEmergencyCardPrimaryLanguageUpdateDelegate>)arg1 ;
-(id)initInEditMode:(BOOL)arg1 ;
-(id)title;
-(BOOL)hasPresentableData;
-(void)medicalIDEditorCellDidChangeValue:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2 ;
-(BOOL)shouldHighlightRowAtIndex:(long long)arg1 ;
-(BOOL)canEditRowAtIndex:(long long)arg1 ;
-(long long)editingStyleForRowAtIndex:(long long)arg1 ;
-(long long)commitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2 ;
-(void)didCommitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2 ;
-(id)_createEditableCell;
-(void)didSelectCellWithLanguage:(id)arg1 ;
-(void)didCancelLanguageSelection;
-(void)setCurrentLanguage:(BOOL)arg1 ;
-(void)presentSpokenLanguageController;
-(id)attributedStringForCurrentLanguage;
@end

