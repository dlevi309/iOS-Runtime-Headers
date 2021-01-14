/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/HealthToolbox-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UITextFieldDelegate.h>

@class UIButton, UIColor, NSLayoutConstraint, NSArray, NSString, UIView, UITextField, UILabel;

@interface WDProfileTableViewCell : UITableViewCell <UITextFieldDelegate> {

	UIButton* _clearButton;
	UIColor* _normalDisplayValueColor;
	UIColor* _selectedDisplayValueColor;
	NSLayoutConstraint* _displayValueTrailingConstraint;
	NSLayoutConstraint* _clearButtonWidthAnchor;
	NSLayoutConstraint* _displayValueLeadingAnchor;
	NSArray* _normalSizeConstraints;
	NSArray* _accessibilitySizeConstraints;
	BOOL _shouldUseSelectedColorForDisplayValue;
	BOOL _shouldDisplayClearButtonDuringEditing;
	NSString* _displayName;
	NSString* _displayValue;
	NSString* _placeholderValue;
	UIView* _inputView;
	UIView* _inputAccessoryView;
	UITextField* _displayValueTextField;
	UILabel* _displayNameLabel;

}

@property (nonatomic,copy) NSString * displayName;                                    //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * displayValue;                                   //@synthesize displayValue=_displayValue - In the implementation block
@property (nonatomic,copy) NSString * placeholderValue;                               //@synthesize placeholderValue=_placeholderValue - In the implementation block
@property (assign,nonatomic) BOOL shouldUseSelectedColorForDisplayValue;              //@synthesize shouldUseSelectedColorForDisplayValue=_shouldUseSelectedColorForDisplayValue - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayClearButtonDuringEditing;              //@synthesize shouldDisplayClearButtonDuringEditing=_shouldDisplayClearButtonDuringEditing - In the implementation block
@property (nonatomic,retain) UIView * inputView;                                      //@synthesize inputView=_inputView - In the implementation block
@property (nonatomic,retain) UIView * inputAccessoryView;                             //@synthesize inputAccessoryView=_inputAccessoryView - In the implementation block
@property (nonatomic,retain) UITextField * displayValueTextField;                     //@synthesize displayValueTextField=_displayValueTextField - In the implementation block
@property (nonatomic,retain) UILabel * displayNameLabel;                              //@synthesize displayNameLabel=_displayNameLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)notEditingTrailingEdgeMargin;
+(double)editingTrailingEdgeMargin;
-(void)_setupConstraints;
-(UIView *)inputAccessoryView;
-(BOOL)becomeFirstResponder;
-(void)setInputView:(UIView *)arg1 ;
-(UIView *)inputView;
-(BOOL)canBecomeFirstResponder;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)removeClearButtonTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setDisplayValue:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setShouldUseSelectedColorForDisplayValue:(BOOL)arg1 ;
-(void)_updateForCurrentSizeCategory;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setShouldDisplayClearButtonDuringEditing:(BOOL)arg1 ;
-(void)setPlaceholderValue:(NSString *)arg1 ;
-(void)addClearButtonTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_setupUI;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSString *)displayName;
-(void)setInputAccessoryView:(UIView *)arg1 ;
-(NSString *)displayValue;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSString *)placeholderValue;
-(UITextField *)displayValueTextField;
-(UILabel *)displayNameLabel;
-(void)_updateClearButtonState;
-(void)_setupNonAccessibilitySizeConstraints;
-(void)_setupAccessibilitySizeConstraintsWithTrailingConstant:(double)arg1 ;
-(void)_setupConstraintsForContentSize;
-(BOOL)shouldDisplayClearButtonDuringEditing;
-(BOOL)shouldUseSelectedColorForDisplayValue;
-(void)setDisplayValueTextField:(UITextField *)arg1 ;
-(void)setDisplayNameLabel:(UILabel *)arg1 ;
@end

