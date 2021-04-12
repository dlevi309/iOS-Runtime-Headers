/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <Preferences/PSDetailController.h>

@protocol MCQuestionsControllerDelegate;
@class MCUIFieldCollection, NSString, UIAlertView;

@interface MCQuestionsController : PSDetailController {

	MCUIFieldCollection* _fieldCollection;
	NSString* _previousResponseValue;
	BOOL _waitingForPasscodePreflight;
	id<MCQuestionsControllerDelegate> _delegate;
	int _outDirection;
	UIAlertView* _activeAlert;
	BOOL _showingKeyboard;

}

@property (assign,nonatomic,__weak) id<MCQuestionsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int outDirection;                                               //@synthesize outDirection=_outDirection - In the implementation block
-(void)dealloc;
-(id<MCQuestionsControllerDelegate>)delegate;
-(void)setDelegate:(id<MCQuestionsControllerDelegate>)arg1 ;
-(void)profileConnection:(id)arg1 didFinishPreflightWithError:(id)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setOutDirection:(int)arg1 ;
-(void)alertViewCancel:(id)arg1 ;
-(void)_showKeyboard:(BOOL)arg1 ;
-(int)outDirection;
-(void)setPane:(id)arg1 ;
-(void)_updateNavigationBar;
-(void)_cancelButtonClicked;
-(void)_showProgressIndicator;
-(void)stopWaitingForMoreInput;
-(id)initWithUserInput:(id)arg1 ;
-(void)waitForMoreInput;
-(void)_cancelActiveAlert:(BOOL)arg1 ;
-(void)updateWithUserInput:(id)arg1 ;
-(void)_questionFieldEmpty:(id)arg1 ;
-(void)_questionFieldNotEmpty:(id)arg1 ;
-(void)_showNavButtonsAnimated:(BOOL)arg1 ;
-(void)_hideKeyboard:(BOOL)arg1 ;
-(void)_retryCurrentPasswordFieldWithError:(id)arg1 ;
-(void)_showErrorAlertWithError:(id)arg1 ;
-(void)_continueOrFinish;
-(void)_hideProgressIndicator;
-(void)_didFinishPasscodePreflightWithError:(id)arg1 ;
-(void)_didFinishPreflightWithError:(id)arg1 ;
-(void)_retryWithCurrentField;
-(void)_cancelInput;
-(void)_continueWithCurrentField;
-(void)_preflightCurrentPayload;
-(void)_processResponseAndContinue;
-(void)_nextButtonClicked;
-(void)_disableRightButton;
-(void)_retryPayload;
-(void)_skipPayload;
-(void)_enableRightButton;
-(void)_tellDelegateDidFinishWithUserInputResponses:(id)arg1 ;
-(void)_finishInput;
-(id)_panePropertiesForField:(id)arg1 ;
-(void)_cancelPaylod;
@end

