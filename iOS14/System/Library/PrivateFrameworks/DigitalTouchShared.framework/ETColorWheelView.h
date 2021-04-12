/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
*/

#import <DigitalTouchShared/DigitalTouchShared-Structs.h>
#import <DigitalTouchShared/DTSColorWheel.h>

@class ETColorGradientView, UIColor;

@interface ETColorWheelView : DTSColorWheel {

	ETColorGradientView* _gradientView;
	double _originalRotation;
	double _originalPickerRotation;
	BOOL _handlingTouches;
	UIColor* _selectedColor;

}

@property (nonatomic,readonly) UIColor * selectedColor;              //@synthesize selectedColor=_selectedColor - In the implementation block
+(double)colorWheelWidth;
+(double)pickerDiameter;
+(double)pickerWidth;
+(CGColorRef)pickerBorderColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIColor *)selectedColor;
-(void)doneButtonTapped:(id)arg1 ;
-(void)hideColorWheelPickingColor:(BOOL)arg1 ;
-(void)showColorWheelFromPaletteCircle:(id)arg1 rotation:(double)arg2 ;
-(double)pickerDiameter;
-(void)beganTouches:(id)arg1 ;
-(void)finishedTouches;
-(double)colorWheelRadius;
-(double)gradientWidth;
-(id)pickerViewHighlightedColor;
-(void)hideDoneButton;
-(void)addPickerCircleForPaletteCircle:(id)arg1 ;
-(void)showDoneButtonAnimated;
-(BOOL)pickerShouldDismissClockwise;
-(void)hideDoneButtonAnimated;
-(void)animatePickerToOriginalPosition;
-(double)colorWheelDismissalRotation;
@end

