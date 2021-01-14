/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

@class NSArray;


@protocol TIPreferencesControllerActions <NSObject>
@property (nonatomic,copy) NSArray * inputModeSelectionSequence; 
@property (assign,nonatomic) BOOL predictionEnabled; 
@property (assign,nonatomic) BOOL automaticMinimizationEnabled; 
@property (assign,nonatomic) BOOL keyboardShownByTouch; 
@property (assign,nonatomic) CGPoint keyboardPosition; 
@property (assign,nonatomic) CGPoint floatingKeyboardPosition; 
@property (assign,nonatomic) unsigned long long floatingKeyboardDockedEdge; 
@required
-(BOOL)automaticMinimizationEnabled;
-(void)updateEnabledDictationLanguages:(id)arg1;
-(CGPoint)keyboardPosition;
-(void)didTriggerOneTimeAction:(id)arg1;
-(void)updateLastUsedInputMode:(id)arg1;
-(void)setKeyboardShownByTouch:(BOOL)arg1;
-(void)updateLastUsedDictationLanguages:(id)arg1;
-(BOOL)predictionEnabled;
-(unsigned long long)floatingKeyboardDockedEdge;
-(void)updateLastUsedKeyboards:(id)arg1;
-(void)setFloatingKeyboardPosition:(CGPoint)arg1;
-(void)updateKeyboardIsSplit:(BOOL)arg1 locked:(BOOL)arg2;
-(void)updateLastUsedLayout:(id)arg1;
-(BOOL)keyboardShownByTouch;
-(void)setPredictionEnabled:(BOOL)arg1;
-(CGPoint)floatingKeyboardPosition;
-(void)setFloatingKeyboardDockedEdge:(unsigned long long)arg1;
-(void)updateVisceral:(id)arg1;
-(void)setKeyboardPosition:(CGPoint)arg1;
-(void)setInputModeSelectionSequence:(id)arg1;
-(void)updateKeyboardHandBias:(id)arg1;
-(void)updateDidPerformFirstReachableKeyboardInteraction;
-(NSArray *)inputModeSelectionSequence;
-(void)updateKeyboardIsFloating:(BOOL)arg1;
-(void)updateEnableProKeyboard:(BOOL)arg1;
-(void)setAutomaticMinimizationEnabled:(BOOL)arg1;
-(BOOL)oneTimeActionCompleted:(id)arg1;

@end

