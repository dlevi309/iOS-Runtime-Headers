/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSExpression.h>

@class NSExpression, NSPredicate;

@interface NSSubqueryExpression : NSExpression {

	NSExpression* _collection;
	NSExpression* _variableExpression;
	NSPredicate* _subpredicate;

}
+(BOOL)supportsSecureCoding;
-(id)minimalFormInContext:(id)arg1 ;
-(id)_keypathsForDerivedPropertyValidation:(id*)arg1 ;
-(id)predicateFormat;
-(id)initWithExpression:(id)arg1 usingIteratorVariable:(id)arg2 predicate:(id)arg3 ;
-(id)expressionValueWithObject:(id)arg1 context:(id)arg2 ;
-(id)predicate;
-(id)collection;
-(id)initWithExpression:(id)arg1 usingIteratorExpression:(id)arg2 predicate:(id)arg3 ;
-(id)_expressionWithSubstitutionVariables:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_shouldUseParensWithDescription;
-(void)allowEvaluation;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)variableExpression;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)variable;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

