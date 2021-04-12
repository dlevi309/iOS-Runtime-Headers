/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


@interface SGEligibilityCheckResult : NSObject {

	BOOL _isEligible;
	BOOL _isEligibleExceptForAge;

}

@property (assign,nonatomic) BOOL isEligible;                          //@synthesize isEligible=_isEligible - In the implementation block
@property (assign,nonatomic) BOOL isEligibleExceptForAge;              //@synthesize isEligibleExceptForAge=_isEligibleExceptForAge - In the implementation block
-(BOOL)isEligibleExceptForAge;
-(void)setIsEligible:(BOOL)arg1 ;
-(void)setIsEligibleExceptForAge:(BOOL)arg1 ;
-(BOOL)isEligible;
@end

