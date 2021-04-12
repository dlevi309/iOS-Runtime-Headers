/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSLayoutConstraint;

@interface _UIKeyboardLayoutAlignmentView : UIView {

	CGRect lastKnownKeyboardRect;
	NSLayoutConstraint* bottomConstraint;
	NSLayoutConstraint* widthConstraint;
	NSLayoutConstraint* heightConstraint;
	NSLayoutConstraint* disambiguatingLeftConstraint;
	BOOL _automaticKeyboardFrameTrackingDisabled;

}

@property (assign,nonatomic) BOOL automaticKeyboardFrameTrackingDisabled;              //@synthesize automaticKeyboardFrameTrackingDisabled=_automaticKeyboardFrameTrackingDisabled - In the implementation block
+(CGRect)_endFrameForNotification:(id)arg1 inView:(id)arg2 ;
+(CGRect)_frameInBoundsForKeyboardFrame:(CGRect)arg1 inView:(id)arg2 ;
+(BOOL)_shouldIgnoreFrameChangeNotification:(id)arg1 inView:(id)arg2 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAutomaticKeyboardFrameTrackingDisabled:(BOOL)arg1 ;
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_keyboardChanged:(id)arg1 ;
-(void)_stopObservingKeyboardNotifications;
-(void)_startObservingKeyboardNotificationsForScreen:(id)arg1 ;
-(BOOL)_shouldOverrideAnimationForFrameChangeNotification:(id)arg1 ;
-(CGRect)_frameInBoundsForKeyboardFrame:(CGRect)arg1 ;
-(void)_updateConstraintsToMatchKeyboardFrame:(CGRect)arg1 ;
-(void)_updateConstraintsForKeyboardNotification:(id)arg1 ;
-(void)_removeConstraints;
-(void)_createConstraints;
-(void)_matchInitialKeyboardFrame;
-(BOOL)automaticKeyboardFrameTrackingDisabled;
@end

