/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKitCore/_UIPassthroughScrollInteractionDelegate.h>

@class UILongPressGestureRecognizer, _UIPassthroughScrollInteraction, UIView, UILabel, UITextField, _UIContentViewEditingConfiguration, _UIContentViewLabelConfiguration, NSString;

@interface _UIContentViewEditingController : NSObject <UITextFieldDelegate, UIGestureRecognizerDelegate, _UIPassthroughScrollInteractionDelegate> {

	UILongPressGestureRecognizer* _longPressRecognizer;
	_UIPassthroughScrollInteraction* _passthroughInteraction;
	BOOL _hasEdits;
	UIView* _contentView;
	UILabel* _editableLabel;
	UITextField* _textInputView;
	_UIContentViewEditingConfiguration* _editingConfiguration;
	_UIContentViewLabelConfiguration* _labelConfiguration;

}

@property (nonatomic,retain) UITextField * textInputView;                                              //@synthesize textInputView=_textInputView - In the implementation block
@property (nonatomic,__weak,readonly) UIView * contentView;                                            //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) UILabel * editableLabel;                                                //@synthesize editableLabel=_editableLabel - In the implementation block
@property (nonatomic,readonly) _UIContentViewEditingConfiguration * editingConfiguration;              //@synthesize editingConfiguration=_editingConfiguration - In the implementation block
@property (nonatomic,readonly) _UIContentViewLabelConfiguration * labelConfiguration;                  //@synthesize labelConfiguration=_labelConfiguration - In the implementation block
@property (getter=isDisplayingEditedText,nonatomic,readonly) BOOL displayingEditedText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UITextField *)textInputView;
-(BOOL)passthroughScrollInteractionDidRecognize:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(_UIContentViewLabelConfiguration *)labelConfiguration;
-(NSString *)description;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(BOOL)passthroughScrollInteraction:(id)arg1 shouldInteractAtLocation:(CGPoint)arg2 withEvent:(id)arg3 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(BOOL)isDisplayingEditedText;
-(void)setTextInputView:(UITextField *)arg1 ;
-(BOOL)makeTextInputFirstResponder;
-(void)longPressRecognizerChanged:(id)arg1 ;
-(BOOL)textFieldShouldEndEditing:(id)arg1 ;
-(id)initWithContentView:(id)arg1 editableLabel:(id)arg2 ;
-(_UIContentViewEditingConfiguration *)editingConfiguration;
-(void)updateLabelConfiguration:(id)arg1 editingConfiguration:(id)arg2 ;
-(UILabel *)editableLabel;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(UIView *)contentView;
-(void)dealloc;
@end

