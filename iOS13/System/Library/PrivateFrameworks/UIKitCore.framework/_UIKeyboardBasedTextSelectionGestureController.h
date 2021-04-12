/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIKeyboardTextSelectionGestureController.h>

@interface _UIKeyboardBasedTextSelectionGestureController : _UIKeyboardTextSelectionGestureController {

	BOOL _delayForceMagnify;
	BOOL _didLongForcePress;

}

@property (assign,nonatomic) BOOL delayForceMagnify;              //@synthesize delayForceMagnify=_delayForceMagnify - In the implementation block
@property (assign,nonatomic) BOOL didLongForcePress;              //@synthesize didLongForcePress=_didLongForcePress - In the implementation block
+(id)sharedInstance;
-(BOOL)oneFingerForcePressShouldFailWithoutForce;
-(BOOL)oneFingerForcePressShouldCancelTouchesInView;
-(double)oneFingerForcePressMinimumDuration;
-(void)_cleanupDeadGesturesIfNecessary;
-(Class)textInteractionClass;
-(BOOL)allowOneFingerDeepPress;
-(void)setDidLongForcePress:(BOOL)arg1 ;
-(void)setDelayForceMagnify:(BOOL)arg1 ;
-(BOOL)delayForceMagnify;
-(BOOL)didLongForcePress;
@end

