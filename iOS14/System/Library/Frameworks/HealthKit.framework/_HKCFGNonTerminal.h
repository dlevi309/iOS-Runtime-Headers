/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/_HKCFGExpression.h>

@class NSString, NSMutableArray, NSCharacterSet;

@interface _HKCFGNonTerminal : _HKCFGExpression {

	NSString* _label;
	NSMutableArray* _replacementRules;
	NSCharacterSet* _charactersToBeSkipped;

}

@property (nonatomic,copy) NSCharacterSet * charactersToBeSkipped;              //@synthesize charactersToBeSkipped=_charactersToBeSkipped - In the implementation block
+(id)nonTerminalWithLabel:(id)arg1 ;
-(id)_label;
-(void)_invalidate;
-(unsigned long long)_minimumLength;
-(id)initWithLabel:(id)arg1 ;
-(id)_replacementRules;
-(void)_tryNodesWithContext:(id)arg1 solutionTest:(/*^block*/id)arg2 ;
-(id)_parseTreeWithContext:(id)arg1 ;
-(void)addReplacementRuleWithExpressions:(id)arg1 nodeEvaluator:(/*^block*/id)arg2 ;
-(BOOL)_tryNodesForExpressions:(id)arg1 nodes:(id)arg2 context:(id)arg3 solutionTest:(/*^block*/id)arg4 ;
-(void)setCharactersToBeSkipped:(NSCharacterSet *)arg1 ;
-(void)_checkForCycles;
-(NSCharacterSet *)charactersToBeSkipped;
-(void)_checkForCycles:(id)arg1 ;
@end

