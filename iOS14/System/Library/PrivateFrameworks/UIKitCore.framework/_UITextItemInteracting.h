/*
* Generated on Thursday, January 14, 2021 at 2:20:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UITextItemInteracting <UITextInput,_UITextContent>
@optional
-(BOOL)_allowHighlightForTextInteractableItem:(id)arg1;
-(BOOL)_delegatesAllowingTextItemInteractions;

@required
-(BOOL)_allowInteraction:(long long)arg1 forTextInteractableItem:(id)arg2;
-(BOOL)_mightHaveInteractableItems;
-(id)_anyTextItemConstrainedToLineAtPoint:(CGPoint)arg1;
-(id)_textInteractableItemAtPoint:(CGPoint)arg1 precision:(unsigned long long)arg2;
-(id)_targetedPreviewForTextInteractableItem:(id)arg1 dismissing:(BOOL)arg2;

@end

