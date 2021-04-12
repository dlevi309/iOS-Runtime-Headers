/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI
*/

#import <PrototypeToolsUI/PTUIRowTableViewCell.h>
#import <libobjc.A.dylib/PTUINumericKeypadDelegate.h>

@class UISlider, UILabel;

@interface PTUISliderRowTableViewCell : PTUIRowTableViewCell <PTUINumericKeypadDelegate> {

	UISlider* _slider;
	UILabel* _label;

}
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_valueChanged:(id)arg1 ;
-(void)updateLabel;
-(void)updateDisplayedValue;
-(void)numericKeypadDidUpdateValue:(id)arg1 ;
-(void)numericKeypadWillDismiss:(id)arg1 ;
-(void)updateCellCharacteristics;
-(void)labelTapped;
@end

