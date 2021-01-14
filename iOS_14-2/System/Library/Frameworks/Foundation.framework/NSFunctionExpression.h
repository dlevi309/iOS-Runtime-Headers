/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)minimalFormInContext:(id)arg1 ;
-(id)_keypathsForDerivedPropertyValidation:(id*)arg1 ;
-(id)_mapKVCOperatorsToFunctionsInContext:(id)arg1 ;
-(id)predicateFormat;
-(SEL)selector;
-(id)initWithExpressionType:(unsigned long long)arg1 operand:(id)arg2 selector:(SEL)arg3 argumentArray:(id)arg4 ;
-(id)expressionValueWithObject:(id)arg1 context:(id)arg2 ;
-(id)_expressionWithSubstitutionVariables:(id)arg1 ;
-(id)initWithTarget:(id)arg1 selectorName:(id)arg2 arguments:(id)arg3 ;
-(id)function;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSelector:(SEL)arg1 argumentArray:(id)arg2 ;
-(BOOL)_shouldUseParensWithDescription;
-(void)allowEvaluation;
-(id)binaryOperatorForSelector;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)arguments;
-(id)operand;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

