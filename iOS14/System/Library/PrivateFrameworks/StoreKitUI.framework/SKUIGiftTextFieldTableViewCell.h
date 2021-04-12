/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UILabel, UITextField, UIView, NSAttributedString, NSString, UIControl;

@interface SKUIGiftTextFieldTableViewCell : UITableViewCell {

	UILabel* _label;
	UITextField* _textField;
	UIView* _topBorderView;
	BOOL _leftToRight;

}

@property (assign,nonatomic) BOOL leftToRight;                                       //@synthesize leftToRight=_leftToRight - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedPlaceholder; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) long long keyboardType; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,readonly) UIControl * textField;                                //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic) id<UITextFieldDelegate> textFieldDelegate; 
@property (nonatomic,copy) NSString * value; 
-(long long)keyboardType;
-(void)setKeyboardType:(long long)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setValue:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)setLeftToRight:(BOOL)arg1 ;
-(UIControl *)textField;
-(BOOL)isEnabled;
-(void)setLabel:(NSString *)arg1 ;
-(void)setAttributedPlaceholder:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedPlaceholder;
-(BOOL)leftToRight;
-(NSString *)label;
-(NSString *)value;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTextFieldDelegate:(id<UITextFieldDelegate>)arg1 ;
-(id<UITextFieldDelegate>)textFieldDelegate;
@end

