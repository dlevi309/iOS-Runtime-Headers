/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <libobjc.A.dylib/NSPredicateVisitor.h>

@class NSSet;

@interface ATXActionCriteriaPredicateChecker : NSObject <NSPredicateVisitor> {

	NSSet* _propertyNames;
	BOOL _ok;

}
-(id)initWithObject:(id)arg1 ;
-(void)visitPredicate:(id)arg1 ;
-(void)visitPredicateExpression:(id)arg1 ;
-(void)visitPredicateOperator:(id)arg1 ;
-(BOOL)isValid:(id)arg1 ;
@end

