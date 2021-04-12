/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSExpression.h>

@class NSVariableExpression, NSExpression;

@interface NSVariableAssignmentExpression : NSExpression {

	NSVariableExpression* _assignmentVariable;
	NSExpression* _subexpression;

}
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)expressionValueWithObject:(id)arg1 context:(id)arg2 ;
-(id)variable;
-(void)allowEvaluation;
-(id)predicateFormat;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)_expressionWithSubstitutionVariables:(id)arg1 ;
-(id)initWithAssignmentVariable:(id)arg1 expression:(id)arg2 ;
-(id)subexpression;
-(id)initWithAssignmentExpression:(id)arg1 expression:(id)arg2 ;
-(id)assignmentVariable;
@end

