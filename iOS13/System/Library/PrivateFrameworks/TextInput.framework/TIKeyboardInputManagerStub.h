/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/TIKeyboardInputManager.h>

@class NSString;

@interface TIKeyboardInputManagerStub : NSObject <TIKeyboardInputManager>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serverInterface;
+(void)setArrayClassesForSelectorsInInterface:(id)arg1 ;
-(void)syncToKeyboardState:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)smartSelectionForTextInDocument:(id)arg1 inRange:(NSRange)arg2 language:(id)arg3 tokenizedRanges:(id)arg4 options:(unsigned long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)textAccepted:(id)arg1 ;
-(void)handleKeyboardInput:(id)arg1 keyboardState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)generateCandidatesWithKeyboardState:(id)arg1 candidateRange:(NSRange)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)generateAutocorrectionsWithKeyboardState:(id)arg1 candidateRange:(NSRange)arg2 requestToken:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)generateReplacementsForString:(id)arg1 keyLayout:(id)arg2 continuation:(/*^block*/id)arg3 ;
-(void)skipHitTestForTouchEvents:(id)arg1 keyboardState:(id)arg2 ;
-(void)skipHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2 ;
-(void)performHitTestForTouchEvents:(id)arg1 keyboardState:(id)arg2 continuation:(/*^block*/id)arg3 ;
-(void)performHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2 continuation:(/*^block*/id)arg3 ;
-(void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 granularity:(int)arg2 keyboardState:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)lastAcceptedCandidateCorrected;
-(void)setOriginalInput:(id)arg1 ;
-(void)candidateRejected:(id)arg1 ;
-(void)textAccepted:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)logDiscoverabilityEvent:(int)arg1 userInfo:(id)arg2 ;
-(void)generateAutocorrectionsWithKeyboardState:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)writeTypologyLogWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)generateAutocorrectionsWithKeyboardState:(id)arg1 candidateRange:(NSRange)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)generateRefinementsForCandidate:(id)arg1 keyboardState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 keyboardState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)keyboardConfiguration;
@end

