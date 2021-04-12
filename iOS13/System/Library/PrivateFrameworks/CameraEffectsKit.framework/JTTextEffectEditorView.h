/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextDragDelegate.h>
#import <UIKit/UITextPasteDelegate.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/JTTextEffectEditorTextViewDelegate.h>

@protocol JTTextEffectEditorViewDelegate;
@class JTTextEffectEditorTextView, NSString;

@interface JTTextEffectEditorView : UIView <UITextDragDelegate, UITextPasteDelegate, UITextViewDelegate, JTTextEffectEditorTextViewDelegate> {

	id<JTTextEffectEditorViewDelegate> _delegate;
	JTTextEffectEditorTextView* _editField;

}

@property (nonatomic,retain) JTTextEffectEditorTextView * editField;                          //@synthesize editField=_editField - In the implementation block
@property (nonatomic,readonly) NSString * text; 
@property (assign,nonatomic,__weak) id<JTTextEffectEditorViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<JTTextEffectEditorViewDelegate>)delegate;
-(void)setDelegate:(id<JTTextEffectEditorViewDelegate>)arg1 ;
-(NSString *)text;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)selectAll;
-(id)textDraggableView:(id)arg1 itemsForDrag:(id)arg2 ;
-(void)textViewDidChange:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(BOOL)textPasteConfigurationSupporting:(id)arg1 shouldAnimatePasteOfAttributedString:(id)arg2 toRange:(id)arg3 ;
-(void)sharedInit;
-(void)textEffectEditorTextViewDidUnmarkText:(id)arg1 ;
-(void)endTextEditing;
-(void)applyTextEditingProperties:(id)arg1 ;
-(CGRect)textEditingFrameRelativeToView:(id)arg1 ;
-(void)CFX_setupTextField;
-(JTTextEffectEditorTextView *)editField;
-(void)CFX_adjustFrameAndTextContainerInsetsForEditField:(id)arg1 ;
-(void)selectAtEnd;
-(void)setEditField:(JTTextEffectEditorTextView *)arg1 ;
@end

