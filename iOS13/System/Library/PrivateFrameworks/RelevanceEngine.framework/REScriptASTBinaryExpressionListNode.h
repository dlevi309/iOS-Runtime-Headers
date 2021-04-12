/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/REScriptASTNode.h>

@class NSArray;

@interface REScriptASTBinaryExpressionListNode : REScriptASTNode {

	NSArray* _expressions;

}

@property (nonatomic,readonly) NSArray * expressions;              //@synthesize expressions=_expressions - In the implementation block
+(id)parseBuffer:(id)arg1 error:(id*)arg2 ;
-(id)dependencies;
-(id)initWithExpressions:(id)arg1 ;
-(NSArray *)expressions;
@end

