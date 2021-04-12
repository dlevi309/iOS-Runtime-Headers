/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSExpression.h>

@class NSExpression;

@interface NSSetExpression : NSExpression {

	NSExpression* _left;
	NSExpression* _right;

}
+(BOOL)supportsSecureCoding;
-(id)minimalFormInContext:(id)arg1 ;
-(id)_keypathsForDerivedPropertyValidation:(id*)arg1 ;
-(id)predicateFormat;
-(id)expressionValueWithObject:(id)arg1 context:(id)arg2 ;
-(id)_expressionWithSubstitutionVariables:(id)arg1 ;
-(id)initWithType:(unsigned long long)arg1 leftExpression:(id)arg2 rightExpression:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)allowEvaluation;
-(id)leftExpression;
-(id)rightExpression;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

