/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UITextFieldDelegate.h>

@class UILabel, UITextField, NSLayoutConstraint, UIStackView, NSString;

@interface WFTextFieldCell : UITableViewCell <UITextFieldDelegate> {

	BOOL _editable;
	BOOL _hideLabel;
	UILabel* _label;
	UITextField* _textField;
	/*^block*/id _textChangeHandler;
	/*^block*/id _returnKeyHandler;
	NSLayoutConstraint* _trailingMarginConstraint;
	NSLayoutConstraint* _labelWidthConstraint;
	UIStackView* _stackView;
	NSLayoutConstraint* _stackViewTopConstraint;
	NSLayoutConstraint* _stackViewBottomConstraint;
	NSLayoutConstraint* _stackViewLeadingConstraint;

}

@property (assign,nonatomic,__weak) NSLayoutConstraint * trailingMarginConstraint;                //@synthesize trailingMarginConstraint=_trailingMarginConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * labelWidthConstraint;                    //@synthesize labelWidthConstraint=_labelWidthConstraint - In the implementation block
@property (assign,nonatomic,__weak) UIStackView * stackView;                                      //@synthesize stackView=_stackView - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * stackViewTopConstraint;                  //@synthesize stackViewTopConstraint=_stackViewTopConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * stackViewBottomConstraint;               //@synthesize stackViewBottomConstraint=_stackViewBottomConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * stackViewLeadingConstraint;              //@synthesize stackViewLeadingConstraint=_stackViewLeadingConstraint - In the implementation block
@property (nonatomic,retain) UILabel * label;                                                     //@synthesize label=_label - In the implementation block
@property (assign,nonatomic,__weak) UITextField * textField;                                      //@synthesize textField=_textField - In the implementation block
@property (nonatomic,copy) id textChangeHandler;                                                  //@synthesize textChangeHandler=_textChangeHandler - In the implementation block
@property (nonatomic,copy) id returnKeyHandler;                                                   //@synthesize returnKeyHandler=_returnKeyHandler - In the implementation block
@property (assign,nonatomic) BOOL editable;                                                       //@synthesize editable=_editable - In the implementation block
@property (assign,nonatomic) BOOL hideLabel;                                                      //@synthesize hideLabel=_hideLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)prepareForReuse;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UITextField *)textField;
-(BOOL)becomeFirstResponder;
-(UIStackView *)stackView;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(void)copy:(id)arg1 ;
-(void)setEditable:(BOOL)arg1 ;
-(void)setAccessoryType:(long long)arg1 ;
-(void)awakeFromNib;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setStackView:(UIStackView *)arg1 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(BOOL)editable;
-(void)setStackViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setStackViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setStackViewLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)stackViewTopConstraint;
-(NSLayoutConstraint *)stackViewBottomConstraint;
-(NSLayoutConstraint *)stackViewLeadingConstraint;
-(void)setTextField:(UITextField *)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(double)_verticalPadding;
-(void)textFieldDidEndEditingExit:(id)arg1 ;
-(void)_adjustStackViewPadding;
-(void)_updateStackViewForTraitCollection;
-(NSLayoutConstraint *)labelWidthConstraint;
-(id)textChangeHandler;
-(id)returnKeyHandler;
-(NSLayoutConstraint *)trailingMarginConstraint;
-(void)setHideLabel:(BOOL)arg1 ;
-(void)setTextChangeHandler:(id)arg1 ;
-(void)setReturnKeyHandler:(id)arg1 ;
-(BOOL)hideLabel;
-(void)setTrailingMarginConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setLabelWidthConstraint:(NSLayoutConstraint *)arg1 ;
@end

