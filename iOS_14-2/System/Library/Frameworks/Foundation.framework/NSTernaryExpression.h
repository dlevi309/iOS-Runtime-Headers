/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSExpression.h>

@class NSPredicate, NSExpression;

@interface NSTernaryExpression : NSExpression {

	NSPredicate* _predicate;
	NSExpression* _trueExpression;
	NSExpression* _falseExpression;

}
+(BOOL)supportsSecureCoding;
-(id)_keypathsForDerivedPropertyValidation:(id*)arg1 ;
-(id)predicateFormat;
-(id)initWithPredicate:(id)arg1 trueExpression:(id)arg2 falseExpression:(id)arg3 ;
-(id)expressionValueWithObject:(id)arg1 context:(id)arg2 ;
-(id)predicate;
-(id)_expressionWithSubstitutionVariables:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)allowEvaluation;
-(id)falseExpression;
-(id)trueExpression;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

