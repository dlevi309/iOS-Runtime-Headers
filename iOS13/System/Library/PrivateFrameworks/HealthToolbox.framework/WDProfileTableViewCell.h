/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/HealthToolbox-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UITextFieldDelegate.h>

@class UILabel, UIButton, UIColor, NSString, UIView, UITextField;

@interface WDProfileTableViewCell : UITableViewCell <UITextFieldDelegate> {

	UILabel* _displayNameLabel;
	UIButton* _clearButton;
	UIColor* _normalDisplayValueColor;
	UIColor* _selectedDisplayValueColor;
	BOOL _shouldUseSelectedColorForDisplayValue;
	BOOL _shouldDisplayClearButtonDuringEditing;
	NSString* _displayName;
	NSString* _displayValue;
	NSString* _placeholderValue;
	UIView* _inputView;
	UIView* _inputAccessoryView;
	UITextField* _displayValueTextField;

}

@property (nonatomic,retain) NSString * displayName;                                  //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * displayValue;                                 //@synthesize displayValue=_displayValue - In the implementation block
@property (nonatomic,retain) NSString * placeholderValue;                             //@synthesize placeholderValue=_placeholderValue - In the implementation block
@property (assign,nonatomic) BOOL shouldUseSelectedColorForDisplayValue;              //@synthesize shouldUseSelectedColorForDisplayValue=_shouldUseSelectedColorForDisplayValue - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayClearButtonDuringEditing;              //@synthesize shouldDisplayClearButtonDuringEditing=_shouldDisplayClearButtonDuringEditing - In the implementation block
@property (nonatomic,retain) UIView * inputView;                                      //@synthesize inputView=_inputView - In the implementation block
@property (nonatomic,retain) UIView * inputAccessoryView;                             //@synthesize inputAccessoryView=_inputAccessoryView - In the implementation block
@property (nonatomic,retain) UITextField * displayValueTextField;                     //@synthesize displayValueTextField=_displayValueTextField - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)editingRightEdgeMargin;
+(double)notEditingRightEdgeMargin;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)becomeFirstResponder;
-(UIView *)inputAccessoryView;
-(UIView *)inputView;
-(void)setInputView:(UIView *)arg1 ;
-(void)setInputAccessoryView:(UIView *)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(NSString *)displayValue;
-(void)setDisplayValue:(NSString *)arg1 ;
-(void)_updateForCurrentSizeCategory;
-(void)_setupUI;
-(NSString *)placeholderValue;
-(void)removeClearButtonTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setShouldUseSelectedColorForDisplayValue:(BOOL)arg1 ;
-(void)setShouldDisplayClearButtonDuringEditing:(BOOL)arg1 ;
-(void)setPlaceholderValue:(NSString *)arg1 ;
-(void)addClearButtonTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setDisplayValueTextField:(UITextField *)arg1 ;
-(UITextField *)displayValueTextField;
-(void)_updateClearButtonState;
-(BOOL)shouldDisplayClearButtonDuringEditing;
-(BOOL)shouldUseSelectedColorForDisplayValue;
@end

