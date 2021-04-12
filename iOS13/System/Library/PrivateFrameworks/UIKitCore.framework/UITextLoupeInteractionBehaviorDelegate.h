/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UITextLoupeInteractionBehaviorDelegate <NSObject>
@required
-(Class)gestureRecognizerClassForLoupeInteraction:(id)arg1;
-(void)adjustVariableDelaySettingsForLoupeInteraction:(id)arg1;
-(void)configureGestureExclusionRequirementsForTextLoupeInteraction:(id)arg1;
-(void)configureLoupeGestureRecognizer:(id)arg1 forTextLoupeInteraction:(id)arg2;
-(BOOL)shouldAllowEnforcedTouchTypeForTouch:(id)arg1 forGestureRecognizer:(id)arg2;
-(BOOL)loupeGestureRecognizerShouldBegin:(id)arg1 forTextLoupeInteraction:(id)arg2;
-(BOOL)usesTouchAlignment;
-(CGPoint*)startPointForLoupeGesture:(id)arg1;
-(CGPoint*)translationInView:(id)arg1 forLoupeGesture:(id)arg2;
-(CGPoint*)velocityInView:(id)arg1 forLoupeGesture:(id)arg2;
-(void)textLoupeInteraction:(id)arg1 gestureChangedWithState:(long long)arg2 location:(/*^block*/id)arg3 translation:(/*^block*/id)arg4 velocity:(/*^block*/id)arg5 modifierFlags:(long long)arg6 shouldCancel:(BOOL*)arg7;

@end

