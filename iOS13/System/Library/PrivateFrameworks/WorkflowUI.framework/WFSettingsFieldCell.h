/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFSettingsCell.h>

@class UITextField;

@interface WFSettingsFieldCell : WFSettingsCell {

	UITextField* _textField;
	double _offsetX;

}

@property (nonatomic,__weak,readonly) UITextField * textField;              //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic) double offsetX;                                //@synthesize offsetX=_offsetX - In the implementation block
-(void)layoutSubviews;
-(UITextField *)textField;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(double)offsetX;
-(void)setOffsetX:(double)arg1 ;
@end

