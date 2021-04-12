/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@class REScriptSymbolTable;

@interface REScriptASTObjectBuilder : NSObject {

	REScriptSymbolTable* _table;

}

@property (nonatomic,readonly) REScriptSymbolTable * table;              //@synthesize table=_table - In the implementation block
-(REScriptSymbolTable *)table;
-(id)initWithTable:(id)arg1 ;
-(id)buildObjectWithNode:(id)arg1 error:(id*)arg2 ;
-(id)objectTypeErrorDescription;
-(id)buildObjectWithIdentifierNode:(id)arg1 error:(id*)arg2 ;
-(id)buildObjectWithBinaryExpressionNode:(id)arg1 previousExpression:(id)arg2 error:(id*)arg3 ;
-(id)buildObjectWithFunctionNode:(id)arg1 error:(id*)arg2 ;
-(id)buildObjectWithSubscriptExpressionNode:(id)arg1 error:(id*)arg2 ;
-(id)buildObjectWithLiteralNode:(id)arg1 error:(id*)arg2 ;
-(id)buildObjectWithExpressionNode:(id)arg1 error:(id*)arg2 ;
-(id)buildObjectWithPrefixExpressionNode:(id)arg1 error:(id*)arg2 ;
-(id)buildObjectWithMemberExpressionNode:(id)arg1 error:(id*)arg2 ;
-(id)buildObjectWithTopLevelBinaryExpression:(id)arg1 error:(id*)arg2 ;
-(id)buildObjectWithTopLevelBinaryExpressionListNode:(id)arg1 error:(id*)arg2 ;
-(id)_errorForUnsupportedNode:(id)arg1 ;
-(id)buildObjectWithBinaryExpressionListNode:(id)arg1 previousExpression:(id)arg2 error:(id*)arg3 ;
@end

