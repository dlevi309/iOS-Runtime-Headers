/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/


@class WBSAllowedPasswordRule, NSArray, WBSMaxConsecutivePasswordRule, WBSMinLengthPasswordRule, WBSMaxLengthPasswordRule;

@interface WBSPasswordRuleSet : NSObject {

	WBSAllowedPasswordRule* _allowedRule;
	NSArray* _requiredRules;
	WBSMaxConsecutivePasswordRule* _maxConsecutiveRule;
	WBSMinLengthPasswordRule* _minLengthRule;
	WBSMaxLengthPasswordRule* _maxLengthRule;

}

@property (nonatomic,readonly) WBSAllowedPasswordRule * allowedRule;                            //@synthesize allowedRule=_allowedRule - In the implementation block
@property (nonatomic,copy,readonly) NSArray * requiredRules;                                    //@synthesize requiredRules=_requiredRules - In the implementation block
@property (nonatomic,readonly) WBSMaxConsecutivePasswordRule * maxConsecutiveRule;              //@synthesize maxConsecutiveRule=_maxConsecutiveRule - In the implementation block
@property (nonatomic,readonly) WBSMinLengthPasswordRule * minLengthRule;                        //@synthesize minLengthRule=_minLengthRule - In the implementation block
@property (nonatomic,readonly) WBSMaxLengthPasswordRule * maxLengthRule;                        //@synthesize maxLengthRule=_maxLengthRule - In the implementation block
+(id)ruleSetWithAllowedRule:(id)arg1 requiredRules:(id)arg2 maxConsecutiveRule:(id)arg3 ;
+(id)ruleSetWithAllowedRule:(id)arg1 requiredRules:(id)arg2 maxConsecutiveRule:(id)arg3 minLengthRule:(id)arg4 maxLengthRule:(id)arg5 ;
-(id)initWithAllowedRule:(id)arg1 requiredRules:(id)arg2 maxConsecutiveRule:(id)arg3 minLengthRule:(id)arg4 maxLengthRule:(id)arg5 ;
-(WBSAllowedPasswordRule *)allowedRule;
-(NSArray *)requiredRules;
-(WBSMaxConsecutivePasswordRule *)maxConsecutiveRule;
-(WBSMinLengthPasswordRule *)minLengthRule;
-(WBSMaxLengthPasswordRule *)maxLengthRule;
@end

