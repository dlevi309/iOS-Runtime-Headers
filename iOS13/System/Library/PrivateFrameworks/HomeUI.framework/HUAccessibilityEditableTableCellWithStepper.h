/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <AccessibilityUIUtilities/AXUISettingsEditableTableCellWithStepper.h>
#import <libobjc.A.dylib/AXUISettingsEditableTableCellWithStepperDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/HUStepperCellProtocol.h>
#import <libobjc.A.dylib/HUDisableableCellProtocol.h>

@protocol HUStepperCellDelegate;
@class NSNumber, NSString;

@interface HUAccessibilityEditableTableCellWithStepper : AXUISettingsEditableTableCellWithStepper <AXUISettingsEditableTableCellWithStepperDelegate, UITextFieldDelegate, HUStepperCellProtocol, HUDisableableCellProtocol> {

	BOOL _disabled;
	NSNumber* _minimumValue;
	NSNumber* _maximumValue;
	NSNumber* _stepperValue;
	NSNumber* _stepValue;
	id<HUStepperCellDelegate> _stepperCellDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HUStepperCellDelegate> stepperCellDelegate;              //@synthesize stepperCellDelegate=_stepperCellDelegate - In the implementation block
@property (nonatomic,copy) NSNumber * minimumValue;                                             //@synthesize minimumValue=_minimumValue - In the implementation block
@property (nonatomic,copy) NSNumber * maximumValue;                                             //@synthesize maximumValue=_maximumValue - In the implementation block
@property (nonatomic,copy) NSNumber * stepValue;                                                //@synthesize stepValue=_stepValue - In the implementation block
@property (nonatomic,copy) NSNumber * stepperValue;                                             //@synthesize stepperValue=_stepperValue - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                                   //@synthesize disabled=_disabled - In the implementation block
-(void)_update;
-(void)prepareForReuse;
-(BOOL)isDisabled;
-(void)layoutSubviews;
-(void)setDisabled:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setMinimumValue:(NSNumber *)arg1 ;
-(void)setMaximumValue:(NSNumber *)arg1 ;
-(NSNumber *)minimumValue;
-(NSNumber *)maximumValue;
-(void)setStepValue:(NSNumber *)arg1 ;
-(NSNumber *)stepValue;
-(id)stringValueForSpecifier:(id)arg1 ;
-(double)valueForSpecifier:(id)arg1 ;
-(void)specifier:(id)arg1 setValue:(double)arg2 ;
-(double)stepValueForSpecifier:(id)arg1 ;
-(double)minimumValueForSpecifier:(id)arg1 ;
-(double)maximumValueForSpecifier:(id)arg1 ;
-(id)textFieldValue:(id)arg1 ;
-(NSNumber *)stepperValue;
-(void)setStepperValue:(NSNumber *)arg1 ;
-(id<HUStepperCellDelegate>)stepperCellDelegate;
-(void)setStepperCellDelegate:(id<HUStepperCellDelegate>)arg1 ;
@end

