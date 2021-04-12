/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSPredicateOperator.h>

@interface NSCompoundPredicateOperator : NSPredicateOperator
+(void)initialize;
+(id)andPredicateOperator;
+(id)notPredicateOperator;
+(id)orPredicateOperator;
-(id)minimalFormInContext:(id)arg1 ofPredicates:(id)arg2 ;
-(id)predicateFormat;
-(BOOL)evaluatePredicates:(id)arg1 withObject:(id)arg2 substitutionVariables:(id)arg3 ;
-(BOOL)evaluatePredicates:(id)arg1 withObject:(id)arg2 ;
-(id)symbol;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

