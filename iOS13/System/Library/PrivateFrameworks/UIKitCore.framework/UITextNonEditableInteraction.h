/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextInteraction.h>

@interface UITextNonEditableInteraction : UITextInteraction
-(void)oneFingerTapInUneditable:(id)arg1 ;
-(void)doubleTapInUneditable:(id)arg1 ;
-(void)toggleSelectionCommands;
-(id)initWithMode:(long long)arg1 ;
-(void)_performGestureType:(long long)arg1 state:(long long)arg2 location:(CGPoint)arg3 locationOfFirstTouch:(CGPoint)arg4 forTouchType:(long long)arg5 ;
-(BOOL)_shouldAllowEnforcedTouchTypeForTouch:(id)arg1 forGestureRecognizer:(id)arg2 ;
-(void)_oneFingerTapInUneditableActionAtLocation:(CGPoint)arg1 textInput:(id)arg2 canReplaceText:(BOOL)arg3 ;
@end

