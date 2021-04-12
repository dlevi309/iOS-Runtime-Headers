/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
*/

#import <AccessibilityUIUtilities/AXUISettingsSetupCapableListController.h>
#import <libobjc.A.dylib/AXUISettingsEditableTableCellWithStepperDelegate.h>

@class NSString;

@interface AXUISettingsNumericalPickerViewController : AXUISettingsSetupCapableListController <AXUISettingsEditableTableCellWithStepperDelegate> {

	double _cachedNumericalValue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)maximumValue;
-(id)localizedTitle;
-(id)specifiers;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)localizedFooterText;
-(BOOL)userCanDisableNumericalPreference;
-(BOOL)shouldDisablePreferenceEntirely;
-(void)setDelayEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)delayEnabled:(id)arg1 ;
-(BOOL)numericalPreferenceEnabled;
-(id)localizedPickerFooterText;
-(id)_delayPickerSpecifier;
-(void)setNumericalPreferenceEnabledFromUser:(BOOL)arg1 ;
-(BOOL)shouldSaveOnExit;
-(double)stepAmount;
-(double)minimumValue;
-(id)_delayPickerFooterSpecifier;
-(void)setNumericalPreferenceValueFromUser:(double)arg1 ;
-(double)numericalPreferenceValue;
-(id)stringValueForSpecifier:(id)arg1 ;
-(double)valueForSpecifier:(id)arg1 ;
-(id)localizedTextForValue:(double)arg1 ;
-(void)specifier:(id)arg1 setValue:(double)arg2 ;
-(double)stepValueForSpecifier:(id)arg1 ;
-(double)minimumValueForSpecifier:(id)arg1 ;
-(double)maximumValueForSpecifier:(id)arg1 ;
@end

