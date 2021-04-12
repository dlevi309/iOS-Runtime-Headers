/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextField, NSString;

@interface HUAlarmEditableTextCell : UITableViewCell <UITextFieldDelegate> {

	UITextField* _textField;

}

@property (nonatomic,readonly) UITextField * textField;                     //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic) long long autocapitalizationType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)autocapitalizationType;
-(void)setAutocapitalizationType:(long long)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(void)layoutSubviews;
-(UITextField *)textField;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

