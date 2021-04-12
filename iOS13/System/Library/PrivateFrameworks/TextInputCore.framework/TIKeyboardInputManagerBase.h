/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


#import <TextInputCore/TextInputCore-Structs.h>
@class TIInputMode, NSString;

@interface TIKeyboardInputManagerBase : NSObject {

	BOOL _hasHandledInput;
	TIInputMode* _inputMode;

}

@property (nonatomic,readonly) TIInputMode * inputMode;                            //@synthesize inputMode=_inputMode - In the implementation block
@property (nonatomic,readonly) NSString * currentInputModeIdentifier; 
@property (nonatomic,readonly) BOOL hasHandledInput;                               //@synthesize hasHandledInput=_hasHandledInput - In the implementation block
-(id)init;
-(void)resume;
-(void)suspend;
-(BOOL)syncToKeyboardState:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(TIInputMode *)inputMode;
-(void)generateCandidatesWithKeyboardState:(id)arg1 candidateRange:(NSRange)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)skipHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2 ;
-(void)lastAcceptedCandidateCorrected;
-(void)setOriginalInput:(id)arg1 ;
-(void)candidateRejected:(id)arg1 ;
-(void)logDiscoverabilityEvent:(int)arg1 userInfo:(id)arg2 ;
-(id)keyboardConfiguration;
-(id)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2 ;
-(void)storeLanguageModelDynamicDataIncludingCache;
-(id)handleKeyboardInput:(id)arg1 ;
-(void)generateAutocorrectionsWithKeyboardState:(id)arg1 candidateRange:(NSRange)arg2 candidateHandler:(id)arg3 ;
-(id)generateReplacementsForString:(id)arg1 keyLayout:(id)arg2 ;
-(id)generateRefinementsForCandidate:(id)arg1 ;
-(long long)performHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2 ;
-(void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 ;
-(void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 granularity:(int)arg2 ;
-(void)textAccepted:(id)arg1 fromPredictiveInputBar:(BOOL)arg2 withInput:(id)arg3 ;
-(id)resourceInputModes;
-(id)initWithInputMode:(id)arg1 keyboardState:(id)arg2 ;
-(NSString *)currentInputModeIdentifier;
-(void)runMaintenanceTask;
-(void)syncToKeyboardState:(id)arg1 ;
-(void)candidatesOfferedFeedback:(id)arg1 keyboardState:(id)arg2 ;
-(NSRange)smartSelectionRangeForTextInDocument:(id)arg1 inRange:(NSRange)arg2 language:(id)arg3 tokenizedRanges:(id)arg4 options:(unsigned long long)arg5 ;
-(BOOL)isHardwareKeyboardAutocorrectionEnabled;
-(void)addSynthesizedTouchToInput:(id)arg1 ;
-(id)humanReadableTrace;
-(void)clearHumanReadableTrace;
-(id)configurationPropertyList;
-(long long)deletionCountForString:(id)arg1 ;
-(BOOL)hasHandledInput;
@end

