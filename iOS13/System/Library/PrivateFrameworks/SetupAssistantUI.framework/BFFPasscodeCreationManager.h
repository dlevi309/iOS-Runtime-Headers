/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/


@protocol BFFPasscodeCreationDelegate;
@class NSString;

@interface BFFPasscodeCreationManager : NSObject {

	BOOL _numericPasscodeEntry;
	BOOL _acceptedWeakPasscode;
	unsigned long long _passcodeState;
	NSString* _passcode;
	id<BFFPasscodeCreationDelegate> _delegate;
	long long _simplePasscodeEntryLength;
	NSString* _constraintFailedInstructions;

}

@property (nonatomic,copy) NSString * passcode;                                                    //@synthesize passcode=_passcode - In the implementation block
@property (assign,nonatomic) BOOL acceptedWeakPasscode;                                            //@synthesize acceptedWeakPasscode=_acceptedWeakPasscode - In the implementation block
@property (nonatomic,copy) NSString * constraintFailedInstructions;                                //@synthesize constraintFailedInstructions=_constraintFailedInstructions - In the implementation block
@property (assign,nonatomic) unsigned long long passcodeState;                                     //@synthesize passcodeState=_passcodeState - In the implementation block
@property (assign,nonatomic,__weak) id<BFFPasscodeCreationDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * constraintInstructions; 
@property (assign,getter=isNumericPasscodeEntry,nonatomic) BOOL numericPasscodeEntry;              //@synthesize numericPasscodeEntry=_numericPasscodeEntry - In the implementation block
@property (assign,nonatomic) long long simplePasscodeEntryLength;                                  //@synthesize simplePasscodeEntryLength=_simplePasscodeEntryLength - In the implementation block
+(id)sharedPasscodeManager;
-(id)init;
-(id<BFFPasscodeCreationDelegate>)delegate;
-(void)setDelegate:(id<BFFPasscodeCreationDelegate>)arg1 ;
-(void)reset;
-(NSString *)passcode;
-(void)setPasscode:(NSString *)arg1 ;
-(void)setSimplePasscodeEntryLength:(long long)arg1 ;
-(void)setNumericPasscodeEntry:(BOOL)arg1 ;
-(unsigned long long)passcodeState;
-(void)transitionToNextPasscodeStateForInput:(id)arg1 ;
-(BOOL)isSimplePasscodeEntry;
-(long long)simplePasscodeEntryLength;
-(BOOL)isNumericPasscodeEntry;
-(NSString *)constraintInstructions;
-(void)acceptWeakPasscode:(BOOL)arg1 ;
-(void)setPasscodeState:(unsigned long long)arg1 ;
-(void)setConstraintFailedInstructions:(NSString *)arg1 ;
-(NSString *)constraintFailedInstructions;
-(id)_mainQueue;
-(void)_applyPasscode;
-(void)setAcceptedWeakPasscode:(BOOL)arg1 ;
-(BOOL)acceptedWeakPasscode;
@end

