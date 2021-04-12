/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <TextInput/TIKeyboardInputManagerStub.h>

@protocol TIKeyboardInputManagerLogging, TIClientProxy;
@class TIKeyboardInputManagerBase;

@interface TIKeyboardInputManagerWrapper : TIKeyboardInputManagerStub {

	TIKeyboardInputManagerBase* _inputManager;
	id<TIKeyboardInputManagerLogging> _logger;
	id<TIClientProxy> _clientProxy;

}

@property (nonatomic,retain) TIKeyboardInputManagerBase * inputManager;              //@synthesize inputManager=_inputManager - In the implementation block
@property (nonatomic,retain) id<TIKeyboardInputManagerLogging> logger;               //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) id<TIClientProxy> clientProxy;                          //@synthesize clientProxy=_clientProxy - In the implementation block
-(void)textAccepted:(id)arg1 ;
-(void)smartSelectionForTextInDocument:(id)arg1 inRange:(NSRange)arg2 language:(id)arg3 tokenizedRanges:(id)arg4 options:(unsigned long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 granularity:(int)arg2 keyboardState:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)generateCandidatesWithKeyboardState:(id)arg1 candidateRange:(NSRange)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)init;
-(void)skipHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2 ;
-(void)setInputManager:(TIKeyboardInputManagerBase *)arg1 ;
-(void)generateAutocorrectionsWithKeyboardState:(id)arg1 candidateRange:(NSRange)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)generateRefinementsForCandidate:(id)arg1 keyboardState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)performHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2 continuation:(/*^block*/id)arg3 ;
-(void)performHitTestForTouchEvents:(id)arg1 keyboardState:(id)arg2 continuation:(/*^block*/id)arg3 ;
-(void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 keyboardState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)handleKeyboardInput:(id)arg1 keyboardState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)generateAutocorrectionsWithKeyboardState:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)syncToKeyboardState:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)generateReplacementsForString:(id)arg1 keyLayout:(id)arg2 continuation:(/*^block*/id)arg3 ;
-(void)skipHitTestForTouchEvents:(id)arg1 keyboardState:(id)arg2 ;
-(void)setOriginalInput:(id)arg1 ;
-(void)candidateRejected:(id)arg1 ;
-(void)lastAcceptedCandidateCorrected;
-(void)textAccepted:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)logDiscoverabilityEvent:(int)arg1 userInfo:(id)arg2 ;
-(void)setLogger:(id<TIKeyboardInputManagerLogging>)arg1 ;
-(id<TIKeyboardInputManagerLogging>)logger;
-(void)writeTypologyLogWithCompletionHandler:(/*^block*/id)arg1 ;
-(TIKeyboardInputManagerBase *)inputManager;
-(void)generateAutocorrectionsWithKeyboardState:(id)arg1 candidateRange:(NSRange)arg2 requestToken:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)handleKeyboardState:(id)arg1 ;
-(id<TIClientProxy>)clientProxy;
-(void)acceptSecureCandidate:(id)arg1 keyboardState:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateAnalyticsForRejectedSuggestion:(id)arg1 keyboardState:(id)arg2 ;
-(void)_updateKeyboardOutput:(id)arg1 withSecureCandidatePayload:(id)arg2 keyboardState:(id)arg3 ;
-(void)handleKeyboardInput:(id)arg1 acceptedSecureCandidate:(id)arg2 keyboardState:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)handleAcceptedCandidate:(id)arg1 acceptedSecureCandidate:(id)arg2 keyboardState:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setClientProxy:(id<TIClientProxy>)arg1 ;
@end
