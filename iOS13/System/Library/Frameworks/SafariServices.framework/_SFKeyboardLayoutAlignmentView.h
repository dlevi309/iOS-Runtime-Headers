/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIView.h>

@class NSNotification, NSLayoutConstraint;

@interface _SFKeyboardLayoutAlignmentView : UIView {

	NSNotification* _keyboardChangeNotificationForUpdateConstraints;
	CGRect lastKnownKeyboardRect;
	NSLayoutConstraint* bottomConstraint;
	NSLayoutConstraint* widthConstraint;
	NSLayoutConstraint* heightConstraint;
	NSLayoutConstraint* disambiguatingLeftConstraint;
	BOOL _automaticKeyboardFrameTrackingDisabled;

}

@property (assign,nonatomic) BOOL automaticKeyboardFrameTrackingDisabled;              //@synthesize automaticKeyboardFrameTrackingDisabled=_automaticKeyboardFrameTrackingDisabled - In the implementation block
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAutomaticKeyboardFrameTrackingDisabled:(BOOL)arg1 ;
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_keyboardChanged:(id)arg1 ;
-(void)_stopObservingKeyboardNotifications;
-(void)_startObservingKeyboardNotificationsForScreen:(id)arg1 ;
-(CGRect)_frameInBoundsForKeyboardFrame:(CGRect)arg1 ;
-(void)_updateConstraintsToMatchKeyboardFrame:(CGRect)arg1 ;
-(void)_updateConstraintsForKeyboardNotification:(id)arg1 ;
-(void)_removeConstraints;
-(void)_matchInitialKeyboardFrame;
-(BOOL)automaticKeyboardFrameTrackingDisabled;
-(void)_addConstraints;
@end

