/*
* Generated on Monday, March 1, 2021 at 2:35:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(unsigned long long)accessibilityTraits;
-(id)accessibilityUserInputLabels;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(BOOL)accessibilityScroll:(long long)arg1 ;
-(BOOL)canBecomeFocused;
-(UIPickerView *)picker;
-(unsigned long long)component;
-(void)setComponent:(unsigned long long)arg1 ;
-(NSRange)accessibilityRowRange;
-(unsigned long long)_accessibilityAutomationType;
-(BOOL)_accessibilityIsSpeakThisElement;
-(id)_accessibilityUserTestingChildren;
-(id)_accessibilityScrollStatus;
-(long long)_accessibilityIndexForPickerString:(id)arg1 ;
-(double)_accessibilityNumberValue;
-(long long)_accessibilityPickerType;
-(unsigned long long)_accessibilityDatePickerComponentType;
-(id)_accessibilityDateTimePickerValues;
-(void)setPicker:(UIPickerView *)arg1 ;
-(BOOL)_axIsInDatePickerView;
-(id)_accessibilityViewForComponent;
-(BOOL)_isRowDisabledInWebKit:(long long)arg1 ;
-(void)_accessibilityMoveSelection:(long long)arg1 ;
-(id)_axSpeechInputLabelForTimeIntervalCalendarUnit:(unsigned long long)arg1 ;
-(id)_axSpeechInputLabelForDateCalendarUnit:(unsigned long long)arg1 ;
@end

