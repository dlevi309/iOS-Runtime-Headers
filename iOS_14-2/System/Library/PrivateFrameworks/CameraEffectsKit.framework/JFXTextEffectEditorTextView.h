/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <UIKitCore/UITextView.h>

@class JFXTextEffectEditorView;

@interface JFXTextEffectEditorTextView : UITextView {

	JFXTextEffectEditorView* _editorView;
	CGRect _textFrameWithoutFudge;

}

@property (assign,nonatomic,__weak) JFXTextEffectEditorView * editorView;              //@synthesize editorView=_editorView - In the implementation block
@property (assign,nonatomic) CGRect textFrameWithoutFudge;                             //@synthesize textFrameWithoutFudge=_textFrameWithoutFudge - In the implementation block
-(void)unmarkText;
-(id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)textColorForCaretSelection;
-(void)setEditorView:(JFXTextEffectEditorView *)arg1 ;
-(id)initWithTextEditingProperties:(id)arg1 editorView:(id)arg2 textContainer:(id)arg3 ;
-(JFXTextEffectEditorView *)editorView;
-(void)JFX_adjustTextEditingViewFrameAndInsetsForShadow:(id)arg1 ;
-(void)JFX_adjustTextEditingViewInsetsForVerticalAlignment:(long long)arg1 textAreaHeight:(double)arg2 textHeight:(double)arg3 ;
-(void)setTextFrameWithoutFudge:(CGRect)arg1 ;
-(id)initWithTextEditingProperties:(id)arg1 editorView:(id)arg2 ;
-(void)applyTextEditingProperties:(id)arg1 ;
-(CGRect)textEditingFrame;
-(CGRect)textFrameWithoutFudge;
@end

