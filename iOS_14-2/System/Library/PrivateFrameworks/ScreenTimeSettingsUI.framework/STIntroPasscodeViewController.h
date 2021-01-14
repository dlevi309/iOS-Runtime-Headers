/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/BFFPasscodeInputViewDelegate.h>

@class STIntroductionModel, NSString;

@interface STIntroPasscodeViewController : UIViewController <BFFPasscodeInputViewDelegate> {

	BOOL _askForRecoveryAppleID;
	BOOL _childOrNotSignedIntoiCloud;
	BOOL _numeric;
	STIntroductionModel* _model;
	NSString* _altDSID;
	/*^block*/id _continueHandler;
	long long _passcodeState;
	NSString* _initialPasscode;
	unsigned long long _numericLength;

}

@property (readonly) STIntroductionModel * model;                                                      //@synthesize model=_model - In the implementation block
@property (readonly) BOOL askForRecoveryAppleID;                                                       //@synthesize askForRecoveryAppleID=_askForRecoveryAppleID - In the implementation block
@property (copy,readonly) NSString * altDSID;                                                          //@synthesize altDSID=_altDSID - In the implementation block
@property (getter=isChildOrNotSignedIntoiCloud,readonly) BOOL childOrNotSignedIntoiCloud;              //@synthesize childOrNotSignedIntoiCloud=_childOrNotSignedIntoiCloud - In the implementation block
@property (copy,readonly) id continueHandler;                                                          //@synthesize continueHandler=_continueHandler - In the implementation block
@property (assign) long long passcodeState;                                                            //@synthesize passcodeState=_passcodeState - In the implementation block
@property (retain) NSString * initialPasscode;                                                         //@synthesize initialPasscode=_initialPasscode - In the implementation block
@property (getter=isNumeric) BOOL numeric;                                                             //@synthesize numeric=_numeric - In the implementation block
@property (assign) unsigned long long numericLength;                                                   //@synthesize numericLength=_numericLength - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(STIntroductionModel *)model;
-(id)passcodeInputView;
-(void)passcodeInput:(id)arg1 enteredPasscode:(id)arg2 ;
-(id)_passcodeView;
-(BOOL)isNumeric;
-(NSString *)altDSID;
-(void)viewDidLoad;
-(void)loadView;
-(id)continueHandler;
-(void)setNumeric:(BOOL)arg1 ;
-(BOOL)askForRecoveryAppleID;
-(BOOL)isChildOrNotSignedIntoiCloud;
-(id)initWithIntroductionModel:(id)arg1 askForRecoveryAppleID:(BOOL)arg2 altDSID:(id)arg3 isChildOrNotSignedIntoiCloud:(BOOL)arg4 continueHandler:(/*^block*/id)arg5 ;
-(void)passcodeTypeChanged:(BOOL)arg1 ;
-(unsigned long long)numericLength;
-(long long)passcodeState;
-(void)userEnteredPasscode:(id)arg1 ;
-(NSString *)initialPasscode;
-(void)_transitionToFirstPasscodePaneWithState:(long long)arg1 ;
-(void)setInitialPasscode:(NSString *)arg1 ;
-(void)setPasscodeState:(long long)arg1 ;
-(void)nextButtonTapped;
-(void)updatePasscodeType;
-(void)setNumericLength:(unsigned long long)arg1 ;
@end

