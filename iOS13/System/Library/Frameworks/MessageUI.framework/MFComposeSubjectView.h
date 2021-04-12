/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <MessageUI/MFMailComposeHeaderView.h>
#import <libobjc.A.dylib/NSLayoutManagerDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@class UITextView, UIButton, NSString;

@interface MFComposeSubjectView : MFMailComposeHeaderView <NSLayoutManagerDelegate, UITextViewDelegate> {

	unsigned _delegateRespondsToTextChange : 1;
	unsigned _delegateRespondsToWillRemoveContent : 1;
	unsigned _notifyButtonSelected : 1;
	unsigned _showNotifyButton : 1;
	unsigned _showContentVariationButton : 1;
	unsigned _contentVariationButtonSelected : 1;
	BOOL _needsExclusionPathUpdate;
	UITextView* _textView;
	UIButton* _notifyButton;
	UIButton* _contentVariationButton;
	double _trailingButtonMidlineInsetFromLayoutMargin;

}

@property (nonatomic,readonly) UITextView * textView;                                                                  //@synthesize textView=_textView - In the implementation block
@property (nonatomic,readonly) UIButton * notifyButton;                                                                //@synthesize notifyButton=_notifyButton - In the implementation block
@property (nonatomic,readonly) UIButton * contentVariationButton;                                                      //@synthesize contentVariationButton=_contentVariationButton - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) double trailingButtonMidlineInsetFromLayoutMargin;                                        //@synthesize trailingButtonMidlineInsetFromLayoutMargin=_trailingButtonMidlineInsetFromLayoutMargin - In the implementation block
@property (assign,getter=isNotifyButtonSelected,nonatomic) BOOL notifyButtonSelected; 
@property (assign,getter=isContentVariationButtonSelected,nonatomic) BOOL contentVariationButtonSelected;              //@synthesize contentVariationButtonSelected=_contentVariationButtonSelected - In the implementation block
@property (assign,nonatomic,__weak) id<MFComposeSubjectViewDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setDelegate:(id<MFComposeSubjectViewDelegate>)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UITextView *)textView;
-(void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(BOOL)arg3 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)becomeFirstResponder;
-(BOOL)endEditing:(BOOL)arg1 ;
-(BOOL)_canBecomeFirstResponder;
-(BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)refreshPreferredContentSize;
-(void)notifyButtonClicked:(id)arg1 ;
-(void)contentVariationButtonTapped:(id)arg1 ;
-(void)updateNotifyButton;
-(void)updateContentVariationButton;
-(void)_updateTextContainerInsets;
-(void)_textInputDidChange:(id)arg1 ;
-(id)_textContainerExclusionPathsWithNotifyButton:(BOOL)arg1 withContentVariationButton:(BOOL)arg2 ;
-(double)trailingButtonMidlineInsetFromLayoutMargin;
-(void)_updateExclusionPathsIfNeeded;
-(void)displayMetricsDidChange;
-(void)setTrailingButtonMidlineInsetFromLayoutMargin:(double)arg1 ;
-(BOOL)isEndEditingText:(id)arg1 ;
-(void)setShowNotifyButton:(BOOL)arg1 ;
-(BOOL)isNotifyButtonSelected;
-(void)setNotifyButtonSelected:(BOOL)arg1 ;
-(void)setShowContentVariationButton:(BOOL)arg1 ;
-(BOOL)isContentVariationSelected;
-(void)setContentVariationButtonSelected:(BOOL)arg1 ;
-(UIButton *)notifyButton;
-(UIButton *)contentVariationButton;
-(BOOL)isContentVariationButtonSelected;
@end

