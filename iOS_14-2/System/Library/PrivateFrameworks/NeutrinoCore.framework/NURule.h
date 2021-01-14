/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NURule : NSObject <NSSecureCoding> {

	long long _salience;

}

@property (assign,nonatomic) long long salience;              //@synthesize salience=_salience - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)ruleWithPredicate:(id)arg1 assertingFact:(id)arg2 grade:(double)arg3 ;
+(id)ruleWithPredicate:(id)arg1 retractingFact:(id)arg2 grade:(double)arg3 ;
+(id)ruleWithPredicate:(id)arg1 action:(/*^block*/id)arg2 ;
+(id)ruleWithTarget:(id)arg1 predicate:(SEL)arg2 action:(SEL)arg3 ;
+(id)ruleWithBlockPredicate:(/*^block*/id)arg1 action:(/*^block*/id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)performActionWithSystem:(id)arg1 ;
-(long long)salience;
-(BOOL)evaluatePredicateWithSystem:(id)arg1 ;
-(void)setSalience:(long long)arg1 ;
@end

