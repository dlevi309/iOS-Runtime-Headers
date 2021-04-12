/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSPredicate;

@interface NSExpression : NSObject <NSSecureCoding, NSCopying> {

	struct {
		unsigned _evaluationBlocked : 1;
		unsigned _reservedExpressionFlags : 31;
	}  _expressionFlags;
	unsigned reserved;
	unsigned long long _expressionType;

}

@property (readonly) unsigned long long expressionType; 
@property (retain,readonly) id constantValue; 
@property (copy,readonly) NSString * keyPath; 
@property (copy,readonly) NSString * function; 
@property (copy,readonly) NSString * variable; 
@property (copy,readonly) NSExpression * operand; 
@property (copy,readonly) NSArray * arguments; 
@property (retain,readonly) id collection; 
@property (copy,readonly) NSPredicate * predicate; 
@property (copy,readonly) NSExpression * leftExpression; 
@property (copy,readonly) NSExpression * rightExpression; 
@property (copy,readonly) NSExpression * trueExpression; 
@property (copy,readonly) NSExpression * falseExpression; 
@property (copy,readonly) id expressionBlock; 
+(BOOL)supportsSecureCoding;
+(id)_newKeyPathExpressionForString:(id)arg1 ;
+(id)expressionWithFormat:(id)arg1 arguments:(char*)arg2 ;
+(id)expressionForTernaryWithPredicate:(id)arg1 trueExpression:(id)arg2 falseExpression:(id)arg3 ;
+(id)expressionWithFormat:(id)arg1 argumentArray:(id)arg2 ;
+(id)expressionWithFormat:(id)arg1 ;
+(id)expressionForConstantValue:(id)arg1 ;
+(id)expressionForEvaluatedObject;
+(id)expressionForVariable:(id)arg1 ;
+(id)expressionForSymbolicString:(id)arg1 ;
+(id)expressionForAggregate:(id)arg1 ;
+(id)expressionForSubquery:(id)arg1 usingIteratorVariable:(id)arg2 predicate:(id)arg3 ;
+(id)expressionForFunction:(id)arg1 selectorName:(id)arg2 arguments:(id)arg3 ;
+(id)expressionForVariableNameAssignment:(id)arg1 expression:(id)arg2 ;
+(id)expressionForConditional:(id)arg1 trueExpression:(id)arg2 falseExpression:(id)arg3 ;
+(id)expressionForKeyPath:(id)arg1 ;
+(id)expressionForFunction:(id)arg1 arguments:(id)arg2 ;
+(id)expressionForUnionSet:(id)arg1 with:(id)arg2 ;
+(id)expressionForIntersectSet:(id)arg1 with:(id)arg2 ;
+(id)expressionForMinusSet:(id)arg1 with:(id)arg2 ;
+(id)expressionForBlock:(/*^block*/id)arg1 arguments:(id)arg2 ;
+(id)expressionForAnyKey;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SEL)selector;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSPredicate *)predicate;
-(NSExpression *)leftExpression;
-(unsigned long long)expressionType;
-(NSString *)keyPath;
-(NSExpression *)rightExpression;
-(id)constantValue;
-(NSString *)function;
-(NSArray *)arguments;
-(id)expressionValueWithObject:(id)arg1 context:(id)arg2 ;
-(NSExpression *)operand;
-(id)collection;
-(NSString *)variable;
-(void)allowEvaluation;
-(id)predicateFormat;
-(BOOL)_allowsEvaluation;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)_expressionWithSubstitutionVariables:(id)arg1 ;
-(id)initWithExpressionType:(unsigned long long)arg1 ;
-(id)subexpression;
-(NSExpression *)trueExpression;
-(NSExpression *)falseExpression;
-(id)expressionBlock;
-(BOOL)_shouldUseParensWithDescription;
@end

