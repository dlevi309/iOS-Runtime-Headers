/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
*/

#import <HearingUI/HearingUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, _UIBatteryView, NSNumberFormatter;

@interface HACCBatteryView : UIView {

	UILabel* _sideLabel;
	UILabel* _valueLabel;
	_UIBatteryView* _batteryView;
	NSNumberFormatter* _numberFormatter;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setValue:(double)arg1 forEar:(int)arg2 ;
@end

