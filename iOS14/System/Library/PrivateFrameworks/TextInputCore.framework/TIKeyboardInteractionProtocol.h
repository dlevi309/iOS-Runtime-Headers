/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@protocol TIKeyboardInteractionProtocol <NSObject>
@required
-(void)candidateAccepted:(id)arg1 withInput:(id)arg2 documentState:(id)arg3 inputContext:(id)arg4 inputStem:(id)arg5 predictionBarHit:(BOOL)arg6 useCandidateSelection:(BOOL)arg7 candidateIndex:(long long)arg8 keyboardState:(id)arg9;
-(void)addDrawInputWithSyllableCount:(unsigned long long)arg1 keyboardState:(id)arg2;
-(void)layoutDidChange:(id)arg1 keyboardState:(id)arg2;
-(void)candidatesOffered:(id)arg1 keyboardState:(id)arg2;
-(void)contextDidChange:(id)arg1 wordDelete:(BOOL)arg2 cursorMoved:(BOOL)arg3 extendsPriorWord:(BOOL)arg4 inWord:(id)arg5 range:(NSRange)arg6 selectionLocation:(unsigned long long)arg7 keyboardState:(id)arg8;
-(void)addTouchEvent:(id)arg1;
-(void)addKeyInput:(id)arg1 keyboardState:(id)arg2;
-(void)setClientID:(id)arg1 keyboardState:(id)arg2;

@end

