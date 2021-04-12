/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <WorkflowUI/WFCompactDialogViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@class UITextField, UITextView, UIButton, NSString, UILabel, NSDateFormatter, NSLayoutConstraint;

@interface WFInputTextDialogViewController : WFCompactDialogViewController <UITextFieldDelegate, UITextViewDelegate> {

	BOOL _focusImmediatelyOnAppear;
	UITextField* _textField;
	UITextView* _textView;
	UIButton* _clearButton;
	NSString* _placeholder;
	long long _initialInsertionIndex;
	UILabel* _hintLabel;
	NSDateFormatter* _dateFormatter;
	NSString* _localizedIncompleteHintString;
	NSLayoutConstraint* _hintLabelBottomConstraint;

}

@property (assign,nonatomic,__weak) UITextField * textField;                              //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic,__weak) UITextView * textView;                                //@synthesize textView=_textView - In the implementation block
@property (assign,nonatomic,__weak) UIButton * clearButton;                               //@synthesize clearButton=_clearButton - In the implementation block
@property (nonatomic,copy) NSString * placeholder;                                        //@synthesize placeholder=_placeholder - In the implementation block
@property (assign,nonatomic) BOOL focusImmediatelyOnAppear;                               //@synthesize focusImmediatelyOnAppear=_focusImmediatelyOnAppear - In the implementation block
@property (assign,nonatomic) long long initialInsertionIndex;                             //@synthesize initialInsertionIndex=_initialInsertionIndex - In the implementation block
@property (assign,nonatomic,__weak) UILabel * hintLabel;                                  //@synthesize hintLabel=_hintLabel - In the implementation block
@property (nonatomic,retain) NSDateFormatter * dateFormatter;                             //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (nonatomic,copy) NSString * localizedIncompleteHintString;                      //@synthesize localizedIncompleteHintString=_localizedIncompleteHintString - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * hintLabelBottomConstraint;              //@synthesize hintLabelBottomConstraint=_hintLabelBottomConstraint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UITextView *)textView;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)setTextField:(UITextField *)arg1 ;
-(void)setHintLabel:(UILabel *)arg1 ;
-(void)setTextView:(UITextView *)arg1 ;
-(NSDateFormatter *)dateFormatter;
-(void)setPlaceholder:(NSString *)arg1 ;
-(UILabel *)hintLabel;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(NSString *)placeholder;
-(UITextField *)textField;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)loadView;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)clearText;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIButton *)clearButton;
-(NSString *)localizedIncompleteHintString;
-(void)setLocalizedIncompleteHintString:(NSString *)arg1 ;
-(void)setInitialInsertionIndex:(long long)arg1 ;
-(BOOL)allowsDecimalNumbers;
-(long long)initialInsertionIndex;
-(void)setClearButton:(UIButton *)arg1 ;
-(void)negateText;
-(void)finishWithInputtedText;
-(BOOL)actingAsNumberField;
-(BOOL)useNumberValidation;
-(void)updateClearButtonVisibility;
-(void)updateTextViewPlaceholder;
-(void)updateDateFormattingHint;
-(BOOL)focusImmediatelyOnAppear;
-(void)setFocusImmediatelyOnAppear:(BOOL)arg1 ;
-(NSLayoutConstraint *)hintLabelBottomConstraint;
-(void)setHintLabelBottomConstraint:(NSLayoutConstraint *)arg1 ;
@end

