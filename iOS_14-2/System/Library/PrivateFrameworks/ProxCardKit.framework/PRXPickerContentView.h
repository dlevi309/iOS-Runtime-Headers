/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
*/

#import <ProxCardKit/PRXCardContentView.h>

@class NSLayoutConstraint, UITextField, UIPickerView;

@interface PRXPickerContentView : PRXCardContentView {

	NSLayoutConstraint* _pickerTopConstraint;
	UITextField* _textField;
	UIPickerView* _pickerView;

}

@property (nonatomic,retain) UITextField * textField;                  //@synthesize textField=_textField - In the implementation block
@property (nonatomic,readonly) UIPickerView * pickerView;              //@synthesize pickerView=_pickerView - In the implementation block
-(void)setTextField:(UITextField *)arg1 ;
-(void)updateConstraints;
-(UITextField *)textField;
-(UIPickerView *)pickerView;
-(id)initWithCardStyle:(long long)arg1 ;
@end

