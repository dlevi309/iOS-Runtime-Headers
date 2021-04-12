/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, AFAnalyticsTurnBasedInstrumentationContext;

@interface SiriUIInstrumentationManager : NSObject {

	NSString* _lastDismissedIdentifier;
	NSObject*<OS_dispatch_queue> _instrumenrationManagerQueue;
	int _currentSiriUIState;
	AFAnalyticsTurnBasedInstrumentationContext* _currentInstrumentationTurnContext;
	NSString* _clientGeneratedDialogIdentifier;

}

@property (retain) AFAnalyticsTurnBasedInstrumentationContext * currentInstrumentationTurnContext;              //@synthesize currentInstrumentationTurnContext=_currentInstrumentationTurnContext - In the implementation block
@property (assign) int currentSiriUIState;                                                                      //@synthesize currentSiriUIState=_currentSiriUIState - In the implementation block
@property (nonatomic,copy) NSString * clientGeneratedDialogIdentifier;                                          //@synthesize clientGeneratedDialogIdentifier=_clientGeneratedDialogIdentifier - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)emitInstrumentation:(id)arg1 ;
-(void)emitUIStateTransitionForSiriDismissal:(int)arg1 withDismissalReason:(int)arg2 ;
-(void)setCurrentInstrumentationTurnContext:(AFAnalyticsTurnBasedInstrumentationContext *)arg1 ;
-(void)_emitInstrumentation:(id)arg1 ;
-(void)setCurrentSiriUIState:(int)arg1 ;
-(BOOL)_hasDismissedForTurnContext:(id)arg1 ;
-(int)currentSiriUIState;
-(void)storeCurrentInstrumentationTurnContext:(id)arg1 ;
-(void)storeClientGeneratedDUC:(id)arg1 ;
-(void)emitUIStateTransitionEventWithFromState:(int)arg1 toState:(int)arg2 withPresentationType:(int)arg3 ;
-(void)emitUIStateTransitionForSiriDismissal:(int)arg1 ;
-(void)emitPartialSpeechTranscriptionEventWith:(id)arg1 ;
-(void)emitFinalSpeechTranscriptionEventWith:(id)arg1 ;
-(void)emitTextToSpeechBeginEvent:(id)arg1 ;
-(void)emitTextToSpeechEndEvent:(id)arg1 ;
-(void)emitUUFRPresentedEventWith:(id)arg1 snippetClass:(id)arg2 dialogIdentifier:(id)arg3 dialogPhase:(id)arg4 ;
-(void)emitDialogOutputEventWith:(id)arg1 canUseServerTTS:(BOOL)arg2 spokenDialogOutput:(id)arg3 displayedDialogOutput:(id)arg4 ;
-(void)emitPunchOutEventWithURL:(id)arg1 appID:(id)arg2 ;
-(AFAnalyticsTurnBasedInstrumentationContext *)currentInstrumentationTurnContext;
-(NSString *)clientGeneratedDialogIdentifier;
-(void)setClientGeneratedDialogIdentifier:(NSString *)arg1 ;
@end

