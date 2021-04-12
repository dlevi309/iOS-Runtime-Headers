/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSExpression.h>

@class NSExpression, NSArray;

@interface NSFunctionExpression : NSExpression {

	NSExpression* _operand;
	SEL _selector;
	NSArray* _arguments;

}
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SEL)selector;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)function;
-(id)arguments;
-(id)expressionValueWithObject:(id)arg1 context:(id)arg2 ;
-(id)operand;
-(void)allowEvaluation;
-(id)predicateFormat;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)_expressionWithSubstitutionVariables:(id)arg1 ;
-(id)initWithTarget:(id)arg1 selectorName:(id)arg2 arguments:(id)arg3 ;
-(id)initWithSelector:(SEL)arg1 argumentArray:(id)arg2 ;
-(BOOL)_shouldUseParensWithDescription;
-(id)initWithExpressionType:(unsigned long long)arg1 operand:(id)arg2 selector:(SEL)arg3 argumentArray:(id)arg4 ;
-(id)binaryOperatorForSelector;
@end

