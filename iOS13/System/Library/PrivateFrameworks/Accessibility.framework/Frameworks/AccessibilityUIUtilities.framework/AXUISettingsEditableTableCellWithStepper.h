/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
*/

#import <AccessibilityUIUtilities/AccessibilityUIUtilities-Structs.h>
#import <AccessibilityUIUtilities/AXUISettingsEditableTextCell.h>

@protocol AXUISettingsEditableTableCellWithStepperDelegate;
@class UIStepper, UILabel;

@interface AXUISettingsEditableTableCellWithStepper : AXUISettingsEditableTextCell {

	BOOL _testingUseNoPreferencesDelegate;
	UIStepper* _stepper;
	id<AXUISettingsEditableTableCellWithStepperDelegate> _delegate;
	UILabel* _secondsLabel;

}

@property (nonatomic,retain) UIStepper * stepper;                                                               //@synthesize stepper=_stepper - In the implementation block
@property (nonatomic,retain) UILabel * secondsLabel;                                                            //@synthesize secondsLabel=_secondsLabel - In the implementation block
@property (assign,nonatomic,__weak) id<AXUISettingsEditableTableCellWithStepperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL shouldResizeTextFieldOnUpdate; 
@property (assign,nonatomic) BOOL testingUseNoPreferencesDelegate;                                              //@synthesize testingUseNoPreferencesDelegate=_testingUseNoPreferencesDelegate - In the implementation block
-(id<AXUISettingsEditableTableCellWithStepperDelegate>)delegate;
-(void)setDelegate:(id<AXUISettingsEditableTableCellWithStepperDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToSuperview;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)initializeView;
-(void)setTestingUseNoPreferencesDelegate:(BOOL)arg1 ;
-(void)_textFieldChanged:(id)arg1 ;
-(void)_stepperChanged:(id)arg1 ;
-(void)_updateAccessibilityLabelForTextField;
-(BOOL)testingUseNoPreferencesDelegate;
-(long long)_axStepperKeyboardType;
-(double)_axStepperMinimumValue;
-(double)_axStepperMaximumValue;
-(double)_axStepperValue;
-(double)_axStepperStepValue;
-(void)_updateSecondsLabelForDelegate:(id)arg1 ;
-(void)_axStepperSetValue:(double)arg1 ;
-(id)_axStepperStringValue;
-(void)_updateSecondsLabel;
-(void)updateWithValue:(double)arg1 shouldUpdateTextField:(BOOL)arg2 ;
-(UIStepper *)stepper;
-(BOOL)shouldResizeTextFieldOnUpdate;
-(id)_axStepperUnitString;
-(id)_stepperValueFormatString;
-(void)setStepper:(UIStepper *)arg1 ;
-(UILabel *)secondsLabel;
-(void)setSecondsLabel:(UILabel *)arg1 ;
@end

