/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
*/


@interface AXSSActionManager : NSObject
-(BOOL)isInteractive;
-(void)press;
-(void)endSwipe;
-(void)moveRight;
-(void)moveLeft;
-(void)moveUp;
-(void)moveDown;
-(void)toggleNotificationCenter;
-(void)rebootDevice;
-(void)armApplePay;
-(void)toggleDock;
-(void)performDefaultAction;
-(void)lockScreen;
-(void)endRotate;
-(void)activateSiri;
-(void)toggleAppSwitcher;
-(void)toggleControlCenter;
-(void)willPerformStandardCommandWithIdentifier:(id)arg1 ;
-(void)goToNextElementOfType:(unsigned long long)arg1 ;
-(void)didPerformStandardCommandWithIdentifier:(id)arg1 ;
-(void)goToPreviousElementOfType:(unsigned long long)arg1 ;
-(void)enterContainer;
-(void)exitContainer;
-(void)goToNextSection;
-(void)goToPreviousSection;
-(void)lift;
-(void)goToFirstElement;
-(void)beginSwipeLeft;
-(void)beginTwoFingerSwipeLeft;
-(void)beginRotateLeft;
-(void)goToLastElement;
-(void)beginSwipeRight;
-(void)beginTwoFingerSwipeRight;
-(void)beginRotateRight;
-(void)beginSwipeUp;
-(void)beginTwoFingerSwipeUp;
-(void)beginPinchOut;
-(void)endPinch;
-(void)moveInsideNext;
-(void)moveInsidePrevious;
-(void)beginSwipeDown;
-(void)beginTwoFingerSwipeDown;
-(void)beginPinchIn;
-(void)twoFingerPress;
-(void)twoFingerLift;
-(void)goHome;
-(void)openContextualMenu;
-(void)showAccessibilityActions;
-(void)activateAccessibilityShortcut;
-(void)performEscape;
-(void)performSysdiagnose;
-(void)rotateDevice;
-(void)activateSOS;
-(void)activateTypeahead;
-(void)togglePassthroughMode;
-(void)toggleGesturesMode;
-(void)toggleHelp;
-(void)begin3DTouch;
-(void)end3DTouch;
-(void)didSuppressCommand:(id)arg1 ;
-(void)handleCommand:(id)arg1 ;
-(void)endTwoFingerSwipe;
@end

