/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(long long)keyboardType;
-(BOOL)isEnabled;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(UIControl *)textField;
-(void)setKeyboardType:(long long)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setLeftToRight:(BOOL)arg1 ;
-(BOOL)leftToRight;
-(NSAttributedString *)attributedPlaceholder;
-(void)setAttributedPlaceholder:(NSAttributedString *)arg1 ;
-(void)setTextFieldDelegate:(id<UITextFieldDelegate>)arg1 ;
-(id<UITextFieldDelegate>)textFieldDelegate;
@end

