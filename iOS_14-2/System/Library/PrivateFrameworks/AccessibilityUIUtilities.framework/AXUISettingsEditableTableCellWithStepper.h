/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
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
-(UIStepper *)stepper;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(id<AXUISettingsEditableTableCellWithStepperDelegate>)delegate;
-(void)initializeView;
-(void)setTestingUseNoPreferencesDelegate:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)didMoveToSuperview;
-(void)setDelegate:(id<AXUISettingsEditableTableCellWithStepperDelegate>)arg1 ;
-(void)setStepper:(UIStepper *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
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
-(BOOL)shouldResizeTextFieldOnUpdate;
-(id)_axStepperUnitString;
-(id)_stepperValueFormatString;
-(UILabel *)secondsLabel;
-(void)setSecondsLabel:(UILabel *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

