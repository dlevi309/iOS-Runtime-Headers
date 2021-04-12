/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIKeyboardTextSelectionInteraction.h>

@class UITextGestureTuning;

@interface _UIKeyboardBasedTextSelectionInteraction : _UIKeyboardTextSelectionInteraction {

	UITextGestureTuning* _gestureTuning;

}

@property (nonatomic,readonly) UITextGestureTuning * gestureTuning;              //@synthesize gestureTuning=_gestureTuning - In the implementation block
-(id)owner;
-(void)_processGestureForCustomHighlighter:(id)arg1 ;
-(void)didMoveToView:(id)arg1 ;
-(BOOL)enclosingScrollViewIsScrolling;
-(UITextGestureTuning *)gestureTuning;
-(void)oneFingerForcePan:(id)arg1 ;
-(void)transitionFromBlockMagnifyToBlockSelectWithLocation:(CGPoint)arg1 viaDrag:(BOOL)arg2 ;
-(void)_createGestureTuningIfNecessary;
-(void)updateOneFingerSelectWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)beginOneFingerSelectWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)endOneFingerSelectWithExecutionContext:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)oneFingerForcePress:(id)arg1 ;
-(void)dealloc;
@end

