/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <libobjc.A.dylib/PKTextInputDebugStateReporting.h>

@protocol UITextCursorAssertion, PKTextInputCursorControllerDelegate, UITextInput;
@class UIResponder, UITextCursorAssertionController, NSString;

@interface PKTextInputCursorController : NSObject <PKTextInputDebugStateReporting> {

	id<UITextCursorAssertion> _nonBlinkingAssertion;
	id<UITextCursorAssertion> _nonVisibleAssertion;
	id<UITextCursorAssertion> _ghostAssertion;
	BOOL _cursorShouldFlash;
	/*^block*/id _restoreAfterFlashCursorBlock;
	id<PKTextInputCursorControllerDelegate> _delegate;
	double _lastElementTapToFocusTimestamp;
	long long _cursorStyle;
	long long _mode;
	UIResponder*<UITextInput> __lastKnownTextInputResponder;
	UITextCursorAssertionController* _implicitAssertionController;
	double __lastSwitchToIdleWritingStateTime;

}

@property (assign,setter=_setCursorStyle:,nonatomic) long long cursorStyle;                                                                      //@synthesize cursorStyle=_cursorStyle - In the implementation block
@property (assign,setter=_setMode:,nonatomic) long long mode;                                                                                    //@synthesize mode=_mode - In the implementation block
@property (assign,setter=_setLastKnownTextInputResponder:,nonatomic,__weak) UIResponder*<UITextInput> _lastKnownTextInputResponder;              //@synthesize _lastKnownTextInputResponder=__lastKnownTextInputResponder - In the implementation block
@property (nonatomic,retain) UITextCursorAssertionController * implicitAssertionController;                                                      //@synthesize implicitAssertionController=_implicitAssertionController - In the implementation block
@property (assign,nonatomic) double _lastSwitchToIdleWritingStateTime;                                                                           //@synthesize _lastSwitchToIdleWritingStateTime=__lastSwitchToIdleWritingStateTime - In the implementation block
@property (assign,nonatomic,__weak) id<PKTextInputCursorControllerDelegate> delegate;                                                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isCursorWeak; 
@property (assign,nonatomic) double lastElementTapToFocusTimestamp;                                                                              //@synthesize lastElementTapToFocusTimestamp=_lastElementTapToFocusTimestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)mode;
-(void)_setMode:(long long)arg1 ;
-(id)init;
-(id<PKTextInputCursorControllerDelegate>)delegate;
-(void)keyWindowDidChange:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)setDelegate:(id<PKTextInputCursorControllerDelegate>)arg1 ;
-(void)resetState;
-(void)keyboardWillShow:(id)arg1 ;
-(void)reportDebugStateDescription:(/*^block*/id)arg1 ;
-(void)makeCursorStrong;
-(void)customHighlightFeedbackVisibilityDidChange;
-(void)writingStateDidChange;
-(void)setLastElementTapToFocusTimestamp:(double)arg1 ;
-(void)firstResponderDidChange:(id)arg1 ;
-(void)textInputSourceDidChange:(id)arg1 ;
-(void)_handleUndoRedo:(id)arg1 ;
-(void)_updateCursorStyle;
-(void)_updateAssertionsForCurrentState;
-(void)removeAllAssertions;
-(id)_currentAssertionController;
-(BOOL)scribbleEnabled;
-(double)_lastSwitchToIdleWritingStateTime;
-(UIResponder*<UITextInput>)_lastKnownTextInputResponder;
-(BOOL)lastKnownTextInputResponderWindowIsKey;
-(void)_writingStateEvaluationTimerExpired;
-(void)_setCursorStyle:(long long)arg1 ;
-(void)_delayedRevokeTemporaryStrongMode;
-(BOOL)isCursorWeak;
-(void)set_lastSwitchToIdleWritingStateTime:(double)arg1 ;
-(void)makeCursorWeak;
-(id)_implicitAssertionControllerIfPossible;
-(UITextCursorAssertionController *)implicitAssertionController;
-(void)setImplicitAssertionController:(UITextCursorAssertionController *)arg1 ;
-(void)invalidateGhostAssertion;
-(void)invalidateNonVisibleAssertion;
-(void)invalidateNonBlinkingAssertion;
-(id)_windowForResponder:(id)arg1 ;
-(void)_setLastKnownTextInputResponder:(id)arg1 ;
-(BOOL)canMakeCursorWeakForResponder:(id)arg1 ;
-(void)_handleDidPerformReturn:(id)arg1 ;
-(double)lastElementTapToFocusTimestamp;
-(long long)cursorStyle;
-(void)flashCursor;
-(void)makeCursorTemporarilyStrongWhileWriting;
-(void)simulateFirstResponderChangeForTesting:(id)arg1 ;
@end

