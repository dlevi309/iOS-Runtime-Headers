/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <ManagedConfigurationUI/MCUITableViewController.h>

@protocol MCProfileQuestionsControllerDelegate;
@class MCUIFieldCollection, NSString, UITextField;

@interface MCInstallProfileQuestionViewController : MCUITableViewController {

	MCUIFieldCollection* _fieldCollection;
	NSString* _previousResponseValue;
	BOOL _waitingForPasscodePreflight;
	id<MCProfileQuestionsControllerDelegate> _questionsDelegate;
	UITextField* _textField;

}

@property (nonatomic,retain) UITextField * textField;                                                        //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic,__weak) id<MCProfileQuestionsControllerDelegate> questionsDelegate;              //@synthesize questionsDelegate=_questionsDelegate - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)_setup;
-(void)_handleError:(unsigned long long)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)setTextField:(UITextField *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)_showProgressIndicator;
-(UITextField *)textField;
-(void)_updateNavigationBar;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(id)initWithUserInput:(id)arg1 ;
-(void)setQuestionsDelegate:(id<MCProfileQuestionsControllerDelegate>)arg1 ;
-(void)profileConnectionDidFinishPreflightWithError:(id)arg1 ;
-(void)stopWaitingForMoreInput;
-(void)waitForMoreInput;
-(void)_showNavButtonsAnimated:(BOOL)arg1 ;
-(void)_textFieldDidChange;
-(void)_configureQuestionField:(id)arg1 ;
-(void)_setRightButtonEnabled:(BOOL)arg1 ;
-(void)_hideProgressIndicator;
-(void)_didFinishPasscodePreflightWithError:(id)arg1 ;
-(void)_didFinishPreflightWithError:(id)arg1 ;
-(void)_retryCurrentPasswordFieldWithError:(id)arg1 ;
-(void)_showAlertForError:(id)arg1 ;
-(void)_continueOrFinish;
-(void)_continueWithCurrentField;
-(void)_preflightCurrentPayload;
-(void)_processResponseAndContinue;
-(void)_cancelInput;
-(id<MCProfileQuestionsControllerDelegate>)questionsDelegate;
-(void)_tellDelegateDidFinishWithUserInputResponses:(id)arg1 ;
-(void)_finishInput;
-(id)initWithFieldCollection:(id)arg1 ;
-(void)_addActionForError:(unsigned long long)arg1 title:(id)arg2 toAlert:(id)arg3 ;
-(void)_retryWithCurrentField;
-(void)updateWithUserInput:(id)arg1 ;
@end

