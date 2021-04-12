/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI
*/

#import <PrototypeToolsUI/PTUIRowTableViewCell.h>
#import <libobjc.A.dylib/PTUINumericKeypadDelegate.h>

@class UISlider, UILabel;

@interface PTUISliderRowTableViewCell : PTUIRowTableViewCell <PTUINumericKeypadDelegate> {

	UISlider* _slider;
	UILabel* _label;

}
-(void)_valueChanged:(id)arg1 ;
-(void)updateDisplayedValue;
-(void)updateLabel;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)numericKeypadDidUpdateValue:(id)arg1 ;
-(void)numericKeypadWillDismiss:(id)arg1 ;
-(void)updateCellCharacteristics;
-(void)labelTapped;
@end

