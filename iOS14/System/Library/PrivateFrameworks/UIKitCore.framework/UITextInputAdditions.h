/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UITextInputAdditions
@property (getter=isEditable,nonatomic,readonly) BOOL editable; 
@property (getter=isEditing,nonatomic,readonly) BOOL editing; 
@property (getter=_caretRect,nonatomic,readonly) CGRect caretRect; 
@optional
-(id)_textInputViewForAddingGestureRecognizers;
-(BOOL)_useGesturesForEditableContent;
-(BOOL)_allowAnimatedUpdateSelectionRectViews;
-(id)selectionInteractionAssistant;

@required
-(BOOL)isEditable;
-(id)interactionAssistant;
-(void)endSelectionChange;
-(void)beginSelectionChange;
-(id)textInputView;
-(BOOL)isEditing;
-(CGRect*)_caretRect;

@end

