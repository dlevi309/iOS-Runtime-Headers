/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@class TIKeyboardOutput, TIRevisionHistory, TIKeyboardState;

@interface TIKeyboardInputManagerKeyboardContext : NSObject {

	TIKeyboardOutput* _output;
	TIRevisionHistory* _revisionHistory;
	TIKeyboardState* _currentState;

}

@property (nonatomic,readonly) TIKeyboardState * currentState;                 //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,readonly) TIKeyboardOutput * output;                      //@synthesize output=_output - In the implementation block
@property (nonatomic,retain) TIRevisionHistory * revisionHistory;              //@synthesize revisionHistory=_revisionHistory - In the implementation block
-(void)insertText:(id)arg1 ;
-(TIKeyboardState *)currentState;
-(void)acceptCandidate:(id)arg1 ;
-(TIKeyboardOutput *)output;
-(void)deleteBackward:(unsigned long long)arg1 ;
-(void)deleteForward:(unsigned long long)arg1 ;
-(void)unmarkText:(id)arg1 ;
-(void)insertTextAfterSelection:(id)arg1 ;
-(void)clearInputForMarkedText;
-(id)initWithKeyboardState:(id)arg1 ;
-(TIRevisionHistory *)revisionHistory;
-(void)deleteTextBackward:(id)arg1 ;
-(void)deleteHandwritingStrokes:(id)arg1 ;
-(void)setRevisionHistory:(TIRevisionHistory *)arg1 ;
@end

