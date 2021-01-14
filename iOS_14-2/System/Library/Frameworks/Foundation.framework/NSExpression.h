/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)expressionForTernaryWithPredicate:(id)arg1 trueExpression:(id)arg2 falseExpression:(id)arg3 ;
+(id)expressionForConditional:(id)arg1 trueExpression:(id)arg2 falseExpression:(id)arg3 ;
+(id)expressionForSubquery:(id)arg1 usingIteratorVariable:(id)arg2 predicate:(id)arg3 ;
+(id)expressionForVariableNameAssignment:(id)arg1 expression:(id)arg2 ;
+(id)expressionForFunction:(id)arg1 selectorName:(id)arg2 arguments:(id)arg3 ;
+(id)expressionForFunction:(id)arg1 arguments:(id)arg2 ;
+(id)expressionWithFormat:(id)arg1 argumentArray:(id)arg2 ;
+(id)_newKeyPathExpressionForString:(id)arg1 ;
+(id)expressionWithFormat:(id)arg1 arguments:(char*)arg2 ;
+(id)expressionForIntersectSet:(id)arg1 with:(id)arg2 ;
+(id)expressionForEvaluatedObject;
+(id)expressionForSymbolicString:(id)arg1 ;
+(id)expressionForBlock:(/*^block*/id)arg1 arguments:(id)arg2 ;
+(id)expressionForConstantValue:(id)arg1 ;
+(id)expressionForUnionSet:(id)arg1 with:(id)arg2 ;
+(id)expressionForMinusSet:(id)arg1 with:(id)arg2 ;
+(id)expressionWithFormat:(id)arg1 ;
+(id)expressionForKeyPath:(id)arg1 ;
+(id)expressionForVariable:(id)arg1 ;
+(id)expressionForAnyKey;
+(id)expressionForAggregate:(id)arg1 ;
-(id)minimalFormInContext:(id)arg1 ;
-(id)_keypathsForDerivedPropertyValidation:(id*)arg1 ;
-(id)predicateFormat;
-(SEL)selector;
-(id)expressionValueWithObject:(id)arg1 context:(id)arg2 ;
-(NSPredicate *)predicate;
-(id)collection;
-(id)_expressionWithSubstitutionVariables:(id)arg1 ;
-(NSString *)function;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_shouldUseParensWithDescription;
-(id)subexpression;
-(void)allowEvaluation;
-(NSExpression *)leftExpression;
-(NSExpression *)rightExpression;
-(NSExpression *)falseExpression;
-(unsigned long long)expressionType;
-(NSExpression *)trueExpression;
-(id)expressionBlock;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(NSArray *)arguments;
-(id)description;
-(id)initWithExpressionType:(unsigned long long)arg1 ;
-(NSExpression *)operand;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)keyPath;
-(NSString *)variable;
-(BOOL)_allowsEvaluation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)constantValue;
@end

