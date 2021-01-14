/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)linkTapped:(id)arg1 ;
-(BOOL)_beginInteractionSessionForLinkAtPoint:(CGPoint)arg1 asTap:(BOOL)arg2 precision:(unsigned long long)arg3 ;
-(void)highlight:(id)arg1 ;
-(id)gesturesForFailureRequirements;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(BOOL)_allowItemInteractions;
-(id)init;
-(id)textLinkInteractableView;
-(BOOL)interaction_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)itemInteractableView;
-(BOOL)_canBeginInteractionSessionForLinkAtPoint:(CGPoint)arg1 asTap:(BOOL)arg2 precision:(unsigned long long)arg3 ;
-(BOOL)interaction_gestureRecognizerShouldBegin:(id)arg1 ;
@end

