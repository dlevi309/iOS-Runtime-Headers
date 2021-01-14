/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithPredicate:(id)arg1 supportedKeys:(id)arg2 supportedOperators:(id)arg3 ;
-(void)visitPredicateExpression:(id)arg1 ;
-(void)visitPredicateOperator:(id)arg1 ;
-(BOOL)isSupportedExpression:(id)arg1 ;
-(void)processComparisonPredicate:(id)arg1 ;
-(void)processCompoundPredicate:(id)arg1 ;
@end

