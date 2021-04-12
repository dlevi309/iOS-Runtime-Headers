/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UITextItemInteracting <UITextInput,_UITextContent>
@optional
-(BOOL)_allowHighlightForTextInteractableItem:(id)arg1;

@required
-(BOOL)_allowInteraction:(long long)arg1 forTextInteractableItem:(id)arg2;
-(BOOL)_mightHaveInteractableItems;
-(id)_anyTextItemConstrainedToLineAtPoint:(CGPoint)arg1;
-(id)_textInteractableItemAtPoint:(CGPoint)arg1 precision:(unsigned long long)arg2;
-(id)_targetedPreviewForTextInteractableItem:(id)arg1 dismissing:(BOOL)arg2;

@end

