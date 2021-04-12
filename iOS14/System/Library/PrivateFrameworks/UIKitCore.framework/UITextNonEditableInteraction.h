/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextInteraction.h>

@interface UITextNonEditableInteraction : UITextInteraction
-(BOOL)_shouldAllowEnforcedTouchTypeForTouch:(id)arg1 forGestureRecognizer:(id)arg2 ;
-(void)oneFingerTapInUneditable:(id)arg1 ;
-(id)initWithMode:(long long)arg1 ;
-(void)doubleTapInUneditable:(id)arg1 ;
-(void)_performGestureType:(long long)arg1 state:(long long)arg2 location:(CGPoint)arg3 locationOfFirstTouch:(CGPoint)arg4 forTouchType:(long long)arg5 ;
-(void)_oneFingerTapInUneditableActionAtLocation:(CGPoint)arg1 textInput:(id)arg2 canReplaceText:(BOOL)arg3 ;
-(void)toggleSelectionCommands;
@end

