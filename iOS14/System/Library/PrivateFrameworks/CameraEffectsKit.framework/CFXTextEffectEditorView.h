/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextDragDelegate.h>
#import <UIKit/UITextPasteDelegate.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/JFXTextEffectEditorTextViewDelegate.h>

@protocol CFXTextEffectEditorViewDelegate;
@class JFXTextEffectEditorView, NSString;

@interface CFXTextEffectEditorView : UIView <UITextDragDelegate, UITextPasteDelegate, UITextViewDelegate, JFXTextEffectEditorTextViewDelegate> {

	id<CFXTextEffectEditorViewDelegate> _delegate;
	JFXTextEffectEditorView* _editorView;

}

@property (nonatomic,retain) JFXTextEffectEditorView * editorView;                             //@synthesize editorView=_editorView - In the implementation block
@property (nonatomic,readonly) NSString * text; 
@property (assign,nonatomic,__weak) id<CFXTextEffectEditorViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)viewWithFrame:(CGRect)arg1 textEditingProperties:(id)arg2 ;
-(void)selectAll;
-(id<CFXTextEffectEditorViewDelegate>)delegate;
-(void)setDelegate:(id<CFXTextEffectEditorViewDelegate>)arg1 ;
-(id)textDraggableView:(id)arg1 itemsForDrag:(id)arg2 ;
-(BOOL)textPasteConfigurationSupporting:(id)arg1 shouldAnimatePasteOfAttributedString:(id)arg2 toRange:(id)arg3 ;
-(NSString *)text;
-(void)textViewDidChange:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)endTextEditing;
-(void)setEditorView:(JFXTextEffectEditorView *)arg1 ;
-(JFXTextEffectEditorView *)editorView;
-(void)textEffectEditorTextViewDidUnmarkText:(id)arg1 ;
-(void)applyTextEditingProperties:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 textEditingProperties:(id)arg2 ;
-(void)CFX_setupTextField:(id)arg1 ;
-(void)selectAtEnd;
-(CGRect)textEditingFrameRelativeToView:(id)arg1 ;
@end

