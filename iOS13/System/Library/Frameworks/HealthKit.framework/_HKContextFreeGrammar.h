/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@class NSMutableSet, NSCharacterSet, _HKCFGNonTerminal;

@interface _HKContextFreeGrammar : NSObject {

	NSMutableSet* _nonTerminals;
	NSMutableSet* _terminals;
	NSCharacterSet* _terminalCharacters;
	_HKCFGNonTerminal* _rootNonTerminal;
	/*^block*/id _emptyStringEvaluator;

}

@property (nonatomic,readonly) _HKCFGNonTerminal * rootNonTerminal;              //@synthesize rootNonTerminal=_rootNonTerminal - In the implementation block
@property (nonatomic,copy,readonly) id emptyStringEvaluator;                     //@synthesize emptyStringEvaluator=_emptyStringEvaluator - In the implementation block
+(id)grammarWithRootNonTerminal:(id)arg1 emptyStringEvaluator:(/*^block*/id)arg2 ;
+(id)grammarWithRootNonTerminal:(id)arg1 ;
-(void)invalidate;
-(id)initWithRootNonTerminal:(id)arg1 emptyStringEvaluator:(/*^block*/id)arg2 ;
-(void)_gatherExpressions;
-(void)_gatherExpressionsStartingAt:(id)arg1 ;
-(id)parseTreeForString:(id)arg1 ;
-(_HKCFGNonTerminal *)rootNonTerminal;
-(id)emptyStringEvaluator;
@end

