/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/REScriptASTNode.h>

@class NSArray;

@interface REScriptASTBinaryExpressionListNode : REScriptASTNode {

	NSArray* _expressions;

}

@property (nonatomic,readonly) NSArray * expressions;              //@synthesize expressions=_expressions - In the implementation block
+(id)parseBuffer:(id)arg1 error:(id*)arg2 ;
-(id)initWithExpressions:(id)arg1 ;
-(id)dependencies;
-(NSArray *)expressions;
@end

