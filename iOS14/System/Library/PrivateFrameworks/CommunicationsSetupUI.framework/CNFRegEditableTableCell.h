/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/

#import <Preferences/PSEditableTableCell.h>

@class UIImage, CNFRegShadowView;

@interface CNFRegEditableTableCell : PSEditableTableCell {

	SEL _emptyStateSelector;
	SEL _didBeginEditingSelector;
	SEL _didEndEditingSelector;
	id _textChangeObserver;
	BOOL _textFieldIsEmpty;
	BOOL _skipDelegateCallback;
	UIImage* _shadowImage;
	CNFRegShadowView* _shadowView;
	UIImage* _customCheckmarkImage;
	UIImage* _customCheckmarkImageSelected;

}

@property (nonatomic,retain) CNFRegShadowView * shadowView;                       //@synthesize shadowView=_shadowView - In the implementation block
@property (assign,nonatomic) BOOL skipDelegateCallback;                           //@synthesize skipDelegateCallback=_skipDelegateCallback - In the implementation block
@property (nonatomic,retain) UIImage * shadowImage;                               //@synthesize shadowImage=_shadowImage - In the implementation block
@property (nonatomic,retain) UIImage * customCheckmarkImage;                      //@synthesize customCheckmarkImage=_customCheckmarkImage - In the implementation block
@property (nonatomic,retain) UIImage * customCheckmarkImageSelected;              //@synthesize customCheckmarkImageSelected=_customCheckmarkImageSelected - In the implementation block
-(UIImage *)shadowImage;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(void)setShadowImage:(UIImage *)arg1 ;
-(void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 specifier:(id)arg3 ;
-(void)setTitle:(id)arg1 ;
-(CNFRegShadowView *)shadowView;
-(void)layoutSubviews;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)setChecked:(BOOL)arg1 ;
-(void)setShadowView:(CNFRegShadowView *)arg1 ;
-(void)dealloc;
-(void)setCustomCheckmarkImage:(UIImage *)arg1 ;
-(void)setCustomCheckmarkImageSelected:(UIImage *)arg1 ;
-(void)textFieldChangedExternally;
-(BOOL)skipDelegateCallback;
-(void)_updateTextFieldOffsetWithDict:(id)arg1 ;
-(void)_handleTextChanged;
-(BOOL)_textFieldIsCurrentlyEmpty;
-(void)notifyTextFieldEmptyStateChanged:(BOOL)arg1 ;
-(void)notifyTextFieldDidBeginEditing;
-(void)notifyTextFieldDidEndEditing;
-(UIImage *)customCheckmarkImage;
-(UIImage *)customCheckmarkImageSelected;
-(void)_startListeningForTextChanges;
-(void)_stopListeningForTextChanges;
-(void)setSkipDelegateCallback:(BOOL)arg1 ;
@end

