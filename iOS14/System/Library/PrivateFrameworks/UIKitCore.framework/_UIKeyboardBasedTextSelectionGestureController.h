/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(Class)textInteractionClass;
-(void)setDidLongForcePress:(BOOL)arg1 ;
-(double)oneFingerForcePressMinimumDuration;
-(BOOL)oneFingerForcePressShouldCancelTouchesInView;
-(BOOL)allowOneFingerDeepPress;
-(void)_cleanupDeadGesturesIfNecessary;
-(BOOL)oneFingerForcePressShouldFailWithoutForce;
-(BOOL)didLongForcePress;
-(BOOL)delayForceMagnify;
-(void)setDelayForceMagnify:(BOOL)arg1 ;
@end

