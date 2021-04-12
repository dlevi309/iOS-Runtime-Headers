/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) REScriptToken * currentToken; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)next;
-(id<REScriptTokenizerDelegate>)delegate;
-(void)setDelegate:(id<REScriptTokenizerDelegate>)arg1 ;
-(REScriptToken *)currentToken;
-(BOOL)isEmpty;
-(void)_consumeWhitespace;
-(BOOL)_hasChar;
-(BOOL)_matchTokenStart:(/*function pointer*/void*)arg1 body:(/*function pointer*/void*)arg2 value:(id*)arg3 ;
-(unsigned short)_peekChar;
-(void)_popChar;
-(id)_readSingleComment;
-(id)_readMultilineComment;
-(id)_readString;
-(void)_validateToken;
-(id)initWithScriptBuffer:(id)arg1 ;
@end

