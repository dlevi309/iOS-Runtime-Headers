/*
* Generated on Thursday, January 14, 2021 at 2:29:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@class UIPickerView;

@interface UIAccessibilityPickerComponent : UIAccessibilityElement {

	unsigned long long _component;
	UIPickerView* _picker;

}

@property (assign,nonatomic) unsigned long long component;              //@synthesize component=_component - In the implementation block
@property (assign,nonatomic,__weak) UIPickerView * picker;              //@synthesize picker=_picker - In the implementation block
-(BOOL)canBecomeFocused;
-(id)accessibilityLabel;
-(UIPickerView *)picker;
-(id)accessibilityUserInputLabels;
-(BOOL)_accessibilityIsSpeakThisElement;
-(id)_accessibilityScrollStatus;
-(id)_accessibilityUserTestingChildren;
-(unsigned long long)accessibilityTraits;
-(id)accessibilityValue;
-(void)setPicker:(UIPickerView *)arg1 ;
-(long long)_accessibilityIndexForPickerString:(id)arg1 ;
-(unsigned long long)component;
-(CGRect)accessibilityFrame;
-(long long)_accessibilityPickerType;
-(void)setComponent:(unsigned long long)arg1 ;
-(unsigned long long)_accessibilityDatePickerComponentType;
-(id)_accessibilityDateTimePickerValues;
-(BOOL)accessibilityScroll:(long long)arg1 ;
-(id)accessibilityHint;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(NSRange)accessibilityRowRange;
-(unsigned long long)_accessibilityAutomationType;
-(double)_accessibilityNumberValue;
-(BOOL)_accessibilitySetNativeFocus;
-(BOOL)_axIsInDatePickerView;
-(id)_accessibilityViewForComponent;
-(BOOL)_isRowDisabledInWebKit:(long long)arg1 ;
-(void)_accessibilityMoveSelection:(long long)arg1 ;
-(id)_axSpeechInputLabelForTimeIntervalCalendarUnit:(unsigned long long)arg1 ;
-(id)_axSpeechInputLabelForDateCalendarUnit:(unsigned long long)arg1 ;
@end

