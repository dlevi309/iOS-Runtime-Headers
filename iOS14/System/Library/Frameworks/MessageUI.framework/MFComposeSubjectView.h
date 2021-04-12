/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <MessageUI/MFMailComposeHeaderView.h>
#import <libobjc.A.dylib/NSLayoutManagerDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@class UITextView, MFConfirmationButton, NSString;

@interface MFComposeSubjectView : MFMailComposeHeaderView <NSLayoutManagerDelegate, UITextViewDelegate> {

	unsigned _delegateRespondsToTextChange : 1;
	unsigned _delegateRespondsToWillRemoveContent : 1;
	BOOL _needsExclusionPathUpdate;
	BOOL _allowsNotifyOption;
	UITextView* _textView;
	MFConfirmationButton* _notifyButton;
	double _trailingButtonMidlineInsetFromLayoutMargin;

}

@property (nonatomic,readonly) MFConfirmationButton * notifyButton;                                //@synthesize notifyButton=_notifyButton - In the implementation block
@property (nonatomic,readonly) UITextView * textView;                                              //@synthesize textView=_textView - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) double trailingButtonMidlineInsetFromLayoutMargin;                    //@synthesize trailingButtonMidlineInsetFromLayoutMargin=_trailingButtonMidlineInsetFromLayoutMargin - In the implementation block
@property (assign,getter=isNotifyOptionSelected,nonatomic) BOOL notifyOptionSelected; 
@property (assign,nonatomic) BOOL allowsNotifyOption;                                              //@synthesize allowsNotifyOption=_allowsNotifyOption - In the implementation block
@property (assign,nonatomic,__weak) id<MFComposeSubjectViewDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UITextView *)textView;
-(BOOL)becomeFirstResponder;
-(BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3 ;
-(BOOL)_canBecomeFirstResponder;
-(BOOL)endEditing:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)trailingButtonMidlineInsetFromLayoutMargin;
-(void)setTrailingButtonMidlineInsetFromLayoutMargin:(double)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)_updateTextContainerInsets;
-(void)_textInputDidChange:(id)arg1 ;
-(void)_configureNotifyGlyphs;
-(BOOL)allowsNotifyOption;
-(id)_textContainerExclusionPathsWithNotifyButton:(BOOL)arg1 ;
-(void)_showNotifyButtonIfNeeded;
-(void)setNeedsExclusionPathUpdate;
-(void)_updateExclusionPathsIfNeeded;
-(void)displayMetricsDidChange;
-(BOOL)isEndEditingText:(id)arg1 ;
-(void)setAllowsNotifyOption:(BOOL)arg1 ;
-(BOOL)isNotifyOptionSelected;
-(void)setNotifyOptionSelected:(BOOL)arg1 ;
-(void)setDelegate:(id<MFComposeSubjectViewDelegate>)arg1 ;
-(void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(BOOL)arg3 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(NSString *)text;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)refreshPreferredContentSize;
-(void)traitCollectionDidChange:(id)arg1 ;
-(MFConfirmationButton *)notifyButton;
-(void)dealloc;
@end

