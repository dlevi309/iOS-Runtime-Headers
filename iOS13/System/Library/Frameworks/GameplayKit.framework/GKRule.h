/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/


@interface GKRule : NSObject {

	long long _salience;

}

@property (assign,nonatomic) long long salience;              //@synthesize salience=_salience - In the implementation block
+(id)ruleWithPredicate:(id)arg1 assertingFact:(id)arg2 grade:(float)arg3 ;
+(id)ruleWithPredicate:(id)arg1 retractingFact:(id)arg2 grade:(float)arg3 ;
+(id)ruleWithBlockPredicate:(/*^block*/id)arg1 action:(/*^block*/id)arg2 ;
-(BOOL)evaluatePredicateWithSystem:(id)arg1 ;
-(void)performActionWithSystem:(id)arg1 ;
-(long long)salience;
-(void)setSalience:(long long)arg1 ;
@end

