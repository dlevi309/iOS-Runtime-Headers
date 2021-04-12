/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <libobjc.A.dylib/RETokenBuffer.h>

@protocol REScriptBuffer, REScriptTokenizerDelegate;
@class REScriptToken, NSString;

@interface REScriptTokenizer : NSObject <RETokenBuffer> {

	id<REScriptBuffer> _buffer;
	REScriptToken* _currentToken;
	unsigned long long _line;
	unsigned long long _column;
	id<REScriptTokenizerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<REScriptTokenizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) REScriptToken * currentToken; 
-(BOOL)isEmpty;
-(id<REScriptTokenizerDelegate>)delegate;
-(void)setDelegate:(id<REScriptTokenizerDelegate>)arg1 ;
-(void)next;
-(id)_readString;
-(REScriptToken *)currentToken;
-(void)_consumeWhitespace;
-(BOOL)_hasChar;
-(BOOL)_matchTokenStart:(/*function pointer*/void*)arg1 body:(/*function pointer*/void*)arg2 value:(id*)arg3 ;
-(unsigned short)_peekChar;
-(void)_popChar;
-(id)_readSingleComment;
-(id)_readMultilineComment;
-(void)_validateToken;
-(id)initWithScriptBuffer:(id)arg1 ;
@end

