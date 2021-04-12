/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(CGRect)_frameInBoundsForKeyboardFrame:(CGRect)arg1 ;
-(void)_addConstraints;
-(void)_stopObservingKeyboardNotifications;
-(void)_removeConstraints;
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_updateConstraintsToMatchKeyboardFrame:(CGRect)arg1 ;
-(void)_matchInitialKeyboardFrame;
-(void)_startObservingKeyboardNotificationsForScreen:(id)arg1 ;
-(BOOL)automaticKeyboardFrameTrackingDisabled;
-(void)_keyboardChanged:(id)arg1 ;
-(void)_updateConstraintsForKeyboardNotification:(id)arg1 ;
-(void)setAutomaticKeyboardFrameTrackingDisabled:(BOOL)arg1 ;
-(void)dealloc;
@end

