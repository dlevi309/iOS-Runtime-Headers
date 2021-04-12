/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InAppMessagesCore.framework/InAppMessagesCore
*/


@class NSMutableArray, NSCompoundPredicate, NSMutableDictionary;

@interface IAMDecomposedKey : NSObject {

	NSMutableArray* rawPredicateConditions;
	NSCompoundPredicate* compoundPredicate;
	BOOL compoundPredicateNeedsInitialization;
	NSMutableDictionary* _ruleDestructuredIdentifiers;

}

@property (nonatomic,retain) NSMutableDictionary * ruleDestructuredIdentifiers;              //@synthesize ruleDestructuredIdentifiers=_ruleDestructuredIdentifiers - In the implementation block
-(id)init;
-(void)setRuleDestructuredIdentifiers:(NSMutableDictionary *)arg1 ;
-(void)constructCompoundPredicateIfNeeded;
-(void)addPredicateCondition:(id)arg1 ;
-(BOOL)hasPredicates;
-(BOOL)predicatesMatchFigaroEventProperties:(id)arg1 ;
-(NSMutableDictionary *)ruleDestructuredIdentifiers;
@end

