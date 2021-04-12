/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

