/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewCell.h>

@class WFPaddedTextField;

@interface WFPaddedTextFieldCell : UITableViewCell {

	WFPaddedTextField* _textField;
	double _leftOffset;

}

@property (nonatomic,readonly) WFPaddedTextField * textField;              //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic) double leftOffset;                            //@synthesize leftOffset=_leftOffset - In the implementation block
-(void)layoutSubviews;
-(WFPaddedTextField *)textField;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(double)leftOffset;
-(void)setLeftOffset:(double)arg1 ;
@end

