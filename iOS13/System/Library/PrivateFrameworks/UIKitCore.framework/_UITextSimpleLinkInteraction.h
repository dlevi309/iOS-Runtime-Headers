/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextItemInteractionInteraction.h>

@class UITapGestureRecognizer, UILongPressGestureRecognizer, _UITextInteractableItem;

@interface _UITextSimpleLinkInteraction : UITextItemInteractionInteraction {

	UITapGestureRecognizer* _linkTap;
	UILongPressGestureRecognizer* _highlighter;
	_UITextInteractableItem* _highlightedItem;

}
-(id)init;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(id)gesturesForFailureRequirements;
-(BOOL)interaction_gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)interaction_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)_allowItemInteractions;
-(void)linkTapped:(id)arg1 ;
-(id)itemInteractableView;
-(BOOL)_beginInteractionSessionForLinkAtPoint:(CGPoint)arg1 asTap:(BOOL)arg2 precision:(unsigned long long)arg3 ;
-(BOOL)_canBeginInteractionSessionForLinkAtPoint:(CGPoint)arg1 asTap:(BOOL)arg2 precision:(unsigned long long)arg3 ;
-(id)textLinkInteractableView;
-(void)highlight:(id)arg1 ;
@end

