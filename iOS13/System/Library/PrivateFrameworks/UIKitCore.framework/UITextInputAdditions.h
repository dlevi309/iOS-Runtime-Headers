/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UITextInputAdditions
@property (getter=isEditable,nonatomic,readonly) BOOL editable; 
@property (getter=isEditing,nonatomic,readonly) BOOL editing; 
@property (getter=_caretRect,nonatomic,readonly) CGRect caretRect; 
@optional
-(id)selectionInteractionAssistant;
-(id)_textInputViewForAddingGestureRecognizers;
-(BOOL)_useGesturesForEditableContent;
-(BOOL)_allowAnimatedUpdateSelectionRectViews;

@required
-(id)textInputView;
-(BOOL)isEditing;
-(BOOL)isEditable;
-(void)beginSelectionChange;
-(void)endSelectionChange;
-(id)interactionAssistant;
-(CGRect*)_caretRect;

@end

