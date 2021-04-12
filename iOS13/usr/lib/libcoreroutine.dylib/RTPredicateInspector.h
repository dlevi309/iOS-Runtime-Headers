/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libobjc.A.dylib/NSPredicateVisitor.h>

@class NSSet;

@interface RTPredicateInspector : NSObject <NSPredicateVisitor> {

	BOOL _predicateContainsSubstitutionVariables;
	NSSet* _substitutionVariables;

}

@property (assign,nonatomic) BOOL predicateContainsSubstitutionVariables;              //@synthesize predicateContainsSubstitutionVariables=_predicateContainsSubstitutionVariables - In the implementation block
@property (nonatomic,retain) NSSet * substitutionVariables;                            //@synthesize substitutionVariables=_substitutionVariables - In the implementation block
-(void)visitPredicate:(id)arg1 ;
-(void)visitPredicateExpression:(id)arg1 ;
-(void)visitPredicateOperator:(id)arg1 ;
-(NSSet *)substitutionVariables;
-(void)setSubstitutionVariables:(NSSet *)arg1 ;
-(BOOL)predicate:(id)arg1 referencesSubstitutionVariablesFromSet:(id)arg2 ;
-(void)_inspectExpression:(id)arg1 ;
-(BOOL)predicateContainsSubstitutionVariables;
-(void)setPredicateContainsSubstitutionVariables:(BOOL)arg1 ;
@end

