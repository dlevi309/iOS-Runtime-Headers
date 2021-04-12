/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NURule.h>

@interface NUTargetSelectorRule : NURule {

	/*function pointer*/void* _predicate;
	/*function pointer*/void* _action;
	id _target;
	SEL _predicateSelector;
	SEL _actionSelector;

}

@property (nonatomic,__weak,readonly) id target;                   //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL predicateSelector;              //@synthesize predicateSelector=_predicateSelector - In the implementation block
@property (nonatomic,readonly) SEL actionSelector;                 //@synthesize actionSelector=_actionSelector - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(SEL)actionSelector;
-(id)initWithCoder:(id)arg1 ;
-(void)performActionWithSystem:(id)arg1 ;
-(id)target;
-(BOOL)evaluatePredicateWithSystem:(id)arg1 ;
-(id)initWithTarget:(id)arg1 predicate:(SEL)arg2 action:(SEL)arg3 ;
-(BOOL)_defaultPredicate:(id)arg1 ;
-(void)_defaultAction:(id)arg1 ;
-(SEL)predicateSelector;
@end

