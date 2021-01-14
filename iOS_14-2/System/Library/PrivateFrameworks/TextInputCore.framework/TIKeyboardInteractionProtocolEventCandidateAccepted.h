/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TIKeyboardInteractionProtocolBase.h>
#import <libobjc.A.dylib/TIKeyboardInteractionProtocolEvent.h>

@class TIKeyboardCandidate, TIKeyboardInput, TIDocumentState, NSString;

@interface TIKeyboardInteractionProtocolEventCandidateAccepted : TIKeyboardInteractionProtocolBase <TIKeyboardInteractionProtocolEvent> {

	TIKeyboardCandidate* _candWord;
	TIKeyboardInput* _input;
	TIDocumentState* _documentState;
	NSString* _context;
	NSString* _inputStem;
	BOOL _predictionBarHit;
	BOOL _useCandidateSelection;
	long long _candidateIndex;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(void)sendTo:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCandidateAccepted:(id)arg1 withInput:(id)arg2 documentState:(id)arg3 inputContext:(id)arg4 inputStem:(id)arg5 predictionBarHit:(BOOL)arg6 useCandidateSelection:(BOOL)arg7 candidateIndex:(long long)arg8 keyboardState:(id)arg9 ;
@end

