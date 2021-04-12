/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/

#import <libobjc.A.dylib/NSPredicateVisitor.h>

@class NSSet, NSMutableArray, NSPredicate;

@interface _OSLogSimplePredicate : NSObject <NSPredicateVisitor> {

	NSSet* _keys;
	NSSet* _operators;
	NSMutableArray* _stack;
	NSPredicate* _predicate;

}

@property (nonatomic,readonly) NSPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
-(NSPredicate *)predicate;
-(void)visitPredicate:(id)arg1 ;
-(void)visitPredicateExpression:(id)arg1 ;
-(void)visitPredicateOperator:(id)arg1 ;
-(void)processComparisonPredicate:(id)arg1 ;
-(void)processCompoundPredicate:(id)arg1 ;
-(id)initWithPredicate:(id)arg1 supportedKeys:(id)arg2 supportedOperators:(id)arg3 ;
-(BOOL)isSupportedExpression:(id)arg1 ;
@end

