/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)predicate;
-(id)expressionValueWithObject:(id)arg1 context:(id)arg2 ;
-(void)allowEvaluation;
-(id)predicateFormat;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)_expressionWithSubstitutionVariables:(id)arg1 ;
-(id)initWithPredicate:(id)arg1 trueExpression:(id)arg2 falseExpression:(id)arg3 ;
-(id)trueExpression;
-(id)falseExpression;
@end

