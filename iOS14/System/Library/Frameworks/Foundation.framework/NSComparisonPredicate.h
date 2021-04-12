/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSPredicate.h>

@class NSPredicateOperator, NSExpression;

@interface NSComparisonPredicate : NSPredicate {

	void* _reserved2;
	NSPredicateOperator* _predicateOperator;
	NSExpression* _lhs;
	NSExpression* _rhs;

}

@property (readonly) unsigned long long predicateOperatorType; 
@property (readonly) unsigned long long comparisonPredicateModifier; 
@property (retain,readonly) NSExpression * leftExpression; 
@property (retain,readonly) NSExpression * rightExpression; 
@property (readonly) SEL customSelector; 
@property (readonly) unsigned long long options; 
+(BOOL)supportsSecureCoding;
+(id)predicateWithLeftExpression:(id)arg1 rightExpression:(id)arg2 modifier:(unsigned long long)arg3 type:(unsigned long long)arg4 options:(unsigned long long)arg5 ;
+(id)predicateWithLeftExpression:(id)arg1 rightExpression:(id)arg2 customSelector:(SEL)arg3 ;
+(id)predicateWithPredicateOperator:(id)arg1 leftExpression:(id)arg2 rightExpression:(id)arg3 ;
+(id)predicateWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightValue:(id)arg3 ;
+(id)predicateWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightKeyPath:(id)arg3 ;
-(id)minimalFormInContext:(id)arg1 ;
-(id)_keypathsForDerivedPropertyValidation:(id*)arg1 ;
-(BOOL)_isForeignObjectExpression:(id)arg1 givenContext:(id)arg2 ;
-(id)predicateFormat;
-(id)initWithLeftExpression:(id)arg1 rightExpression:(id)arg2 modifier:(unsigned long long)arg3 type:(unsigned long long)arg4 options:(unsigned long long)arg5 ;
-(id)initWithPredicateOperator:(id)arg1 leftExpression:(id)arg2 rightExpression:(id)arg3 ;
-(id)initWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightValue:(id)arg3 ;
-(id)initWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightKeyPath:(id)arg3 ;
-(id)initWithLeftExpression:(id)arg1 rightExpression:(id)arg2 customSelector:(SEL)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)options;
-(BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2 ;
-(void)allowEvaluation;
-(void)_acceptExpressions:(id)arg1 flags:(unsigned long long)arg2 ;
-(NSExpression *)leftExpression;
-(SEL)customSelector;
-(NSExpression *)rightExpression;
-(id)predicateOperator;
-(id)keyPathExpressionForString:(id)arg1 ;
-(unsigned long long)comparisonPredicateModifier;
-(unsigned long long)predicateOperatorType;
-(void)setPredicateOperator:(id)arg1 ;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(void)_acceptOperator:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)generateMetadataDescription;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)predicateWithSubstitutionVariables:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

