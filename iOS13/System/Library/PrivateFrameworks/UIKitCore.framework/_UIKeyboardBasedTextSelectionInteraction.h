/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIKeyboardTextSelectionInteraction.h>

@class UITextGestureTuning;

@interface _UIKeyboardBasedTextSelectionInteraction : _UIKeyboardTextSelectionInteraction {

	UITextGestureTuning* _gestureTuning;

}

@property (nonatomic,readonly) UITextGestureTuning * gestureTuning;              //@synthesize gestureTuning=_gestureTuning - In the implementation block
-(void)dealloc;
-(id)owner;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)didMoveToView:(id)arg1 ;
-(void)_createGestureTuningIfNecessary;
-(UITextGestureTuning *)gestureTuning;
-(void)oneFingerForcePan:(id)arg1 ;
-(void)oneFingerForcePress:(id)arg1 ;
-(BOOL)enclosingScrollViewIsScrolling;
-(void)transitionFromBlockMagnifyToBlockSelectWithLocation:(CGPoint)arg1 viaDrag:(BOOL)arg2 ;
-(void)_processGestureForCustomHighlighter:(id)arg1 ;
-(void)endOneFingerSelectWithExecutionContext:(id)arg1 ;
-(void)updateOneFingerSelectWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)beginOneFingerSelectWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
@end

