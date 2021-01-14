/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)offsetX;
-(UITextField *)textField;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setOffsetX:(double)arg1 ;
@end

