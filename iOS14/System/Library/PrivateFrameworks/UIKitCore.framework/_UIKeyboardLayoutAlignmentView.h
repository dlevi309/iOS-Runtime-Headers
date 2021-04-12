/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(CGRect)_frameInBoundsForKeyboardFrame:(CGRect)arg1 inView:(id)arg2 ;
+(BOOL)_shouldIgnoreFrameChangeNotification:(id)arg1 inView:(id)arg2 ;
+(CGRect)_endFrameForNotification:(id)arg1 inView:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGRect)_frameInBoundsForKeyboardFrame:(CGRect)arg1 ;
-(void)_createConstraints;
-(void)_stopObservingKeyboardNotifications;
-(void)_removeConstraints;
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_updateConstraintsToMatchKeyboardFrame:(CGRect)arg1 ;
-(void)_matchInitialKeyboardFrame;
-(BOOL)_shouldOverrideAnimationForFrameChangeNotification:(id)arg1 ;
-(void)_startObservingKeyboardNotificationsForScreen:(id)arg1 ;
-(BOOL)automaticKeyboardFrameTrackingDisabled;
-(void)_keyboardChanged:(id)arg1 ;
-(void)_updateConstraintsForKeyboardNotification:(id)arg1 ;
-(void)setAutomaticKeyboardFrameTrackingDisabled:(BOOL)arg1 ;
-(void)dealloc;
@end

