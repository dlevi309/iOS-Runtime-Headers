/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol SKUIRedeemIdTableViewCellDelegate;
@class UITextField, NSString;

@interface SKUIRedeemIdTableViewCell : UITableViewCell <UITextFieldDelegate> {

	id<SKUIRedeemIdTableViewCellDelegate> _delegate;
	UITextField* _textField;

}

@property (nonatomic,retain) UITextField * textField;                                            //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIRedeemIdTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)setReturnKeyType:(long long)arg1 ;
-(void)setKeyboardType:(long long)arg1 ;
-(id<SKUIRedeemIdTableViewCellDelegate>)delegate;
-(void)setTextField:(UITextField *)arg1 ;
-(void)setDelegate:(id<SKUIRedeemIdTableViewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(UITextField *)textField;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(void)setPlaceholderText:(id)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_initializeTextField;
-(void)setAutoCapitalizationType:(long long)arg1 ;
@end

