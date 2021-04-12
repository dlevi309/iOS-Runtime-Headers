/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <UIKitCore/UITableViewCell.h>

@class UITextField;

@interface TSKEditableTextFieldCell : UITableViewCell {

	UITextField* mTextField;

}

@property (nonatomic,retain) UITextField * textField; 
-(void)dealloc;
-(void)beginEditing;
-(void)endEditing;
-(void)layoutSubviews;
-(UITextField *)textField;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(void)setTextField:(UITextField *)arg1 ;
@end

