/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSubstitutionVariables:(NSSet *)arg1 ;
-(NSSet *)substitutionVariables;
-(void)visitPredicate:(id)arg1 ;
-(void)visitPredicateExpression:(id)arg1 ;
-(void)visitPredicateOperator:(id)arg1 ;
-(BOOL)predicate:(id)arg1 referencesSubstitutionVariablesFromSet:(id)arg2 ;
-(BOOL)predicateContainsSubstitutionVariables;
-(void)_inspectExpression:(id)arg1 ;
-(void)setPredicateContainsSubstitutionVariables:(BOOL)arg1 ;
@end

