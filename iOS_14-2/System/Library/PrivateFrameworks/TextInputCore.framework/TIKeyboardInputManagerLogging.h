/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@protocol TIKeyboardInputManagerLogging <NSObject>
@required
-(void)logCandidateResultSet:(id)arg1 forKeyboardState:(id)arg2;
-(void)logKeyboardOutput:(id)arg1 keyboardConfiguration:(id)arg2 forKeyboardInput:(id)arg3 keyboardState:(id)arg4;
-(void)logHitKeyCode:(long long)arg1 forTouchEvent:(id)arg2 keyboardState:(id)arg3;
-(void)logReceivedSkipHitTestForTouchEvent:(id)arg1 forKeyboardState:(id)arg2;
-(void)logKeyboardConfig:(id)arg1 forSyncToKeyboardState:(id)arg2;
-(void)logReceivedTextAccepted:(id)arg1;
-(void)logRefinements:(id)arg1 forCandidate:(id)arg2 keyboardState:(id)arg3;
-(void)logReceivedCandidateRejected:(id)arg1;
-(void)logReceivedLastAcceptedCandidateCorrected;
-(void)logReplacements:(id)arg1 forString:(id)arg2 keyLayout:(id)arg3;
-(void)logReceivedSetOriginalInput:(id)arg1;
-(id)writeToFile;
-(void)setConfig:(id)arg1;
-(void)logKeyboardConfig:(id)arg1 textToCommit:(id)arg2 forAcceptedCandidate:(id)arg3 keyboardState:(id)arg4;
-(void)logAutocorrections:(id)arg1 forKeyboardState:(id)arg2 requestToken:(id)arg3;
-(void)logKeyboardConfig:(id)arg1 forAdjustedPhraseBoundaryInForwardDirection:(BOOL)arg2 granularity:(int)arg3 keyboardState:(id)arg4;
-(void)logToHumanReadableTrace:(id)arg1;

@end

