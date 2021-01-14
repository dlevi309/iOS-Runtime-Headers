/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <libobjc.A.dylib/REScriptTokenizerDelegate.h>
#import <libobjc.A.dylib/REScriptParserDelegate.h>

@protocol REScriptBuffer, REBacktrackingTokenBuffer;
@class NSString, REScriptTokenizer, REScriptParser, REScriptSymbolTable;

@interface REScriptProcessor : NSObject <REScriptTokenizerDelegate, REScriptParserDelegate> {

	NSString* _path;
	id<REScriptBuffer> _buffer;
	REScriptTokenizer* _tokenizer;
	id<REBacktrackingTokenBuffer> _tokenStack;
	REScriptParser* _parser;
	REScriptSymbolTable* _table;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)processorWithSource:(id)arg1 ;
+(id)processorWithPath:(id)arg1 ;
+(id)_sharedSystemTable;
-(id)features;
-(void)_process;
-(id)rules;
-(void)parser:(id)arg1 didEncouterParserError:(id)arg2 ;
-(void)tokenizer:(id)arg1 didEncouterTokenError:(id)arg2 ;
-(id)featuresWithNames:(id)arg1 ;
-(id)initWithScriptBuffer:(id)arg1 path:(id)arg2 ;
-(id)rulesWithNames:(id)arg1 ;
-(void)_encounteredError:(id)arg1 ;
@end

