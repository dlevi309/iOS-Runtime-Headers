/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UITextLoupeInteractionBehaviorDelegate.h>

@class UITextRange, _UIKeyboardTextSelectionController, NSString;

@interface UITextLoupeTouchBehavior : NSObject <UITextLoupeInteractionBehaviorDelegate> {

	BOOL _isShiftKeyBeingHeld;
	UITextRange* _originalTextRange;
	_UIKeyboardTextSelectionController* _activeSelectionController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGPoint)translationInView:(id)arg1 forLoupeGesture:(id)arg2 ;
-(BOOL)usesTouchAlignment;
-(void)configureGestureExclusionRequirementsForTextLoupeInteraction:(id)arg1 ;
-(CGPoint)startPointForLoupeGesture:(id)arg1 ;
-(void)adjustVariableDelaySettingsForLoupeInteraction:(id)arg1 ;
-(void)textLoupeInteraction:(id)arg1 gestureChangedWithState:(long long)arg2 location:(/*^block*/id)arg3 translation:(/*^block*/id)arg4 velocity:(/*^block*/id)arg5 modifierFlags:(long long)arg6 shouldCancel:(BOOL*)arg7 ;
-(void)configureLoupeGestureRecognizer:(id)arg1 forTextLoupeInteraction:(id)arg2 ;
-(Class)gestureRecognizerClassForLoupeInteraction:(id)arg1 ;
-(BOOL)loupeGestureRecognizerShouldBegin:(id)arg1 forTextLoupeInteraction:(id)arg2 ;
-(BOOL)shouldAllowEnforcedTouchTypeForTouch:(id)arg1 forGestureRecognizer:(id)arg2 ;
-(BOOL)_allowsPaintSelectionForLoupeInteraction:(id)arg1 ;
-(CGPoint)velocityInView:(id)arg1 forLoupeGesture:(id)arg2 ;
@end

