/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/

#import <libobjc.A.dylib/NSPredicateVisitor.h>

@class NSMutableArray, NSPredicate, NSMutableSet, NSArray;

@interface _OSLogPredicateMapper : NSObject <NSPredicateVisitor> {

	int _pass;
	NSMutableArray* _validationErrors;
	unsigned long long _flags;
	NSPredicate* _predicate;
	NSMutableArray* _stack;

}

@property (nonatomic,retain) NSMutableArray * stack;                       //@synthesize stack=_stack - In the implementation block
@property (nonatomic,readonly) NSMutableSet * validKeyPaths; 
@property (nonatomic,readonly) unsigned long long flags;                   //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) NSPredicate * mappedPredicate;              //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,readonly) NSArray * validationErrors;                 //@synthesize validationErrors=_validationErrors - In the implementation block
-(unsigned long long)flags;
-(void)visitPredicate:(id)arg1 ;
-(void)visitPredicateExpression:(id)arg1 ;
-(void)visitPredicateOperator:(id)arg1 ;
-(id)initWithPredicate:(id)arg1 ;
-(void)setStack:(NSMutableArray *)arg1 ;
-(NSMutableArray *)stack;
-(NSArray *)validationErrors;
-(NSPredicate *)mappedPredicate;
-(id)initWithPredicate:(id)arg1 andValidate:(BOOL)arg2 ;
-(NSMutableSet *)validKeyPaths;
-(id)mapKeywordToConstantExpression:(id)arg1 keywordMap:(id)arg2 ;
-(id)mapEventTypeExpression:(id)arg1 ;
-(id)mapMessageTypeExpression:(id)arg1 ;
-(id)mapSignpostScopeExpression:(id)arg1 ;
-(id)mapSignpostTypeExpression:(id)arg1 ;
-(void)mapLeftExpression:(id*)arg1 andRightExpression:(id*)arg2 ;
-(void)processComparisonPredicate:(id)arg1 ;
-(void)processCompoundPredicate:(id)arg1 ;
-(void)validateExpression:(id)arg1 ;
@end

