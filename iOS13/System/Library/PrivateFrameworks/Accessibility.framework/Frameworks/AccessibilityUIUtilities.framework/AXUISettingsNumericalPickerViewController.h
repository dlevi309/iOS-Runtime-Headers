/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
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
-(id)localizedTitle;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(double)minimumValue;
-(double)maximumValue;
-(id)specifiers;
-(BOOL)userCanDisableNumericalPreference;
-(BOOL)shouldDisablePreferenceEntirely;
-(id)localizedFooterText;
-(void)setDelayEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)delayEnabled:(id)arg1 ;
-(BOOL)numericalPreferenceEnabled;
-(id)localizedPickerFooterText;
-(id)_delayPickerSpecifier;
-(void)setNumericalPreferenceEnabledFromUser:(BOOL)arg1 ;
-(BOOL)shouldSaveOnExit;
-(id)_delayPickerFooterSpecifier;
-(void)setNumericalPreferenceValueFromUser:(double)arg1 ;
-(double)stepAmount;
-(double)numericalPreferenceValue;
-(id)stringValueForSpecifier:(id)arg1 ;
-(double)valueForSpecifier:(id)arg1 ;
-(id)localizedTextForValue:(double)arg1 ;
-(void)specifier:(id)arg1 setValue:(double)arg2 ;
-(double)stepValueForSpecifier:(id)arg1 ;
-(double)minimumValueForSpecifier:(id)arg1 ;
-(double)maximumValueForSpecifier:(id)arg1 ;
@end

