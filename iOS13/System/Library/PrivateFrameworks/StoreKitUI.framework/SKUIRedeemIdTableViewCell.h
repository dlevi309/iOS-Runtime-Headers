/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<SKUIRedeemIdTableViewCellDelegate>)delegate;
-(void)setDelegate:(id<SKUIRedeemIdTableViewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(UITextField *)textField;
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(void)setReturnKeyType:(long long)arg1 ;
-(void)setKeyboardType:(long long)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(void)setPlaceholderText:(id)arg1 ;
-(void)setTextField:(UITextField *)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)_initializeTextField;
-(void)setAutoCapitalizationType:(long long)arg1 ;
@end

